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

};

inline bool operator==(const MenuItem& a, const MenuItem& b)
{
    return a.name == b.name &&
           a.price == b.price &&
           a.detail == b.detail;
}

#endif // RESTAURANT_H
