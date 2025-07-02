#include "server.h"
#include <QDebug>
#include "customermanager.h"
#include "restaurantownermanager.h"
#include "ordermanager.h"
#include "menumanager.h"
#include "orderstatus.h"
#include "securityutils.h"

Server* Server::instance = nullptr;

Server* Server::getInstance()
{
    if (instance == nullptr) {
        instance = new Server();
    }
    return instance;
}

Server::Server(QObject *parent)
    : QObject(parent)
    , m_tcpServer(nullptr)
    , m_dbManager(DatabaseManager::getInstance())
    , m_authSystem(AuthSystem::getInstance())
    , m_wsServer(WebSocketServer::getInstance())
{
}

Server::~Server()
{
    stop();
}

bool Server::start(quint16 tcpPort, quint16 wsPort)
{
    // Start TCP server
    m_tcpServer = new QTcpServer(this);
    if (!m_tcpServer->listen(QHostAddress::Any, tcpPort)) {
        qDebug() << "TCP server failed to start:" << m_tcpServer->errorString();
        return false;
    }

    // Connect signals to handler methods directly
    connect(m_tcpServer, &QTcpServer::newConnection, this, &Server::handleNewConnection);
    qDebug() << "TCP server started on port" << tcpPort;

    // Start WebSocket server
    if (!m_wsServer->start(wsPort)) {
        qDebug() << "WebSocket server failed to start";
        m_tcpServer->close();
        return false;
    }

    qDebug() << "Server started successfully";
    return true;
}

void Server::stop()
{
    if (m_tcpServer) {
        m_tcpServer->close();
        delete m_tcpServer;
        m_tcpServer = nullptr;
    }

    m_wsServer->stop();
        qDebug() << "Server stopped";
}

void Server::handleNewConnection()
{
    QTcpSocket* client = m_tcpServer->nextPendingConnection();
    connect(client, &QTcpSocket::readyRead, this, &Server::handleReadyRead);
    connect(client, &QTcpSocket::disconnected, this, &Server::handleDisconnection);
    qDebug() << "New client connected:" << client->peerAddress().toString();
}

void Server::handleReadyRead()
{
    QTcpSocket* client = qobject_cast<QTcpSocket*>(sender());
    if (!client) return;

    QByteArray data = client->readAll();
    QJsonDocument doc = QJsonDocument::fromJson(data);
    if (!doc.isObject()) {
        QJsonObject error;
        error["status"] = "error";
        error["message"] = "Invalid request format";
        sendResponse(client, error);
        return;
    }

    processRequest(client, doc.object());
}

void Server::handleDisconnection()
{
    QTcpSocket* client = qobject_cast<QTcpSocket*>(sender());
    if (client) {
        m_clients.remove(client);
        client->deleteLater();
        qDebug() << "Client disconnected:" << client->peerAddress().toString();
    }
}

