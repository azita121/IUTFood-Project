#include "restaurantmenu.h"
#include "ui_restaurantmenu.h"

RestaurantMenu::RestaurantMenu(const Restaurant& r, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RestaurantMenu)
{
    ui->setupUi(this);

    ui->verticalLayout->setSpacing(0);
    ui->verticalLayout->setContentsMargins(0, 0, 0, 0);

    //this->setStyleSheet("background-image: url(:/images/finalback.jpg); background-repeat: no-repeat; background-position: center;");
    ui->label_5->setText(r.name);  // فرض بر اینه label داری
    // ui->locationLabel->setText(r.location);
    // ui->typeLabel->setText(r.type);

    ui->textEdit->clear();
    ui->textEdit->insertHtml("<img src=\":/images/finalback.jpg\">");

    for (const MenuItem& food : r.menuItems) {
        FoodItemWidget* foodWidget = new FoodItemWidget(food, this);

        foodWidget->setFoodData(food);
        foodWidget->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        foodWidget->setMinimumHeight(80);
        ui->verticalLayout->addWidget(foodWidget);
    }
}

RestaurantMenu::~RestaurantMenu()
{
    delete ui;
}

