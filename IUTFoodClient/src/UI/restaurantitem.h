#ifndef RESTAURANTITEM_H
#define RESTAURANTITEM_H

#include <QWidget>
#include "restaurant.h"
#include "fooditemwidget.h"

namespace Ui {
class restaurantitem;
}

class restaurantitem : public QWidget
{
    Q_OBJECT

public:
    explicit restaurantitem(QWidget *parent = nullptr);
    ~restaurantitem();

    void setRestaurantData(const Restaurant& data);

signals:
    void restaurantClicked(const Restaurant& data);

private slots:
    void on_showresButton_clicked();

private:
    Ui::restaurantitem *ui;
    Restaurant restaurantData;
};

#endif // RESTAURANTITEM_H
