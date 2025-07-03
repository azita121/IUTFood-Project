#include "adminmenu.h"
#include <QHeaderView>
#include <QMessageBox>

adminmenu::adminmenu(QWidget *parent)
    : QWidget(parent)
{
    setupUI();
    setupConnections();
    setFixedSize(560, 510);

    listPendingRestaurants->addItem("Saadi Restaurant");
    listPendingRestaurants->addItem("Nahid Restaurant");
    listPendingRestaurants->addItem("Golpayegan Restaurant");

    listUsers->addItem("Ali");
    listUsers->addItem("Sara");
    listUsers->addItem("Maryam");
    listUsers->addItem("Reza");
    listUsers->addItem("Narges");


}

adminmenu::~adminmenu()
{
    delete ui;
}

void adminmenu::setupUI()
{
    listPendingRestaurants = new QListWidget(this);
    listUsers = new QListWidget(this);
    tableOrders = new QTableWidget(this);
    tableOrders->setStyleSheet(R"(
    QScrollBar:vertical, QScrollBar:horizontal {
        width: 0px;
        height: 0px;
    }
)");

    approveRestaurantButton = new QPushButton("Verify the restaurant", this);
    approveRestaurantButton->setStyleSheet(R"(
    QPushButton {
        background-color: rgba(220, 213, 200, 1);
        color: #27492d;
        border-radius: 5px;
        padding: 6px 12px;
        font-family: Segoe UI;
        font-size: 14px;
    }
    QPushButton:hover {
        background-color: rgba(200, 190, 170, 1);
    }
    QPushButton:pressed {
        background-color: rgba(190, 185, 160, 255);
        padding-left: 8px;
        padding-top: 8px;
    }

)");
    rejectRestaurantButton = new QPushButton("Skip the restaurant", this);
    rejectRestaurantButton->setStyleSheet(R"(
    QPushButton {
        background-color: rgba(220, 213, 200, 1);
        color: #27492d;
        border-radius: 5px;
        padding: 6px 12px;
        font-family: Segoe UI;
        font-size: 14px;
    }
    QPushButton:hover {
        background-color: rgba(200, 190, 170, 1);
    }
    QPushButton:pressed {
        background-color: rgba(190, 185, 160, 255);
        padding-left: 8px;
        padding-top: 8px;
    }

)");
    blockUserButton = new QPushButton("Block the user", this);
    blockUserButton->setStyleSheet(R"(
    QPushButton {
        background-color: rgba(220, 213, 200, 1);
        color: #27492d;
        border-radius: 5px;
        padding: 6px 12px;
        font-family: Segoe UI;
        font-size: 14px;
    }
    QPushButton:hover {
        background-color: rgba(200, 190, 170, 1);
    }
    QPushButton:pressed {
        background-color: rgba(190, 185, 160, 255);
        padding-left: 8px;
        padding-top: 8px;
    }

)");
    unblockUserButton = new QPushButton("Unblock the user", this);
    unblockUserButton->setStyleSheet(R"(
    QPushButton {
        background-color: rgba(220, 213, 200, 1);
        color: #27492d;
        border-radius: 5px;
        padding: 6px 12px;
        font-family: Segoe UI;
        font-size: 14px;
    }
    QPushButton:hover {
        background-color: rgba(200, 190, 170, 1);
    }
    QPushButton:pressed {
        background-color: rgba(190, 185, 160, 255);
        padding-left: 8px;
        padding-top: 8px;
    }

)");
    deleteUserButton = new QPushButton("Delete user", this);
    deleteUserButton->setStyleSheet(R"(
    QPushButton {
        background-color: rgba(220, 213, 200, 1);
        color: #27492d;
        border-radius: 5px;
        padding: 6px 12px;
        font-family: Segoe UI;
        font-size: 14px;
    }
    QPushButton:hover {
        background-color: rgba(200, 190, 170, 1);
    }
    QPushButton:pressed {
        background-color: rgba(190, 185, 160, 255);
        padding-left: 8px;
        padding-top: 8px;
    }

)");
    refreshOrdersButton = new QPushButton("Update orders", this);
    refreshOrdersButton->setStyleSheet(R"(
    QPushButton {
        background-color: rgba(220, 213, 200, 1);
        color: #27492d;
        border-radius: 5px;
        padding: 6px 12px;
        font-family: Segoe UI;
        font-size: 14px;
    }
    QPushButton:hover {
        background-color: rgba(200, 190, 170, 1);
    }
    QPushButton:pressed {
        background-color: rgba(190, 185, 160, 255);
        padding-left: 8px;
        padding-top: 8px;
    }

)");

    tableOrders->setColumnCount(4);
    tableOrders->setHorizontalHeaderLabels({"name of restaurant", "name of customer", "name of food", "status"});
    tableOrders->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);

    QHBoxLayout* restaurantButtonsLayout = new QHBoxLayout();
    restaurantButtonsLayout->addWidget(approveRestaurantButton);
    restaurantButtonsLayout->addWidget(rejectRestaurantButton);

    QHBoxLayout* userButtonsLayout = new QHBoxLayout();
    userButtonsLayout->addWidget(blockUserButton);
    userButtonsLayout->addWidget(unblockUserButton);
    userButtonsLayout->addWidget(deleteUserButton);

    mainLayout = new QVBoxLayout(this);

    mainLayout->addWidget(new QLabel("List of restaurants waiting:", this));
    mainLayout->addWidget(listPendingRestaurants);
    mainLayout->addLayout(restaurantButtonsLayout);

    mainLayout->addSpacing(20);

    mainLayout->addWidget(new QLabel("List of users:", this));
    mainLayout->addWidget(listUsers);
    mainLayout->addLayout(userButtonsLayout);

    mainLayout->addSpacing(20);

    mainLayout->addWidget(new QLabel("Orders:", this));
    mainLayout->addWidget(tableOrders);
    mainLayout->addWidget(refreshOrdersButton);

    setLayout(mainLayout);
}

