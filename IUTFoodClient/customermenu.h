#ifndef CUSTOMERMENU_H
#define CUSTOMERMENU_H
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

private slots:
    void on_shoppingCartButton_clicked();

    void on_HistoryButton_clicked();

private:
    Ui::CustomerMenu *ui;
    QList<Restaurant> allRestaurants;
    void applyFilters();
    void resetFilters();
};

#endif // CUSTOMERMENU_H
