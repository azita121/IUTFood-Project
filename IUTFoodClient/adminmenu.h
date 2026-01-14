#ifndef ADMINMENU_H
#define ADMINMENU_H

#include <QWidget>
#include <QListWidget>
#include <QTableWidget>
#include <QPushButton>
#include <QLabel>
#include <QVBoxLayout>
#include <QHBoxLayout>

namespace Ui {
class adminmenu; // می‌تونی این رو حذف کنی چون UI رو استفاده نمی‌کنیم
}

class adminmenu : public QWidget
{
    Q_OBJECT

public:
    explicit adminmenu(QWidget *parent = nullptr);
    ~adminmenu();

private:
    Ui::adminmenu *ui;

    QListWidget* listPendingRestaurants;
    QListWidget* listUsers;
    QTableWidget* tableOrders;

    QPushButton* approveRestaurantButton;
    QPushButton* rejectRestaurantButton;
    QPushButton* blockUserButton;
    QPushButton* unblockUserButton;
    QPushButton* deleteUserButton;
    QPushButton* refreshOrdersButton;

    QVBoxLayout* mainLayout;

    void setupUI();
    void setupConnections();

private slots:
    void onApproveRestaurant();
    void onRejectRestaurant();
    void onBlockUser();
    void onUnblockUser();
    void onDeleteUser();
    void onRefreshOrders();
};

#endif // ADMINMENU_H