void adminmenu::setupConnections()
{
    connect(approveRestaurantButton, &QPushButton::clicked, this, &adminmenu::onApproveRestaurant);
    connect(rejectRestaurantButton, &QPushButton::clicked, this, &adminmenu::onRejectRestaurant);
    connect(blockUserButton, &QPushButton::clicked, this, &adminmenu::onBlockUser);
    connect(unblockUserButton, &QPushButton::clicked, this, &adminmenu::onUnblockUser);
    connect(deleteUserButton, &QPushButton::clicked, this, &adminmenu::onDeleteUser);
    connect(refreshOrdersButton, &QPushButton::clicked, this, &adminmenu::onRefreshOrders);
}

void adminmenu::onApproveRestaurant()
{
    auto selectedItems = listPendingRestaurants->selectedItems();
    QListWidgetItem* item = selectedItems.first();
    QString restaurantName = item->text();

    delete listPendingRestaurants->takeItem(listPendingRestaurants->row(item));

}

void adminmenu::onRejectRestaurant()
{
    auto selectedItems = listPendingRestaurants->selectedItems();
    QListWidgetItem* item = selectedItems.first();
    QString restaurantName = item->text();

    delete listPendingRestaurants->takeItem(listPendingRestaurants->row(item));

}

void adminmenu::onBlockUser()
{
    auto selectedItems = listUsers->selectedItems();
    QListWidgetItem* item = selectedItems.first();
    QString username = item->text();

    if (!username.contains("(blocked)")) {
        username += " (blocked)";
        item->setText(username);
    }

}

void adminmenu::onUnblockUser()
{
    auto selectedItems = listUsers->selectedItems();
    QListWidgetItem* item = selectedItems.first();
    QString username = item->text();

    username.replace(" (blocked)", "");
    item->setText(username);

}


void adminmenu::onDeleteUser()
{
    auto selectedItems = listUsers->selectedItems();
    QListWidgetItem* item = selectedItems.first();
    QString username = item->text();

    delete listUsers->takeItem(listUsers->row(item));

}


void adminmenu::onRefreshOrders()
{
    tableOrders->setRowCount(0);

    struct Order {
        QString restaurantName;
        QString customer;
        QString foodName;
        QString status;
    };

    QList<Order> orders = {
                           {"Saadi Restaurant", "Ali", "Kebab", "Preparing"},
                           {"Nahid Restaurant", "Sara", "Pizza", "Delivered"},
                           {"Golpayegan Restaurant", "Maryam", "Salad", "Ready to ship"},
                           };


    int row = 0;
    for (const auto& order : orders) {
        tableOrders->insertRow(row);
        tableOrders->setItem(row, 0, new QTableWidgetItem(order.restaurantName));
        tableOrders->setItem(row, 1, new QTableWidgetItem(order.customer));
        tableOrders->setItem(row, 2, new QTableWidgetItem(order.foodName));
        tableOrders->setItem(row, 3, new QTableWidgetItem(order.status));
        ++row;
    }

}
