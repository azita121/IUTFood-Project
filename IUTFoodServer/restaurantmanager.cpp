#include "restaurantmanager.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlError>
#include <cmath>

RestaurantManager* RestaurantManager::instance = nullptr;

RestaurantManager* RestaurantManager::getInstance()
{
    if (instance == nullptr) {
        instance = new RestaurantManager();
    }
    return instance;
}

RestaurantManager::RestaurantManager(QObject *parent)
    : QObject(parent)
    , m_dbManager(DatabaseManager::getInstance())
    , m_authSystem(AuthSystem::getInstance())
{
}

RestaurantManager::~RestaurantManager()
{
}

bool RestaurantManager::validateRestaurantAccess(const QString& restaurantId, const QString& userId)
{
    QString userType = m_authSystem->getUserTypeFromToken(userId);
    if (userType == "admin") return true;

    QSqlQuery query = m_dbManager->prepareQuery(
        "SELECT owner_id FROM restaurants WHERE id = :restaurant_id"
    );
    query.bindValue(":restaurant_id", restaurantId);
    
    if (query.exec() && query.next()) {
        return query.value("owner_id").toString() == userId;
    }
    return false;
}

// Menu Management Methods
bool RestaurantManager::addMenuItem(const QString& restaurantId, const QJsonObject& item)
{
    QSqlQuery query = m_dbManager->prepareQuery(
        "INSERT INTO menu_items (restaurant_id, name, description, price, category, "
        "is_available, image_url, created_at) "
        "VALUES (:restaurant_id, :name, :description, :price, :category, "
        ":is_available, :image_url, :created_at)"
    );

    query.bindValue(":restaurant_id", restaurantId);
    query.bindValue(":name", item["name"].toString());
    query.bindValue(":description", item["description"].toString());
    query.bindValue(":price", item["price"].toDouble());
    query.bindValue(":category", item["category"].toString());
    query.bindValue(":is_available", item["is_available"].toBool());
    query.bindValue(":image_url", item["image_url"].toString());
    query.bindValue(":created_at", QDateTime::currentDateTime().toString(Qt::ISODate));

    return query.exec();
}

bool RestaurantManager::updateMenuItem(const QString& restaurantId, const QString& itemId, const QJsonObject& updates)
{
    if (!validateRestaurantAccess(restaurantId, updates["user_id"].toString())) {
        return false;
    }

    QStringList updateFields;
    QVariantMap bindValues;

    if (updates.contains("name")) {
        updateFields << "name = :name";
        bindValues[":name"] = updates["name"].toString();
    }
    if (updates.contains("description")) {
        updateFields << "description = :description";
        bindValues[":description"] = updates["description"].toString();
    }
    if (updates.contains("price")) {
        updateFields << "price = :price";
        bindValues[":price"] = updates["price"].toDouble();
    }
    if (updates.contains("category")) {
        updateFields << "category = :category";
        bindValues[":category"] = updates["category"].toString();
    }
    if (updates.contains("is_available")) {
        updateFields << "is_available = :is_available";
        bindValues[":is_available"] = updates["is_available"].toBool();
    }
    if (updates.contains("image_url")) {
        updateFields << "image_url = :image_url";
        bindValues[":image_url"] = updates["image_url"].toString();
    }

    if (updateFields.isEmpty()) {
        return false;
    }

    QString queryStr = "UPDATE menu_items SET " + updateFields.join(", ") +
                      " WHERE id = :item_id AND restaurant_id = :restaurant_id";
    
    QSqlQuery query = m_dbManager->prepareQuery(queryStr);
    query.bindValue(":item_id", itemId);
    query.bindValue(":restaurant_id", restaurantId);

    for (auto it = bindValues.begin(); it != bindValues.end(); ++it) {
        query.bindValue(it.key(), it.value());
    }

    return query.exec();
}

bool RestaurantManager::deleteMenuItem(const QString& restaurantId, const QString& itemId)
{
    QSqlQuery query = m_dbManager->prepareQuery(
        "DELETE FROM menu_items WHERE id = :item_id AND restaurant_id = :restaurant_id"
    );
    query.bindValue(":item_id", itemId);
    query.bindValue(":restaurant_id", restaurantId);
    return query.exec();
}

