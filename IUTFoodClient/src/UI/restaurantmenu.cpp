#include "restaurantmenu.h"
#include "ui_restaurantmenu.h"

RestaurantMenu::RestaurantMenu(const Restaurant& r, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::RestaurantMenu)
{
    ui->setupUi(this);

    ui->verticalLayout->setSpacing(0);
    ui->verticalLayout->setContentsMargins(0, 0, 0, 0);

    ui->RestaurantName->setText(r.name);
    ui->textEdit->clear();
    ui->textEdit->insertHtml("<img src=\":/images/finalback.jpg\">");

    for (const MenuItem& food : r.menuItems) {
        FoodItemWidget* foodWidget = new FoodItemWidget(food, this);

        foodWidget->setFoodData(food);
        foodWidget->setSizePolicy(QSizePolicy::Preferred, QSizePolicy::Fixed);
        foodWidget->setMinimumHeight(80);
        ui->verticalLayout->addWidget(foodWidget);

        connect(foodWidget, &FoodItemWidget::foodAdded, this, [=](const MenuItem& item){
            emit foodAddedToCart(item);
        });

    }

}

RestaurantMenu::~RestaurantMenu()
{
    delete ui;
}

