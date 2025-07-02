#include "restaurantownermenu.h"
#include "ui_restaurantownermenu.h"
#include <QInputDialog>
#include <QMessageBox>

restaurantownermenu::restaurantownermenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::restaurantownermenu)
{
    ui->setupUi(this);

    // اسکرول‌ویو وضعیت سفارش‌ها
    statusScrollArea = new QScrollArea(this);
    statusScrollArea->setWidgetResizable(true);
    statusScrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAsNeeded);
    statusScrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);

    statusContainer = new QWidget(this);
    statusLayout = new QVBoxLayout(statusContainer);
    statusContainer->setLayout(statusLayout);
    statusScrollArea->setWidget(statusContainer);

    QVBoxLayout* statusHolderLayout = qobject_cast<QVBoxLayout*>(ui->changeStatusHolder->layout());
    if (!statusHolderLayout) {
        statusHolderLayout = new QVBoxLayout(ui->changeStatusHolder);
        ui->changeStatusHolder->setLayout(statusHolderLayout);
    }
    statusHolderLayout->addWidget(statusScrollArea);


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
        // foodWidget->hidePlusMinusButtons();   // پنهان‌سازی دکمه‌ها

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
        // auto* acceptBtn = new QPushButton("✅ قبول", foodWidget);
        // auto* rejectBtn = new QPushButton("❌ رد", foodWidget);

//         acceptBtn->setStyleSheet(R"(
//     QPushButton {
//         background-color: rgba(220, 213, 200, 1);
//         color: black;
//         border-radius: 5px;
//         padding: 5px 10px;
//     }
//     QPushButton:hover {
//         background-color: rgba(200, 190, 170, 1);
//     }
// )");

//         rejectBtn->setStyleSheet(R"(
//     QPushButton {
//         background-color: rgba(220, 213, 200, 1);
//         color: black;
//         border-radius: 5px;
//         padding: 5px 10px;
//     }
//     QPushButton:hover {
//         background-color: rgba(200, 190, 170, 1);
//     }
// )");

        // connect(rejectBtn, &QPushButton::clicked, this, [=]() {
        //     orderList.removeOne(m);
        //     renderOrders();
        // });

        // QHBoxLayout* btns = new QHBoxLayout();
        // btns->addWidget(acceptBtn);
        // btns->addWidget(rejectBtn);

        // QVBoxLayout* wrapper = new QVBoxLayout(foodWidget);
        // wrapper->addLayout(btns);

        QPushButton* acceptBtn = new QPushButton("Accept");
        QPushButton* rejectBtn = new QPushButton("Reject");

        acceptBtn->setStyleSheet(R"(
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
)");

        rejectBtn->setStyleSheet(R"(
    QPushButton {
        background-color: rgba(220, 213, 200, 1);
        color: #5D0E07;
        border-radius: 5px;
        padding: 6px 12px;
        font-family: Segoe UI;
        font-size: 14px;
    }
    QPushButton:hover {
        background-color: rgba(200, 190, 170, 1);
    }
)");

        acceptBtn->setFixedSize(100, 35);
        rejectBtn->setFixedSize(100, 35);

        // لایه عمودی برای دکمه‌ها
        QVBoxLayout* buttonsVertical = new QVBoxLayout();
        buttonsVertical->setSpacing(8);
        buttonsVertical->addWidget(acceptBtn);
        buttonsVertical->addWidget(rejectBtn);

        // لایه افقی کلی برای چسباندن دکمه‌ها به راست
        QHBoxLayout* btnsRow = new QHBoxLayout();
        btnsRow->addStretch();                   // اسپریسر سمت چپ
        btnsRow->addLayout(buttonsVertical);    // دکمه‌ها سمت راست

        // اضافه به layout اصلی foodWidget
        QVBoxLayout* foodLayout = qobject_cast<QVBoxLayout*>(foodWidget->layout());
        if (!foodLayout) {
            foodLayout = new QVBoxLayout(foodWidget);
            foodWidget->setLayout(foodLayout);
        }
        foodLayout->addLayout(btnsRow);

        connect(acceptBtn, &QPushButton::clicked, this, [=]() {
            acceptedOrders.append({ "مشتری تستی", m, "در حال آماده‌سازی" });
            orderList.removeOne(m);
            renderOrders();
        });

        connect(rejectBtn, &QPushButton::clicked, this, [=]() {
            orderList.removeOne(m);
            renderOrders();
        });

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
    renderAcceptedOrders(); // نمایش سفارش‌های پذیرفته‌شده
}


