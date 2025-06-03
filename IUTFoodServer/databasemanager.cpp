#include "databasemanager.h"
#include <QDebug>

DatabaseManager* DatabaseManager::instance = nullptr;

DatabaseManager* DatabaseManager::getInstance()
{
    if (instance == nullptr) {
        instance = new DatabaseManager();
    }
    return instance;
}

DatabaseManager::DatabaseManager(QObject *parent)
    : QObject(parent)
    , connected(false)
{
    db = QSqlDatabase::addDatabase("QPSQL"); // Using PostgreSQL
}

DatabaseManager::~DatabaseManager()
{
    disconnect();
}

bool DatabaseManager::connect(const QString& host, const QString& database, const QString& username, const QString& password)
{
    db.setHostName(host);
    db.setDatabaseName(database);
    db.setUserName(username);
    db.setPassword(password);

    if (!db.open()) {
        qDebug() << "Database connection failed:" << db.lastError().text();
        connected = false;
        return false;
    }

    connected = true;
    qDebug() << "Database connected successfully";
    return true;
}

void DatabaseManager::disconnect()
{
    if (connected) {
        db.close();
        connected = false;
        qDebug() << "Database disconnected";
    }
}

bool DatabaseManager::isConnected() const
{
    return connected;
}

bool DatabaseManager::createUser(const QString& username, const QString& passwordHash, const QString& email, const QString& userType)
{
    QVariantMap params;
    params[":username"] = username;
    params[":password"] = passwordHash;
    params[":email"] = email;
    params[":user_type"] = userType;

    QString query = "INSERT INTO users (username, password, email, user_type) "
                   "VALUES (:username, :password, :email, :user_type)";

    return executeQuery(query, params);
}

QString DatabaseManager::getUserId(const QString& username)
{
    QVariantMap params;
    params[":username"] = username;

    QString query = "SELECT id FROM users WHERE username = :username";
    
    QSqlQuery result = prepareQuery(query, params);
    if (result.next()) {
        return result.value(0).toString();
    }
    return QString();
}

QString DatabaseManager::getUserPasswordHash(const QString& userId)
{
    QVariantMap params;
    params[":id"] = userId;

    QString query = "SELECT password FROM users WHERE id = :id";
    
    QSqlQuery result = prepareQuery(query, params);
    if (result.next()) {
        return result.value(0).toString();
    }
    return QString();
}

QString DatabaseManager::getUserType(const QString& userId)
{
    QVariantMap params;
    params[":id"] = userId;

    QString query = "SELECT user_type FROM users WHERE id = :id";
    
    QSqlQuery result = prepareQuery(query, params);
    if (result.next()) {
        return result.value(0).toString();
    }
    return QString();
}

bool DatabaseManager::updateUser(const QString& userId, const QVariantMap& updates)
{
    QStringList setClauses;
    QVariantMap params;
    params[":id"] = userId;

    for (auto it = updates.begin(); it != updates.end(); ++it) {
        setClauses << QString("%1 = :%1").arg(it.key());
        params[":" + it.key()] = it.value();
    }

    QString query = QString("UPDATE users SET %1 WHERE id = :id")
                   .arg(setClauses.join(", "));

    return executeQuery(query, params);
}

bool DatabaseManager::deleteUser(const QString& userId)
{
    QVariantMap params;
    params[":id"] = userId;

    QString query = "DELETE FROM users WHERE id = :id";
    return executeQuery(query, params);
}

bool DatabaseManager::createRestaurant(const QString& name, const QString& address, const QString& type)
{
    QVariantMap params;
    params[":name"] = name;
    params[":address"] = address;
    params[":type"] = type;

    QString query = "INSERT INTO restaurants (name, address, type) "
                   "VALUES (:name, :address, :type)";

    return executeQuery(query, params);
}

bool DatabaseManager::updateRestaurant(const QString& restaurantId, const QVariantMap& updates)
{
    QStringList setClauses;
    QVariantMap params;
    params[":id"] = restaurantId;

    for (auto it = updates.begin(); it != updates.end(); ++it) {
        setClauses << QString("%1 = :%1").arg(it.key());
        params[":" + it.key()] = it.value();
    }

    QString query = QString("UPDATE restaurants SET %1 WHERE id = :id")
                   .arg(setClauses.join(", "));

    return executeQuery(query, params);
}

bool DatabaseManager::deleteRestaurant(const QString& restaurantId)
{
    QVariantMap params;
    params[":id"] = restaurantId;

    QString query = "DELETE FROM restaurants WHERE id = :id";
    return executeQuery(query, params);
}

