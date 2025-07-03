#ifndef RESTAURANTOWNERMENU_H
#define RESTAURANTOWNERMENU_H

#include <QWidget>
#include <QScrollArea>
#include <QVBoxLayout>
#include "restaurantitem.h"
#include "fooditemwidget.h"
#include <QInputDialog>
#include <QComboBox>

namespace Ui {
class restaurantownermenu;
}

class restaurantownermenu : public QWidget
{
    Q_OBJECT

public:
    explicit restaurantownermenu(QWidget *parent = nullptr);
    ~restaurantownermenu();

    void renderOrders();
    void renderMenuItems();
    void addFoodItem(const MenuItem& item);
    void renderAcceptedOrders();

private slots:
    void on_addFoodButton_clicked();

    void on_viewOrdersButton_clicked();

    void on_ChangeOfStatusButton_clicked();

    void on_menuManagementButton_2_clicked();

    void on_ChangeOfStatusButton_2_clicked();

    void on_menuManagementButton_5_clicked();

    void on_viewOrdersButton_5_clicked();

private:
    Ui::restaurantownermenu *ui;

    QList<MenuItem> foodList;
    QScrollArea* scrollArea;
    QWidget* container;
    QVBoxLayout* layout;

    QScrollArea* orderScrollArea;
    QWidget* orderContainer;
    QVBoxLayout* orderLayout;
    QList<MenuItem> incomingOrders;

    QList<MenuItem> orderList;

    struct AcceptedOrder {
        QString customer;
        MenuItem item;
        QString status;

        bool operator==(const AcceptedOrder& other) const {
            return customer == other.customer && item.name == other.item.name;
        }
    };

    QList<AcceptedOrder> acceptedOrders;

    QVBoxLayout* statusLayout;
    QWidget* statusContainer;
    QScrollArea* statusScrollArea;



};

#endif // RESTAURANTOWNERMENU_H
