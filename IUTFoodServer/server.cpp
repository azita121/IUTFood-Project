#include "server.h"
#include "databasemanager.h"
#include "authsystem.h"
#include "invoker.h"
#include <QJsonDocument>
#include <QJsonObject>
#include <QDebug>

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
    , tcpServer(new QTcpServer(this))
    , databaseManager(std::make_unique<DatabaseManager>())
    , authSystem(std::make_unique<AuthSystem>())
    , invoker(std::make_unique<Invoker>())
    , orderStatus(std::make_unique<OrderStatus>())
    , orderStatusObserver(std::make_unique<OrderStatusObserver>())
{
    connect(tcpServer, &QTcpServer::newConnection, this, &Server::onNewConnection);
    
    // Attach the observer to the order status subject
    orderStatus->attach(orderStatusObserver.get());
}

Server::~Server()
{
    stopServer();
}

bool Server::startServer(quint16 port)
{
    if (!tcpServer->listen(QHostAddress::Any, port)) {
        qDebug() << "Server failed to start. Error:" << tcpServer->errorString();
        return false;
    }
    qDebug() << "Server started on port" << port;
    return true;
}

void Server::stopServer()
{
    if (tcpServer->isListening()) {
        tcpServer->close();
        qDebug() << "Server stopped";
    }
}

void Server::onNewConnection()
{
    QTcpSocket* clientSocket = tcpServer->nextPendingConnection();
    
    connect(clientSocket, &QTcpSocket::readyRead, this, &Server::onReadyRead);
    connect(clientSocket, &QTcpSocket::disconnected, this, &Server::onClientDisconnected);
    
    connectedClients[clientSocket] = ""; // Empty userId initially
    emit clientConnected(clientSocket);
    
    qDebug() << "New client connected:" << clientSocket->peerAddress().toString();
}

void Server::onReadyRead()
{
    QTcpSocket* clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (!clientSocket) return;

    QByteArray data = clientSocket->readAll();
    handleClientMessage(clientSocket, data);
}

void Server::onClientDisconnected()
{
    QTcpSocket* clientSocket = qobject_cast<QTcpSocket*>(sender());
    if (!clientSocket) return;

    // Remove all order status subscriptions for this client
    orderStatusObserver->removeClientSubscriptions(clientSocket);

    connectedClients.remove(clientSocket);
    clientSocket->deleteLater();
    
    emit clientDisconnected(clientSocket);
    qDebug() << "Client disconnected:" << clientSocket->peerAddress().toString();
}

void Server::handleClientMessage(QTcpSocket* clientSocket, const QByteArray& message)
{
    QJsonDocument doc = QJsonDocument::fromJson(message);
    if (doc.isNull() || !doc.isObject()) {
        qDebug() << "Invalid JSON message received";
        return;
    }

    QJsonObject request = doc.object();
    processRequest(request, clientSocket);
}

void Server::processRequest(const QJsonObject& request, QTcpSocket* clientSocket)
{
    QString type = request["type"].toString();
    QJsonObject response;

    if (type == "login") {
        // Handle login request
        QString username = request["username"].toString();
        QString password = request["password"].toString();
        
        if (authSystem->login(username, password)) {
            connectedClients[clientSocket] = username;
            response["status"] = "success";
            response["message"] = "Login successful";
        } else {
            response["status"] = "error";
            response["message"] = "Invalid credentials";
        }
    }
    else if (type == "register") {
        // Handle registration request
        QString username = request["username"].toString();
        QString password = request["password"].toString();
        QString email = request["email"].toString();
        QString userType = request["userType"].toString();

        if (authSystem->registerUser(username, password, email, userType)) {
            response["status"] = "success";
            response["message"] = "Registration successful";
        } else {
            response["status"] = "error";
            response["message"] = "Registration failed";
        }
    }
    else if (type == "subscribe_order_status") {
        QString orderId = request["orderId"].toString();
        handleOrderStatusSubscription(orderId, clientSocket);
        response["status"] = "success";
        response["message"] = "Subscribed to order status updates";
    }
    else if (type == "unsubscribe_order_status") {
        QString orderId = request["orderId"].toString();
        handleOrderStatusUnsubscription(orderId, clientSocket);
        response["status"] = "success";
        response["message"] = "Unsubscribed from order status updates";
    }
    else if (type == "update_order_status") {
        QString orderId = request["orderId"].toString();
        QString status = request["status"].toString();
        
        // Update order status in database
        if (databaseManager->updateOrderStatus(orderId, status)) {
            // Notify all observers about the status change
            orderStatus->notifyObservers(orderId, status);
            response["status"] = "success";
            response["message"] = "Order status updated";
        } else {
            response["status"] = "error";
            response["message"] = "Failed to update order status";
        }
    }

    sendResponse(clientSocket, response);
}

void Server::handleOrderStatusSubscription(const QString& orderId, QTcpSocket* clientSocket)
{
    orderStatusObserver->addClientSubscription(orderId, clientSocket);
}

void Server::handleOrderStatusUnsubscription(const QString& orderId, QTcpSocket* clientSocket)
{
    orderStatusObserver->removeClientSubscription(orderId, clientSocket);
}

void Server::sendResponse(QTcpSocket* clientSocket, const QJsonObject& response)
{
    QJsonDocument doc(response);
    clientSocket->write(doc.toJson());
} 