bool DatabaseManager::createMenu(const QString& restaurantId)
{
    QVariantMap params;
    params[":restaurant_id"] = restaurantId;

    QString query = "INSERT INTO menus (restaurant_id) VALUES (:restaurant_id)";
    return executeQuery(query, params);
}

bool DatabaseManager::addMenuItem(const QString& menuId, const QString& name, const QString& description, double price)
{
    QVariantMap params;
    params[":menu_id"] = menuId;
    params[":name"] = name;
    params[":description"] = description;
    params[":price"] = price;

    QString query = "INSERT INTO menu_items (menu_id, name, description, price) "
                   "VALUES (:menu_id, :name, :description, :price)";

    return executeQuery(query, params);
}

bool DatabaseManager::updateMenuItem(const QString& menuId, const QString& itemId, const QVariantMap& updates)
{
    QStringList setClauses;
    QVariantMap params;
    params[":menu_id"] = menuId;
    params[":item_id"] = itemId;

    for (auto it = updates.begin(); it != updates.end(); ++it) {
        setClauses << QString("%1 = :%1").arg(it.key());
        params[":" + it.key()] = it.value();
    }

    QString query = QString("UPDATE menu_items SET %1 WHERE menu_id = :menu_id AND id = :item_id")
                   .arg(setClauses.join(", "));

    return executeQuery(query, params);
}

bool DatabaseManager::deleteMenuItem(const QString& menuId, const QString& itemId)
{
    QVariantMap params;
    params[":menu_id"] = menuId;
    params[":item_id"] = itemId;

    QString query = "DELETE FROM menu_items WHERE menu_id = :menu_id AND id = :item_id";
    return executeQuery(query, params);
}

bool DatabaseManager::createOrder(const QString& customerId, const QString& restaurantId, const QVariantList& items)
{
    if (!beginTransaction()) {
        return false;
    }

    try {
        // Create order
        QVariantMap orderParams;
        orderParams[":customer_id"] = customerId;
        orderParams[":restaurant_id"] = restaurantId;
        orderParams[":status"] = "pending";

        QString orderQuery = "INSERT INTO orders (customer_id, restaurant_id, status) "
                           "VALUES (:customer_id, :restaurant_id, :status) "
                           "RETURNING id";

        QSqlQuery orderResult = prepareQuery(orderQuery, orderParams);
        if (!orderResult.next()) {
            throw std::runtime_error("Failed to create order");
        }

        QString orderId = orderResult.value(0).toString();

        // Add order items
        for (const QVariant& item : items) {
            QVariantMap itemMap = item.toMap();
            QVariantMap itemParams;
            itemParams[":order_id"] = orderId;
            itemParams[":item_id"] = itemMap["item_id"];
            itemParams[":quantity"] = itemMap["quantity"];

            QString itemQuery = "INSERT INTO order_items (order_id, item_id, quantity) "
                              "VALUES (:order_id, :item_id, :quantity)";

            if (!executeQuery(itemQuery, itemParams)) {
                throw std::runtime_error("Failed to add order item");
            }
        }

        if (!commitTransaction()) {
            throw std::runtime_error("Failed to commit transaction");
        }
        return true;
    }
    catch (const std::exception& e) {
        rollbackTransaction();
        qDebug() << "Error creating order:" << e.what();
        return false;
    }
}

bool DatabaseManager::updateOrderStatus(const QString& orderId, const QString& status)
{
    QVariantMap params;
    params[":id"] = orderId;
    params[":status"] = status;

    QString query = "UPDATE orders SET status = :status WHERE id = :id";
    return executeQuery(query, params);
}

bool DatabaseManager::deleteOrder(const QString& orderId)
{
    QVariantMap params;
    params[":id"] = orderId;

    QString query = "DELETE FROM orders WHERE id = :id";
    return executeQuery(query, params);
}

bool DatabaseManager::executeQuery(const QString& query, const QVariantMap& params)
{
    QSqlQuery sqlQuery = prepareQuery(query, params);
    if (!sqlQuery.exec()) {
        logError("Query execution", sqlQuery.lastError());
        return false;
    }
    return true;
}

QSqlQuery DatabaseManager::prepareQuery(const QString& query, const QVariantMap& params)
{
    QSqlQuery sqlQuery(db);
    sqlQuery.prepare(query);

    for (auto it = params.begin(); it != params.end(); ++it) {
        sqlQuery.bindValue(":" + it.key(), it.value());
    }

    return sqlQuery;
}

void DatabaseManager::logError(const QString& operation, const QSqlError& error)
{
    qDebug() << "Database error during" << operation << ":" << error.text();
}

bool DatabaseManager::beginTransaction()
{
    return db.transaction();
}

bool DatabaseManager::commitTransaction()
{
    return db.commit();
}

bool DatabaseManager::rollbackTransaction()
{
    return db.rollback();
} 