#ifndef CUSTOMERMENU_H
#define CUSTOMERMENU_H
#include <QVBoxLayout>
#include <QWidget>
#include <QScrollArea>
#include "restaurantitem.h"
#include <QStandardItemModel>

#include <QWidget>

namespace Ui {
class CustomerMenu;
}

class CustomerMenu : public QWidget
{
    Q_OBJECT

public:
    explicit CustomerMenu(QWidget *parent = nullptr);
    ~CustomerMenu();
    void showCartPage();
    void addToCartUI(const MenuItem& item);

private slots:
    void on_shoppingCartButton_clicked();

    void on_HistoryButton_clicked();

    void on_homeButton_2_clicked();

    void on_HistoryButton_2_clicked();

    void on_shoppingCartButton_3_clicked();

    void on_homeButton_3_clicked();

private:
    Ui::CustomerMenu *ui;
    QList<Restaurant> allRestaurants;
    void applyFilters();
    void resetFilters();
    QList<MenuItem> cartItems;
    // QVBoxLayout* cartLayout;

    QScrollArea* scrollArea_cart;
    QWidget* cartContainer;
    QVBoxLayout* cartLayout;

    // QVBoxLayout* cartLayout;

};

#endif // CUSTOMERMENU_H