QJsonArray RestaurantManager::getMenuItems(const QString& restaurantId)
{
    QJsonArray items;
    QSqlQuery query = m_dbManager->prepareQuery(
        "SELECT * FROM menu_items WHERE restaurant_id = :restaurant_id ORDER BY category, name"
    );
    query.bindValue(":restaurant_id", restaurantId);

    if (query.exec()) {
        while (query.next()) {
            QJsonObject item;
            item["id"] = query.value("id").toString();
            item["name"] = query.value("name").toString();
            item["description"] = query.value("description").toString();
            item["price"] = query.value("price").toDouble();
            item["category"] = query.value("category").toString();
            item["is_available"] = query.value("is_available").toBool();
            item["image_url"] = query.value("image_url").toString();
            items.append(item);
        }
    }

    return items;
}

// Rating and Feedback Methods
bool RestaurantManager::addRating(const QString& restaurantId, const QString& userId, int rating, const QString& comment)
{
    QSqlQuery query = m_dbManager->prepareQuery(
        "INSERT INTO ratings (restaurant_id, user_id, rating, comment, created_at) "
        "VALUES (:restaurant_id, :user_id, :rating, :comment, :created_at)"
    );

    query.bindValue(":restaurant_id", restaurantId);
    query.bindValue(":user_id", userId);
    query.bindValue(":rating", rating);
    query.bindValue(":comment", comment);
    query.bindValue(":created_at", QDateTime::currentDateTime().toString(Qt::ISODate));

    if (query.exec()) {
        notifyRatingUpdate(restaurantId);
        return true;
    }
    return false;
}

QJsonArray RestaurantManager::getRestaurantRatings(const QString& restaurantId, int limit)
{
    QJsonArray ratings;
    QSqlQuery query = m_dbManager->prepareQuery(
        "SELECT r.*, u.username FROM ratings r "
        "JOIN users u ON r.user_id = u.id "
        "WHERE r.restaurant_id = :restaurant_id "
        "ORDER BY r.created_at DESC "
        "LIMIT :limit"
    );
    query.bindValue(":restaurant_id", restaurantId);
    query.bindValue(":limit", limit);

    if (query.exec()) {
        while (query.next()) {
            QJsonObject rating;
            rating["id"] = query.value("id").toString();
            rating["user_id"] = query.value("user_id").toString();
            rating["username"] = query.value("username").toString();
            rating["rating"] = query.value("rating").toInt();
            rating["comment"] = query.value("comment").toString();
            rating["created_at"] = query.value("created_at").toString();
            ratings.append(rating);
        }
    }

    return ratings;
}

QJsonObject RestaurantManager::getRestaurantRatingStats(const QString& restaurantId)
{
    QJsonArray ratings = getRestaurantRatings(restaurantId);
    return calculateRatingStats(ratings);
}

QJsonObject RestaurantManager::calculateRatingStats(const QJsonArray& ratings)
{
    QJsonObject stats;
    double totalRating = 0;
    QMap<int, int> ratingDistribution;

    for (const QJsonValue& value : ratings) {
        QJsonObject rating = value.toObject();
        int ratingValue = rating["rating"].toInt();
        totalRating += ratingValue;
        ratingDistribution[ratingValue]++;
    }

    stats["average_rating"] = ratings.isEmpty() ? 0 : totalRating / ratings.size();
    stats["total_ratings"] = ratings.size();
    
    QJsonObject distribution;
    for (auto it = ratingDistribution.begin(); it != ratingDistribution.end(); ++it) {
        distribution[QString::number(it.key())] = it.value();
    }
    stats["distribution"] = distribution;

    return stats;
}

