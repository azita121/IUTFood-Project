#ifndef RESTAURANTMANAGER_H
#define RESTAURANTMANAGER_H

#include <QObject>
#include <QMap>
#include <QDateTime>
#include <QJsonObject>
#include <QJsonArray>
#include "databasemanager.h"
#include "authsystem.h"

class RestaurantManager : public QObject
{
    Q_OBJECT

public:
    static RestaurantManager* getInstance();

    // Menu Management
    bool addMenuItem(const QString& restaurantId, const QJsonObject& item);
    bool updateMenuItem(const QString& restaurantId, const QString& itemId, const QJsonObject& updates);
    bool deleteMenuItem(const QString& restaurantId, const QString& itemId);
    QJsonArray getMenuItems(const QString& restaurantId);
    bool updateMenuCategory(const QString& restaurantId, const QString& categoryId, const QJsonObject& updates);
    bool reorderMenuItems(const QString& restaurantId, const QJsonArray& itemOrder);

    // Rating and Feedback
    bool addRating(const QString& restaurantId, const QString& userId, int rating, const QString& comment);
    bool updateRating(const QString& ratingId, int newRating, const QString& newComment);
    bool deleteRating(const QString& ratingId);
    QJsonArray getRestaurantRatings(const QString& restaurantId, int limit = 10);
    QJsonObject getRestaurantRatingStats(const QString& restaurantId);
    bool reportRating(const QString& ratingId, const QString& reason);

    // Search and Filtering
    QJsonArray searchRestaurants(const QString& query, const QJsonObject& filters);
    QJsonArray getRestaurantsByCategory(const QString& category);
    QJsonArray getTopRatedRestaurants(int limit = 10);
    QJsonArray getPopularRestaurants(int limit = 10);
    QJsonArray getNearbyRestaurants(double latitude, double longitude, double radius);

    // Restaurant Profile
    bool updateRestaurantProfile(const QString& restaurantId, const QJsonObject& updates);
    QJsonObject getRestaurantProfile(const QString& restaurantId);
    bool updateRestaurantHours(const QString& restaurantId, const QJsonObject& hours);
    bool updateRestaurantLocation(const QString& restaurantId, double latitude, double longitude);

private:
    explicit RestaurantManager(QObject *parent = nullptr);
    ~RestaurantManager();
    static RestaurantManager* instance;

    DatabaseManager* m_dbManager;
    AuthSystem* m_authSystem;

    bool validateRestaurantAccess(const QString& restaurantId, const QString& userId);
    double calculateDistance(double lat1, double lon1, double lat2, double lon2);
    QJsonObject calculateRatingStats(const QJsonArray& ratings);
    void notifyRatingUpdate(const QString& restaurantId);
};

#endif // RESTAURANTMANAGER_H 