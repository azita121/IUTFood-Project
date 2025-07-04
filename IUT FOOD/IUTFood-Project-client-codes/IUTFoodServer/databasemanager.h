#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <QVariantMap>
#include <QVariantList>
#include <QJsonArray>
#include <memory>

class DatabaseManager : public QObject
{
    Q_OBJECT

public:
    static DatabaseManager* getInstance();
    bool addChatMessage(const QString& orderId, const QString& fromUserId, const QString& toUserId, const QString& content);
    QJsonArray getChatHistory(const QString& orderId);
    bool addUserChatMessage(const QString& fromUserId, const QString& toUserId, const QString& content);
    QJsonArray getUserChatHistory(const QString& userA, const QString& userB);
    bool customerEmailExists(const QString& email);
    bool customerPhoneExists(const QString& phone);
    bool ownerEmailExists(const QString& email);
    bool ownerPhoneExists(const QString& phone);

    // Connection Management
    bool connect(const QString& host, const QString& database, const QString& username, const QString& password);
    void disconnect();
    bool isConnected() const;

    // Customer Management
    bool createCustomer(const QString& first_name, const QString& last_name, const QString& username, const QString& email, 
                       const QString& password_hash, const QString& phone, const QString& address, const QString& city, const QString& location);
    bool updateCustomer(const QString& customer_id, const QVariantMap& updates);
    bool deleteCustomer(const QString& customer_id);
    QString getCustomerId(const QString& email);
    QString getCustomerPasswordHash(const QString& customer_id);
    QVariantMap getCustomerProfile(const QString& customer_id);
    QVariantMap getCustomerByLoginId(const QString& login_id);

    // Restaurant Owner Management
    bool createRestaurantOwner(const QString& first_name, const QString& last_name, const QString& username, const QString& email,
                             const QString& password_hash, const QString& phone, const QString& restaurant_id, const QString& city, const QString& location);
    bool updateRestaurantOwner(const QString& owner_id, const QVariantMap& updates);
    bool deleteRestaurantOwner(const QString& owner_id);
    QString getRestaurantOwnerId(const QString& email);
    QString getRestaurantOwnerPasswordHash(const QString& owner_id);
    QVariantMap getRestaurantOwnerProfile(const QString& owner_id);
    QString getRestaurantIdByOwner(const QString& owner_id);
    QVariantMap getRestaurantOwnerByLoginId(const QString& login_id);

    // Restaurant Management
    bool createRestaurant(const QString& name, const QString& address, const QString& type, const QString& image_url = "");
    bool updateRestaurant(const QString& restaurant_id, const QVariantMap& updates);
    bool deleteRestaurant(const QString& restaurant_id);
    QJsonArray getRestaurantsByOwner(const QString& owner_id);
    QJsonArray getAllRestaurants();

    // Menu Management
    bool createMenu(const QString& restaurant_id);
    bool addMenuItem(const QString& menu_id, const QString& name, const QString& description, double price, const QString& ingredients, const QString& category, const QString& image_url = "");
    bool updateMenuItem(const QString& menu_id, const QString& item_id, const QVariantMap& updates);
    bool deleteMenuItem(const QString& menu_id, const QString& item_id);
    QJsonArray getMenuItems(const QString& restaurant_id);

    // Order Management
    bool createOrder(const QString& customer_id, const QString& restaurant_id, const QVariantList& items);
    bool updateOrderStatus(const QString& order_id, const QString& status);
    bool deleteOrder(const QString& order_id);
    QJsonArray getCustomerOrderHistory(const QString& customer_id);
    QJsonArray getOrderHistory(const QString& user_id, const QString& user_type);

    // Order Feedback (comments only)
    bool addOrderComment(const QString& order_id, const QString& customer_id, const QString& comment);
    QJsonArray getOrderComments(const QString& order_id);

    // Query Execution
    bool executeQuery(const QString& query, const QVariantMap& params);
    QSqlQuery prepareQuery(const QString& query, const QVariantMap& params);
    void logError(const QString& operation, const QSqlError& error);

    // User Management
    QVariantMap getUserById(const QString& user_id);

    // Transaction Management
    bool beginTransaction();
    bool commitTransaction();
    bool rollbackTransaction();

    bool initializeSchema();

private:
    explicit DatabaseManager(QObject *parent = nullptr);
    ~DatabaseManager();
    static DatabaseManager* instance;

    QSqlDatabase db;
    bool connected;
};

#endif // DATABASEMANAGER_H 