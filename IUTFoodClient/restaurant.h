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
    // QString imagePath;
    QList<MenuItem> menuItems;

};

#endif // RESTAURANT_H
