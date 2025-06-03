#include "databasemanager.h"
#include <QDebug>
#include <QSqlError>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QDateTime>

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
    db = QSqlDatabase::addDatabase("QMYSQL"); // Using MySQL
}

DatabaseManager::~DatabaseManager()
{
    if (db.isOpen()) {
        db.close();
    }
}

bool DatabaseManager::connect(const QString& host, const QString& database, const QString& username, const QString& password)
{
    db.setHostName(host);
    db.setDatabaseName(database);
    db.setUserName(username);
    db.setPassword(password);

    if (!db.open()) {
        qDebug() << "Database connection error:" << db.lastError().text();
        return false;
    }

    connected = true;
    return true;
}

void DatabaseManager::disconnect()
{
    if (db.isOpen()) {
        db.close();
    }
    connected = false;
}

bool DatabaseManager::isConnected() const
{
    return connected;
}

bool DatabaseManager::createCustomer(const QString& name, const QString& lastName, const QString& email,
                                   const QString& passwordHash, const QString& phone, const QString& address)
{
    QVariantMap params;
    params[":name"] = name;
    params[":lastName"] = lastName;
    params[":email"] = email;
    params[":passwordHash"] = passwordHash;
    params[":phone"] = phone;
    params[":address"] = address;

    QString query = "INSERT INTO customers (name, last_name, email, password_hash, phone, address) "
                   "VALUES (:name, :lastName, :email, :passwordHash, :phone, :address)";

    return executeQuery(query, params);
}

bool DatabaseManager::updateCustomer(const QString& customerId, const QVariantMap& updates)
{
    QStringList setClauses;
    QVariantMap params;
    params[":id"] = customerId;

    for (auto it = updates.begin(); it != updates.end(); ++it) {
        setClauses << QString("%1 = :%2").arg(it.key()).arg(it.key());
        params[":" + it.key()] = it.value();
    }

    QString query = QString("UPDATE customers SET %1 WHERE id = :id")
                   .arg(setClauses.join(", "));

    return executeQuery(query, params);
}

bool DatabaseManager::deleteCustomer(const QString& customerId)
{
    QVariantMap params;
    params[":id"] = customerId;

    QString query = "DELETE FROM customers WHERE id = :id";
    return executeQuery(query, params);
}

QString DatabaseManager::getCustomerId(const QString& email)
{
    QVariantMap params;
    params[":email"] = email;

    QString query = "SELECT id FROM customers WHERE email = :email";
    QSqlQuery result = prepareQuery(query, params);

    if (result.next()) {
        return result.value(0).toString();
    }
    return QString();
}

QString DatabaseManager::getCustomerPasswordHash(const QString& customerId)
{
    QVariantMap params;
    params[":id"] = customerId;

    QString query = "SELECT password_hash FROM customers WHERE id = :id";
    QSqlQuery result = prepareQuery(query, params);

    if (result.next()) {
        return result.value(0).toString();
    }
    return QString();
}

QVariantMap DatabaseManager::getCustomerProfile(const QString& customerId)
{
    QVariantMap params;
    params[":id"] = customerId;

    QString query = "SELECT name, last_name, email, phone, address FROM customers WHERE id = :id";
    QSqlQuery result = prepareQuery(query, params);

    QVariantMap profile;
    if (result.next()) {
        profile["name"] = result.value("name").toString();
        profile["lastName"] = result.value("last_name").toString();
        profile["email"] = result.value("email").toString();
        profile["phone"] = result.value("phone").toString();
        profile["address"] = result.value("address").toString();
    }
    return profile;
}

bool DatabaseManager::createRestaurantOwner(const QString& name, const QString& lastName, const QString& email,
                                          const QString& passwordHash, const QString& phone, const QString& restaurantId)
{
    QVariantMap params;
    params[":name"] = name;
    params[":lastName"] = lastName;
    params[":email"] = email;
    params[":passwordHash"] = passwordHash;
    params[":phone"] = phone;
    params[":restaurantId"] = restaurantId;

    QString query = "INSERT INTO restaurant_owners (name, last_name, email, password_hash, phone, restaurant_id) "
                   "VALUES (:name, :lastName, :email, :passwordHash, :phone, :restaurantId)";

    return executeQuery(query, params);
}

bool DatabaseManager::updateRestaurantOwner(const QString& ownerId, const QVariantMap& updates)
{
    QStringList setClauses;
    QVariantMap params;
    params[":id"] = ownerId;

    for (auto it = updates.begin(); it != updates.end(); ++it) {
        setClauses << QString("%1 = :%2").arg(it.key()).arg(it.key());
        params[":" + it.key()] = it.value();
    }

    QString query = QString("UPDATE restaurant_owners SET %1 WHERE id = :id")
                   .arg(setClauses.join(", "));

    return executeQuery(query, params);
}

bool DatabaseManager::deleteRestaurantOwner(const QString& ownerId)
{
    QVariantMap params;
    params[":id"] = ownerId;

    QString query = "DELETE FROM restaurant_owners WHERE id = :id";
    return executeQuery(query, params);
}

