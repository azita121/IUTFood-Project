#ifndef RESTAURANTMENU_H
#define RESTAURANTMENU_H

#include <QWidget>
#include "restaurant.h"
#include "fooditemwidget.h"

namespace Ui {
class RestaurantMenu;
}

class RestaurantMenu : public QWidget
{
    Q_OBJECT

public:
    explicit RestaurantMenu(const Restaurant& restaurant, QWidget *parent = nullptr);
    ~RestaurantMenu();
    // void setRestaurantData(const Restaurant& r);

signals:
    void foodAddedToCart(const MenuItem& item);

private:
    Ui::RestaurantMenu *ui;
    Restaurant currentRestaurant;
};

#endif // RESTAURANTMENU_H
