#include "customermenu.h"
#include "ui_customermenu.h"
#include "restaurantmenu.h"

CustomerMenu::CustomerMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CustomerMenu)
{
    ui->setupUi(this);

    QList<Restaurant> restaurantList;
    ui->comboBox->setPlaceholderText("location");
    ui->comboBox_2->setPlaceholderText("price");
    ui->comboBox_3->setPlaceholderText("type");


    // رستوران ۱
    Restaurant r1;
    r1.name = "Burger House";
    r1.type = "Fast Food";
    r1.location = "Downtown";
    // r1.imagePath = ":/images/burger.png";

    r1.menuItems.append({"Cheeseburger", 120000, "Beef, Cheddar Cheese, Special Sauce"});
    r1.menuItems.append({"Double Burger", 140000, "Fresh Fries, Special Seasoning"});
    r1.menuItems.append({"French Fries", 40000});
    r1.menuItems.append({"Coca Cola", 15000});
    // restaurantList.append(r1);
    restaurantList.append(r1);

    // رستوران ۲
    Restaurant r2;
    r2.name = "Pizza Planet";
    r2.type = "Italian";
    r2.location = "Uptown";
    // r2.imagePath = ":/images/pizza.png";
    // restaurantList.append(r2);

    r2.menuItems.append({"Pepperoni Pizza", 180000});
    r2.menuItems.append({"Margherita Pizza", 160000});
    r2.menuItems.append({"Garlic Bread", 50000});
    r2.menuItems.append({"Sprite", 18000});
    restaurantList.append(r2);


    // رستوران ۳
    Restaurant r3;
    r3.name = "Kebab King";
    r3.type = "Traditional";
    r3.location = "Old Town";
    // r3.imagePath = ":/images/kebab.png";
    // restaurantList.append(r3);

    r3.menuItems.append({"Koobideh Kebab", 140000});
    r3.menuItems.append({"Barg Kebab", 190000});
    r3.menuItems.append({"Steamed Rice", 30000});
    r3.menuItems.append({"Doogh", 20000});
    restaurantList.append(r3);

    Restaurant r4;
    r4.name = "Burger House";
    r4.type = "Fast Food";
    r4.location = "Downtown";
    // r4.imagePath = ":/images/burger.png";
    restaurantList.append(r4);

    Restaurant r5;
    r5.name = "Burger House";
    r5.type = "Fast Food";
    r5.location = "Downtown";
    // r5.imagePath = ":/images/burger.png";
    restaurantList.append(r5);

    Restaurant r6;
    r6.name = "Burger House";
    r6.type = "Fast Food";
    r6.location = "Downtown";
    // r6.imagePath = ":/images/burger.png";
    restaurantList.append(r6);

    Restaurant r7;
    r7.name = "Burger House";
    r7.type = "Fast Food";
    r7.location = "Downtown";
    // r7.imagePath = ":/images/burger.png";
    restaurantList.append(r7);

    Restaurant r8;
    r8.name = "Burger House";
    r8.type = "Fast Food";
    r8.location = "Downtown";
    // r8.imagePath = ":/images/burger.png";
    restaurantList.append(r8);

    for (const Restaurant& r : restaurantList) {
        restaurantitem* item = new restaurantitem(this);
        item->setRestaurantData(r);

        connect(item, &restaurantitem::restaurantClicked, this, [=](const Restaurant& res) {
            RestaurantMenu* menuPage = new RestaurantMenu(res);
            menuPage->setAttribute(Qt::WA_DeleteOnClose);
            menuPage->show();
        });

        ui->verticalLayout->addWidget(item);
    }
}

CustomerMenu::~CustomerMenu()
{
    delete ui;
}

void CustomerMenu::on_shoppingCartButton_clicked()
{
    // ui->stackedWidget->
}

void CustomerMenu::on_HistoryButton_clicked()
{

}