QString DatabaseManager::getRestaurantOwnerId(const QString& email)
{
    QVariantMap params;
    params[":email"] = email;

    QString query = "SELECT id FROM restaurant_owners WHERE email = :email";
    QSqlQuery result = prepareQuery(query, params);

    if (result.next()) {
        return result.value(0).toString();
    }
    return QString();
}

QString DatabaseManager::getRestaurantOwnerPasswordHash(const QString& ownerId)
{
    QVariantMap params;
    params[":id"] = ownerId;

    QString query = "SELECT password_hash FROM restaurant_owners WHERE id = :id";
    QSqlQuery result = prepareQuery(query, params);

    if (result.next()) {
        return result.value(0).toString();
    }
    return QString();
}

QVariantMap DatabaseManager::getRestaurantOwnerProfile(const QString& ownerId)
{
    QVariantMap params;
    params[":id"] = ownerId;

    QString query = "SELECT name, last_name, email, phone, restaurant_id FROM restaurant_owners WHERE id = :id";
    QSqlQuery result = prepareQuery(query, params);

    QVariantMap profile;
    if (result.next()) {
        profile["name"] = result.value("name").toString();
        profile["lastName"] = result.value("last_name").toString();
        profile["email"] = result.value("email").toString();
        profile["phone"] = result.value("phone").toString();
        profile["restaurantId"] = result.value("restaurant_id").toString();
    }
    return profile;
}

QString DatabaseManager::getRestaurantIdByOwner(const QString& ownerId)
{
    QVariantMap params;
    params[":id"] = ownerId;

    QString query = "SELECT restaurant_id FROM restaurant_owners WHERE id = :id";
    QSqlQuery result = prepareQuery(query, params);

    if (result.next()) {
        return result.value(0).toString();
    }
    return QString();
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
        setClauses << QString("%1 = :%2").arg(it.key()).arg(it.key());
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
    params[":restaurantId"] = restaurantId;

    QString query = "INSERT INTO menus (restaurant_id) VALUES (:restaurantId)";
    return executeQuery(query, params);
}

bool DatabaseManager::addMenuItem(const QString& menuId, const QString& name, const QString& description, double price)
{
    QVariantMap params;
    params[":menuId"] = menuId;
    params[":name"] = name;
    params[":description"] = description;
    params[":price"] = price;

    QString query = "INSERT INTO menu_items (menu_id, name, description, price) "
                   "VALUES (:menuId, :name, :description, :price)";

    return executeQuery(query, params);
}

bool DatabaseManager::updateMenuItem(const QString& menuId, const QString& itemId, const QVariantMap& updates)
{
    QStringList setClauses;
    QVariantMap params;
    params[":menuId"] = menuId;
    params[":itemId"] = itemId;

    for (auto it = updates.begin(); it != updates.end(); ++it) {
        setClauses << QString("%1 = :%2").arg(it.key()).arg(it.key());
        params[":" + it.key()] = it.value();
    }

    QString query = QString("UPDATE menu_items SET %1 WHERE menu_id = :menuId AND id = :itemId")
                   .arg(setClauses.join(", "));

    return executeQuery(query, params);
}

bool DatabaseManager::deleteMenuItem(const QString& menuId, const QString& itemId)
{
    QVariantMap params;
    params[":menuId"] = menuId;
    params[":itemId"] = itemId;

    QString query = "DELETE FROM menu_items WHERE menu_id = :menuId AND id = :itemId";
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
        orderParams[":customerId"] = customerId;
        orderParams[":restaurantId"] = restaurantId;
        orderParams[":status"] = "pending";
        orderParams[":orderDate"] = QDateTime::currentDateTime();

        QString orderQuery = "INSERT INTO orders (customer_id, restaurant_id, status, order_date) "
                           "VALUES (:customerId, :restaurantId, :status, :orderDate)";
        
        if (!executeQuery(orderQuery, orderParams)) {
            throw std::runtime_error("Failed to create order");
        }

        QString orderId = db.lastInsertId().toString();

        // Add order items
        for (const QVariant& item : items) {
            QVariantMap itemMap = item.toMap();
            QVariantMap itemParams;
            itemParams[":orderId"] = orderId;
            itemParams[":menuItemId"] = itemMap["menuItemId"];
            itemParams[":quantity"] = itemMap["quantity"];
            itemParams[":price"] = itemMap["price"];

            QString itemQuery = "INSERT INTO order_items (order_id, menu_item_id, quantity, price) "
                              "VALUES (:orderId, :menuItemId, :quantity, :price)";
            
            if (!executeQuery(itemQuery, itemParams)) {
                throw std::runtime_error("Failed to add order item");
            }
        }

        if (!commitTransaction()) {
            throw std::runtime_error("Failed to commit transaction");
        }

        return true;
    } catch (const std::exception& e) {
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
    QSqlQuery sqlQuery;
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