#ifndef RESTAURANT_H
#define RESTAURANT_H

#include <QString>
#include <QList>

struct MenuItem {
    QString name;
    int price;
    QString detail;
};

struct Restaurant {
    QString name;
    QString type;
    QString location;
    QList<MenuItem> menuItems;

    QList<int> ratings;  // ⭐ امتیازهای دریافتی

    double averageRating() const {
        if (ratings.isEmpty()) return 0.0;
        double sum = 0;
        for (int r : ratings) sum += r;
        return sum / ratings.size();
    }

};

inline bool operator==(const MenuItem& a, const MenuItem& b)
{
    return a.name == b.name &&
           a.price == b.price &&
           a.detail == b.detail;
}

#endif // RESTAURANT_H