void Server::processRequest(QTcpSocket* client, const QJsonObject& request)
{
    QString type = request["type"].toString();
    QJsonObject response;

    if (type == "login") {
        QString loginId = request["loginId"].toString();
        QString password = request["password"].toString();
        QString token = m_authSystem->login(loginId, password);
        if (!token.isEmpty()) {
            QString userId = m_authSystem->getUserIdFromToken(token);
            QVariantMap userData = m_dbManager->getUserById(userId);
            
            response["status"] = "success";
            response["token"] = token;
            response["type"] = "login";
            response["userData"] = QJsonObject::fromVariantMap(userData);
            m_clients[client] = userId;
        } else {
            response["status"] = "error";
            response["message"] = "Invalid credentials";
        }
    }
    else if (type == "register") {
        QString firstName = request["firstName"].toString();
        QString lastName = request["lastName"].toString();
        QString email = request["email"].toString();
        QString phone = request["phone"].toString();
        QString password = request["password"].toString();
        QString userType = request["userType"].toString();
        if (m_authSystem->registerUser(firstName, lastName, email, phone, password, userType)) {
            response["status"] = "success";
            response["message"] = "Registration successful";
        } else {
            response["status"] = "error";
            response["message"] = "Registration failed";
        }
    }
    else if (type == "register_customer") {
        QString firstName = request["firstName"].toString();
        QString lastName = request["lastName"].toString();
        QString email = request["email"].toString();
        QString phone = request["phone"].toString();
        QString password = request["password"].toString();
        QString location = request["location"].toString();
        bool success = m_dbManager->createCustomer(
            firstName, lastName, firstName + " " + lastName, email,
            SecurityUtils::hashPassword(password), phone, "", "", location
        );
        if (success) {
            response["status"] = "success";
            response["type"] = "register_customer";
            response["message"] = "Customer registration successful";
        } else {
            response["status"] = "error";
            response["type"] = "register_customer";
            response["message"] = "Customer registration failed";
        }
    }
    else if (type == "register_owner") {
        QString firstName = request["firstName"].toString();
        QString lastName = request["lastName"].toString();
        QString email = request["email"].toString();
        QString phone = request["phone"].toString();
        QString password = request["password"].toString();
        QString restaurantName = request["restaurantName"].toString();
        QString restaurantNumber = request["restaurantNumber"].toString();
        QString location = request["location"].toString();
        bool success = m_dbManager->createRestaurantOwner(firstName, lastName, firstName + " " + lastName, email, SecurityUtils::hashPassword(password), phone, restaurantName, restaurantNumber, location);
        if (success) {
            response["status"] = "success";
            response["type"] = "register_owner";
            response["message"] = "Restaurant owner registration successful";
        } else {
            response["status"] = "error";
            response["type"] = "register_owner";
            response["message"] = "Restaurant owner registration failed";
        }
    }
    else if (type == "get_customer_profile") {
        QString customerId = request["customerId"].toString();
        response["profile"] = QJsonObject::fromVariantMap(CustomerManager::getInstance()->getProfile(customerId));
    }
    else if (type == "get_customer_order_history") {
        QString customerId = request["customerId"].toString();
        response["order_history"] = CustomerManager::getInstance()->getOrderHistory(customerId);
    }
    else if (type == "get_owner_profile") {
        QString ownerId = request["ownerId"].toString();
        response["profile"] = QJsonObject::fromVariantMap(RestaurantOwnerManager::getInstance()->getProfile(ownerId));
    }
    else if (type == "get_owner_restaurants") {
        QString ownerId = request["ownerId"].toString();
        response["restaurants"] = RestaurantOwnerManager::getInstance()->getRestaurants(ownerId);
    }
    else if (type == "create_order") {
        QString customerId = request["customerId"].toString();
        QString restaurantId = request["restaurantId"].toString();
        QVariantList items = request["items"].toArray().toVariantList();
        bool ok = OrderManager::getInstance()->createOrder(customerId, restaurantId, items);
        response["status"] = ok ? "success" : "error";
    }
    else if (type == "update_order_status") {
        QString orderId = request["orderId"].toString();
        QString status = request["status"].toString();
        
        // Validate the status
        if (!OrderStatus::getInstance()->isValidStatus(status)) {
            response["status"] = "error";
            response["message"] = "Invalid order status. Valid statuses: " + OrderStatus::getInstance()->getValidStatuses().join(", ");
        } else {
            bool ok = OrderManager::getInstance()->updateOrderStatus(orderId, status);
            response["status"] = ok ? "success" : "error";
            
            if (ok) {
                // Notify observers about status change
                OrderStatus::getInstance()->notifyObservers(orderId, status);
            }
        }
    }
    else if (type == "get_order_history") {
        QString userId = request["userId"].toString();
        QString userType = request["userType"].toString();
        response["order_history"] = OrderManager::getInstance()->getOrderHistory(userId, userType);
    }
    else if (type == "create_menu") {
        QString restaurantId = request["restaurantId"].toString();
        bool ok = MenuManager::getInstance()->createMenu(restaurantId);
        response["status"] = ok ? "success" : "error";
    }
    else if (type == "add_menu_item") {
        QString menuId = request["menuId"].toString();
        QString name = request["name"].toString();
        QString description = request["description"].toString();
        double price = request["price"].toDouble();
        QString ingredients = request["ingredients"].toString();
        QString category = request["category"].toString();
        QString imageUrl = request["imageUrl"].toString();
        bool ok = MenuManager::getInstance()->addMenuItem(menuId, name, description, price, ingredients, category, imageUrl);
        response["status"] = ok ? "success" : "error";
    }
    else if (type == "update_menu_item") {
        QString menuId = request["menuId"].toString();
        QString itemId = request["itemId"].toString();
        QVariantMap updates = request["updates"].toObject().toVariantMap();
        bool ok = MenuManager::getInstance()->updateMenuItem(menuId, itemId, updates);
        response["status"] = ok ? "success" : "error";
    }
    else if (type == "delete_menu_item") {
        QString menuId = request["menuId"].toString();
        QString itemId = request["itemId"].toString();
        bool ok = MenuManager::getInstance()->deleteMenuItem(menuId, itemId);
        response["status"] = ok ? "success" : "error";
    }
    else if (type == "get_menu") {
        QString restaurantId = request["restaurantId"].toString();
        response["menu"] = MenuManager::getInstance()->getMenu(restaurantId);
    }
    else if (type == "get_restaurants") {
        response["restaurants"] = m_dbManager->getAllRestaurants();
    }
    else if (type == "order") {
        QString token = request["token"].toString();
        if (!m_authSystem->validateSession(token)) {
            response["status"] = "error";
            response["message"] = "Invalid session";
            sendResponse(client, response);
            return;
        }

        QString customerId = m_authSystem->getUserIdFromToken(token);
        QString restaurantId = request["restaurantId"].toString();
        QJsonArray items = request["items"].toArray();

        if (m_dbManager->createOrder(customerId, restaurantId, items.toVariantList())) {
            response["status"] = "success";
            response["message"] = "Order created successfully";
            
            // Notify restaurant about new order
            QJsonObject notification;
            notification["type"] = "new_order";
            notification["orderId"] = response["orderId"].toString();
            m_wsServer->broadcastToRestaurant(restaurantId, notification);
        } else {
            response["status"] = "error";
            response["message"] = "Failed to create order";
        }
    }
    else if (type == "add_order_comment") {
        QString orderId = request["orderId"].toString();
        QString customerId = request["customerId"].toString();
        QString comment = request["comment"].toString();
        bool ok = m_dbManager->addOrderComment(orderId, customerId, comment);
        response["status"] = ok ? "success" : "error";
    }
    else if (type == "get_order_comments") {
        QString orderId = request["orderId"].toString();
        response["comments"] = m_dbManager->getOrderComments(orderId);
    }
    else {
        response["status"] = "error";
        response["message"] = "Unknown request type";
    }

    sendResponse(client, response);
}

void Server::sendResponse(QTcpSocket* client, const QJsonObject& response)
{
    QJsonDocument doc(response);
    client->write(doc.toJson());
}

void Server::broadcastOrderUpdate(const QString& orderId, const QString& status)
{
    m_wsServer->broadcastOrderUpdate(orderId, status);
} 