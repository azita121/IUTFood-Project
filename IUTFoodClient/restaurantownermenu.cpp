#include "restaurantownermenu.h"
#include "ui_restaurantownermenu.h"
#include <QInputDialog>
#include <QMessageBox>

restaurantownermenu::restaurantownermenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::restaurantownermenu)
{
    ui->setupUi(this);

    // اسکرول منوی غذا
    scrollArea = new QScrollArea(this);
    scrollArea->setWidgetResizable(true);
    scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    container = new QWidget(this);
    layout = new QVBoxLayout(container);
    container->setLayout(layout);
    scrollArea->setWidget(container);

    QVBoxLayout* mainLayout = qobject_cast<QVBoxLayout*>(ui->menuHolder->layout());
    if (!mainLayout) {
        mainLayout = new QVBoxLayout(ui->menuHolder);
        ui->menuHolder->setLayout(mainLayout);
    }
    mainLayout->addWidget(scrollArea);

    // اسکرول سفارشات
    orderScrollArea = new QScrollArea(this);
    orderScrollArea->setWidgetResizable(true);
    orderScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    orderScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    orderContainer = new QWidget(this);
    orderLayout = new QVBoxLayout(orderContainer);
    orderContainer->setLayout(orderLayout);
    orderScrollArea->setWidget(orderContainer);

    QVBoxLayout* orderHolderLayout = qobject_cast<QVBoxLayout*>(ui->viewOrdersHolder->layout());
    if (!orderHolderLayout) {
        orderHolderLayout = new QVBoxLayout(ui->viewOrdersHolder);
        ui->viewOrdersHolder->setLayout(orderHolderLayout);
    }
    orderHolderLayout->addWidget(orderScrollArea);

    // اتصال دکمه‌ها
    connect(ui->addFoodButton, &QPushButton::clicked, this, &restaurantownermenu::on_addFoodButton_clicked);
    connect(ui->viewOrdersButton, &QPushButton::clicked, this, &restaurantownermenu::on_viewOrdersButton_clicked);
    connect(ui->menuManagementButton, &QPushButton::clicked, this, &restaurantownermenu::on_menuManagementButton_2_clicked);

    // غذاهای تستی
    foodList.append({ "Kebab", 120000, "Delicious Persian kebab" });
    foodList.append({ "Pizza", 180000, "Cheesy Italian pizza" });
    foodList.append({ "Salad", 60000, "Fresh garden salad" });

    // سفارش‌های تستی (برای نمایش در viewOrders)
    orderList = foodList;  // فرض کنیم همین غذاها رو سفارش دادن

    renderMenuItems();
}

restaurantownermenu::~restaurantownermenu()
{
    delete ui;
}

void restaurantownermenu::on_addFoodButton_clicked()
{
    QString name = QInputDialog::getText(this, "Add Food", "Food name:");
    if (name.isEmpty()) return;

    int price = QInputDialog::getInt(this, "Add Food", "Price:");
    QString desc = QInputDialog::getText(this, "Add Food", "Description:");

    MenuItem newItem = { name, price, desc };
    foodList.append(newItem);
    renderMenuItems();
}

void restaurantownermenu::renderMenuItems()
{
    // پاک‌سازی منو
    QLayoutItem* item;
    while ((item = layout->takeAt(0)) != nullptr) {
        if (item->widget()) item->widget()->deleteLater();
        delete item;
    }

    for (const MenuItem& m : foodList) {
        auto* foodWidget = new FoodItemWidget(m, this);
        foodWidget->setFoodData(m);
        foodWidget->setShowAddButton(false);  // مخفی‌سازی دکمه اضافه
        foodWidget->hidePlusMinusButtons();   // پنهان‌سازی دکمه‌ها

        // دکمه حذف از منو
        connect(foodWidget, &FoodItemWidget::foodRemoved, this, [=](const MenuItem& removedItem) {
            foodList.removeOne(removedItem);
            renderMenuItems();
        });

        layout->addWidget(foodWidget);
    }
}

void restaurantownermenu::renderOrders()
{
    // پاک‌سازی سفارش‌ها
    QLayoutItem* item;
    while ((item = orderLayout->takeAt(0)) != nullptr) {
        if (item->widget()) item->widget()->deleteLater();
        delete item;
    }

    for (const MenuItem& m : orderList) {
        auto* foodWidget = new FoodItemWidget(m, this);
        foodWidget->setFoodData(m);
        foodWidget->hidePlusMinusButtons();  // پنهان‌سازی دکمه‌ها
        foodWidget->setShowAddButton(false); // حذف دکمه add

        // دکمه‌های قبول / رد
        auto* acceptBtn = new QPushButton("✅ قبول", foodWidget);
        auto* rejectBtn = new QPushButton("❌ رد", foodWidget);

        QHBoxLayout* btns = new QHBoxLayout();
        btns->addWidget(acceptBtn);
        btns->addWidget(rejectBtn);

        QVBoxLayout* wrapper = new QVBoxLayout(foodWidget);
        wrapper->addLayout(btns);

        orderLayout->addWidget(foodWidget);
    }
}

void restaurantownermenu::on_viewOrdersButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
    renderOrders();
}


void restaurantownermenu::on_ChangeOfStatusButton_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void restaurantownermenu::on_menuManagementButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void restaurantownermenu::on_ChangeOfStatusButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
}


void restaurantownermenu::on_menuManagementButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void restaurantownermenu::on_viewOrdersButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}