// Search and Filtering Methods
QJsonArray RestaurantManager::searchRestaurants(const QString& query, const QJsonObject& filters)
{
    QJsonArray restaurants;
    QStringList conditions;
    QVariantMap bindValues;

    QString baseQuery = "SELECT r.*, "
                       "(SELECT AVG(rating) FROM ratings WHERE restaurant_id = r.id) as avg_rating, "
                       "(SELECT COUNT(*) FROM ratings WHERE restaurant_id = r.id) as rating_count "
                       "FROM restaurants r WHERE 1=1";

    if (!query.isEmpty()) {
        conditions << "(r.name LIKE :query OR r.description LIKE :query)";
        bindValues[":query"] = "%" + query + "%";
    }

    if (filters.contains("category")) {
        conditions << "r.category = :category";
        bindValues[":category"] = filters["category"].toString();
    }

    if (filters.contains("min_rating")) {
        conditions << "(SELECT AVG(rating) FROM ratings WHERE restaurant_id = r.id) >= :min_rating";
        bindValues[":min_rating"] = filters["min_rating"].toDouble();
    }

    if (filters.contains("is_open")) {
        conditions << "r.is_open = :is_open";
        bindValues[":is_open"] = filters["is_open"].toBool();
    }

    if (!conditions.isEmpty()) {
        baseQuery += " AND " + conditions.join(" AND ");
    }

    baseQuery += " ORDER BY avg_rating DESC, rating_count DESC";

    QSqlQuery sqlQuery = m_dbManager->prepareQuery(baseQuery);
    for (auto it = bindValues.begin(); it != bindValues.end(); ++it) {
        sqlQuery.bindValue(it.key(), it.value());
    }

    if (sqlQuery.exec()) {
        while (sqlQuery.next()) {
            QJsonObject restaurant;
            restaurant["id"] = sqlQuery.value("id").toString();
            restaurant["name"] = sqlQuery.value("name").toString();
            restaurant["description"] = sqlQuery.value("description").toString();
            restaurant["category"] = sqlQuery.value("category").toString();
            restaurant["address"] = sqlQuery.value("address").toString();
            restaurant["is_open"] = sqlQuery.value("is_open").toBool();
            restaurant["avg_rating"] = sqlQuery.value("avg_rating").toDouble();
            restaurant["rating_count"] = sqlQuery.value("rating_count").toInt();
            restaurants.append(restaurant);
        }
    }

    return restaurants;
}

QJsonArray RestaurantManager::getNearbyRestaurants(double latitude, double longitude, double radius)
{
    QJsonArray restaurants;
    QSqlQuery query = m_dbManager->prepareQuery(
        "SELECT r.*, "
        "(SELECT AVG(rating) FROM ratings WHERE restaurant_id = r.id) as avg_rating, "
        "(SELECT COUNT(*) FROM ratings WHERE restaurant_id = r.id) as rating_count, "
        "SQRT(POW(69.1 * (latitude - :lat), 2) + "
        "POW(69.1 * (:lon - longitude) * COS(latitude / 57.3), 2)) AS distance "
        "FROM restaurants r "
        "HAVING distance < :radius "
        "ORDER BY distance"
    );

    query.bindValue(":lat", latitude);
    query.bindValue(":lon", longitude);
    query.bindValue(":radius", radius);

    if (query.exec()) {
        while (query.next()) {
            QJsonObject restaurant;
            restaurant["id"] = query.value("id").toString();
            restaurant["name"] = query.value("name").toString();
            restaurant["description"] = query.value("description").toString();
            restaurant["address"] = query.value("address").toString();
            restaurant["latitude"] = query.value("latitude").toDouble();
            restaurant["longitude"] = query.value("longitude").toDouble();
            restaurant["distance"] = query.value("distance").toDouble();
            restaurant["avg_rating"] = query.value("avg_rating").toDouble();
            restaurant["rating_count"] = query.value("rating_count").toInt();
            restaurants.append(restaurant);
        }
    }

    return restaurants;
}

void RestaurantManager::notifyRatingUpdate(const QString& restaurantId)
{
    QJsonObject message;
    message["type"] = "rating_update";
    message["restaurant_id"] = restaurantId;
    message["stats"] = getRestaurantRatingStats(restaurantId);
    message["timestamp"] = QDateTime::currentDateTime().toString(Qt::ISODate);

    // Notify through WebSocket
    WebSocketServer::getInstance()->broadcastToRestaurant(restaurantId, message);
}

double RestaurantManager::calculateDistance(double lat1, double lon1, double lat2, double lon2)
{
    const double R = 6371; // Earth's radius in kilometers
    double dLat = (lat2 - lat1) * M_PI / 180;
    double dLon = (lon2 - lon1) * M_PI / 180;
    double a = sin(dLat/2) * sin(dLat/2) +
               cos(lat1 * M_PI / 180) * cos(lat2 * M_PI / 180) *
               sin(dLon/2) * sin(dLon/2);
    double c = 2 * atan2(sqrt(a), sqrt(1-a));
    return R * c;
} 