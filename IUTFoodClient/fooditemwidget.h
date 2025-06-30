#ifndef FOODITEMWIDGET_H
#define FOODITEMWIDGET_H

#include <QWidget>
#include "restaurant.h"

namespace Ui {
class FoodItemWidget;
}

class FoodItemWidget : public QWidget
{
    Q_OBJECT

public:
    explicit FoodItemWidget(const MenuItem& item, QWidget *parent = nullptr);
    ~FoodItemWidget();
    void setFoodData(const MenuItem& item);

private:
    Ui::FoodItemWidget *ui;
};

#endif // FOODITEMWIDGET_H
