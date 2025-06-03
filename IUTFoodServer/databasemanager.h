#ifndef DATABASEMANAGER_H
#define DATABASEMANAGER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QString>
#include <memory>

class DatabaseManager : public QObject
{
    Q_OBJECT

public:
    static DatabaseManager* getInstance();
    bool connect(const QString& host, const QString& database, const QString& username, const QString& password);
    void disconnect();
    bool isConnected() const;

    // User operations
    bool createUser(const QString& username, const QString& passwordHash, const QString& email, const QString& userType);
    QString getUserId(const QString& username);
    QString getUserPasswordHash(const QString& userId);
    QString getUserType(const QString& userId);
    bool updateUser(const QString& userId, const QVariantMap& updates);
    bool deleteUser(const QString& userId);

    // Restaurant operations
    bool createRestaurant(const QString& name, const QString& address, const QString& type);
    bool updateRestaurant(const QString& restaurantId, const QVariantMap& updates);
    bool deleteRestaurant(const QString& restaurantId);

    // Menu operations
    bool createMenu(const QString& restaurantId);
    bool addMenuItem(const QString& menuId, const QString& name, const QString& description, double price);
    bool updateMenuItem(const QString& menuId, const QString& itemId, const QVariantMap& updates);
    bool deleteMenuItem(const QString& menuId, const QString& itemId);

    // Order operations
    bool createOrder(const QString& customerId, const QString& restaurantId, const QVariantList& items);
    bool updateOrderStatus(const QString& orderId, const QString& status);
    bool deleteOrder(const QString& orderId);

private:
    explicit DatabaseManager(QObject *parent = nullptr);
    ~DatabaseManager();
    static DatabaseManager* instance;

    QSqlDatabase db;
    bool connected;

    bool executeQuery(const QString& query, const QVariantMap& params = QVariantMap());
    QSqlQuery prepareQuery(const QString& query, const QVariantMap& params = QVariantMap());
    void logError(const QString& operation, const QSqlError& error);
    bool beginTransaction();
    bool commitTransaction();
    bool rollbackTransaction();
};

#endif // DATABASEMANAGER_H 