#ifndef FOODITEMWIDGET_H
#define FOODITEMWIDGET_H

#include <QWidget>
#include "restaurant.h"
#include <QMenu>

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
    void setInCartMode(bool cart);

private slots:
    // void on_addFoodButton_triggered(QAction *arg1);

    // void on_addFoodButton_clicked();

    void on_addFoodButton_triggered(QAction *arg1);

signals:
    void foodAdded(const MenuItem& item);
    void foodRemoved(const MenuItem& item);

private:
    Ui::FoodItemWidget *ui;
    bool isInCart = false;
    MenuItem menuItem;
};

#endif // FOODITEMWIDGET_H
