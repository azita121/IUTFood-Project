#ifndef CUSTOMERMENU_H
#define CUSTOMERMENU_H
#include "restaurantitem.h"

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
};

#endif // CUSTOMERMENU_H