void restaurantownermenu::on_menuManagementButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void restaurantownermenu::on_ChangeOfStatusButton_2_clicked()
{
    ui->stackedWidget->setCurrentIndex(2);
    renderAcceptedOrders(); // نمایش سفارش‌های پذیرفته‌شده
}


void restaurantownermenu::on_menuManagementButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(0);
}


void restaurantownermenu::on_viewOrdersButton_5_clicked()
{
    ui->stackedWidget->setCurrentIndex(1);
}

void restaurantownermenu::renderAcceptedOrders()
{
    // پاک کردن قبلی‌ها
    QLayoutItem* item;
    while ((item = statusLayout->takeAt(0)) != nullptr) {
        if (item->widget()) item->widget()->deleteLater();
        delete item;
    }

    for (auto& order : acceptedOrders) {
        QString customer = order.customer;
        MenuItem item = order.item;

        // ویجت اصلی
        QWidget* orderWidget = new QWidget(this);
        orderWidget->setStyleSheet(R"(
            background-color: rgba(220, 213, 200, 1);
            border-radius: 10px;
        )");

        QVBoxLayout* orderLayout = new QVBoxLayout(orderWidget);
        orderLayout->setContentsMargins(10, 10, 10, 10);

        QLabel* nameLabel = new QLabel("Customer: " + customer);
        QLabel* foodLabel = new QLabel("Food: " + item.name);

        nameLabel->setStyleSheet("color: #27492d; font-weight: bold;");
        foodLabel->setStyleSheet("color: #27492d;");

        QComboBox* statusBox = new QComboBox();
        statusBox->addItems({ "Preparing", "Ready to Ship", "Delivered" });

        // تبدیل وضعیت فعلی به انگلیسی
        QString translatedStatus;
        if (order.status == "در حال آماده‌سازی") translatedStatus = "Preparing";
        else if (order.status == "آماده ارسال") translatedStatus = "Ready to Ship";
        else if (order.status == "ارسال شد") translatedStatus = "Delivered";

        int index = statusBox->findText(translatedStatus);
        if (index != -1) statusBox->setCurrentIndex(index);

        // استایل کمبوباکس
        statusBox->setStyleSheet(R"(
            QComboBox {
                background-color: rgba(0, 0, 0, 0);
                border: none;
                border-bottom: 2px solid rgba(46, 82, 101, 200);
                color: rgba(0, 0, 0, 240);
                padding: 5px;
                font-weight: bold;
            }
            QComboBox QAbstractItemView {
                background-color: rgba(66, 90, 81, 200);
                selection-background-color: rgba(60, 100, 80, 255);
                color: #F0F8F2;
                border: 1px solid rgba(100, 150, 120, 100);
            }
        )");

        // ذخیره وضعیت جدید (برعکس: انگلیسی → فارسی)
        connect(statusBox, &QComboBox::currentTextChanged, this, [=, &order](const QString& newStatus) {
            if (newStatus == "Preparing") order.status = "در حال آماده‌سازی";
            else if (newStatus == "Ready to Ship") order.status = "آماده ارسال";
            else if (newStatus == "Delivered") order.status = "ارسال شد";
        });

        orderLayout->addWidget(nameLabel);
        orderLayout->addWidget(foodLabel);
        orderLayout->addWidget(statusBox);

        statusLayout->addWidget(orderWidget);
    }
}
