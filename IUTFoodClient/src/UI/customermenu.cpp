#include "customermenu.h"
#include "ui_customermenu.h"
#include "restaurantmenu.h"

CustomerMenu::CustomerMenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::CustomerMenu)
{
    ui->setupUi(this);

    connect(ui->typeComboBox, &QComboBox::currentTextChanged, this, &CustomerMenu::applyFilters);
    connect(ui->locationComboBox, &QComboBox::currentTextChanged, this, &CustomerMenu::applyFilters);
    connect(ui->priceComboBox, &QComboBox::currentTextChanged, this, &CustomerMenu::applyFilters);
    connect(ui->resetFiltersButton, &QPushButton::clicked, this, &CustomerMenu::resetFilters);

    ui->typeComboBox->addItem("type");
    ui->typeComboBox->addItem("Fast Food");
    ui->typeComboBox->addItem("Iranian");

    QStandardItemModel* model = qobject_cast<QStandardItemModel*>(ui->typeComboBox->model());
    if (model) {
        QStandardItem* item = model->item(0);
        if (item) item->setEnabled(false);
    }

    ui->priceComboBox->addItem("price");
    ui->priceComboBox->addItem("Under 100,000");
    ui->priceComboBox->addItem("From 100,000 to 200,0000");
    ui->priceComboBox->addItem("From 200,000 to 300,0000");
    ui->priceComboBox->addItem("From 300,000 to 400,0000");
    ui->priceComboBox->addItem("From 400,000 to 500,0000");
    ui->priceComboBox->addItem("More than 500,000");

    QStandardItemModel* model1 = qobject_cast<QStandardItemModel*>(ui->priceComboBox->model());
    if (model1) {
        QStandardItem* item = model1->item(0);
        if (item) item->setEnabled(false);
    }

    ui->locationComboBox->addItem("location");
    ui->locationComboBox->addItem("Tehran");
    ui->locationComboBox->addItem("Mashhad");
    ui->locationComboBox->addItem("Karaj");
    ui->locationComboBox->addItem("Isfahan");
    ui->locationComboBox->addItem("Tabriz");
    ui->locationComboBox->addItem("Shiraz");
    ui->locationComboBox->addItem("Ahvaz");
    ui->locationComboBox->addItem("Qom");
    ui->locationComboBox->addItem("Kermanshah");
    ui->locationComboBox->addItem("Urmia");
    ui->locationComboBox->addItem("Rasht");
    ui->locationComboBox->addItem("Hamadan");
    ui->locationComboBox->addItem("Yazd");
    ui->locationComboBox->addItem("Kerman");
    ui->locationComboBox->addItem("Ardabil");
    ui->locationComboBox->addItem("Bandar Abbas");
    ui->locationComboBox->addItem("Qazvin");
    ui->locationComboBox->addItem("Shahr-e Kord");
    ui->locationComboBox->addItem("Bandar Anzali");
    ui->locationComboBox->addItem("Abadan");

    QStandardItemModel* model2 = qobject_cast<QStandardItemModel*>(ui->locationComboBox->model());
    if (model2) {
        QStandardItem* item = model2->item(0);
        if (item) item->setEnabled(false);
    }

    QList<Restaurant> restaurantList;

    // ui->locationComboBox->setPlaceholderText("location");
    // ui->priceComboBox->setPlaceholderText("price");
    // ui->typeComboBox->setPlaceholderText("type");


    Restaurant r1;
    r1.name = "Burger House";
    r1.type = "Fast Food";
    r1.location = "Tehran";
    r1.menuItems.append({"Cheeseburger", 120000, "Beef, Cheddar Cheese, Special Sauce"});
    r1.menuItems.append({"Double Burger", 150000, "Two Beef Patties, Extra Cheese"});
    r1.menuItems.append({"French Fries", 40000, "Crispy fries with ketchup"});
    r1.menuItems.append({"Coca Cola", 20000, "Chilled Coca Cola bottle"});
    restaurantList.append(r1);

    // === رستوران ۲ ===
    Restaurant r2;
    r2.name = "Pizza Planet";
    r2.type = "Italian";
    r2.location = "Mashhad";
    r2.menuItems.append({"Pepperoni Pizza", 180000, "Spicy pepperoni with mozzarella"});
    r2.menuItems.append({"Margherita Pizza", 160000, "Tomato, basil, and cheese"});
    r2.menuItems.append({"Garlic Bread", 50000, "Served with melted cheese"});
    r2.menuItems.append({"Sprite", 18000, "Cold Sprite bottle"});
    restaurantList.append(r2);

    // === رستوران ۳ ===
    Restaurant r3;
    r3.name = "Kebab King";
    r3.type = "Iranian";
    r3.location = "Isfahan";
    r3.menuItems.append({"Koobideh Kebab", 130000, "Two skewers of koobideh"});
    r3.menuItems.append({"Barg Kebab", 180000, "Grilled lamb strips"});
    r3.menuItems.append({"Rice", 30000, "Steamed Persian rice"});
    r3.menuItems.append({"Doogh", 15000, "Traditional yogurt drink"});
    restaurantList.append(r3);

    // === رستوران ۴ ===
    Restaurant r4;
    r4.name = "Grill Master";
    r4.type = "Fast Food";
    r4.location = "Tabriz";
    r4.menuItems.append({"Chicken Burger", 110000, "Grilled chicken with mayo"});
    r4.menuItems.append({"Grilled Wings", 90000, "Spicy chicken wings"});
    r4.menuItems.append({"Coleslaw", 25000, "Creamy cabbage salad"});
    r4.menuItems.append({"Fanta", 15000, "Orange soda"});
    restaurantList.append(r4);

    // === رستوران ۵ ===
    Restaurant r5;
    r5.name = "Saffron Kitchen";
    r5.type = "Iranian";
    r5.location = "Mashhad";
    r5.menuItems.append({"Zereshk Polo", 160000, "Barberry rice with chicken"});
    r5.menuItems.append({"Gheimeh", 140000, "Split pea stew"});
    r5.menuItems.append({"Torshi", 20000, "Pickled vegetables"});
    r5.menuItems.append({"Doogh", 15000, "Yogurt drink"});
    restaurantList.append(r5);

    // === رستوران ۶ ===
    Restaurant r6;
    r6.name = "Pastaria";
    r6.type = "Italian";
    r6.location = "Shiraz";
    r6.menuItems.append({"Spaghetti Bolognese", 170000, "Beef sauce with parmesan"});
    r6.menuItems.append({"Lasagna", 190000, "Layered pasta with cheese and meat"});
    r6.menuItems.append({"Bruschetta", 45000, "Toasted bread with tomato"});
    r6.menuItems.append({"Iced Tea", 20000, "Cold lemon iced tea"});
    restaurantList.append(r6);

    // === رستوران ۷ ===
    Restaurant r7;
    r7.name = "Hot Bite";
    r7.type = "Fast Food";
    r7.location = "Qom";
    r7.menuItems.append({"Chili Burger", 145000, "Beef burger with hot sauce"});
    r7.menuItems.append({"Loaded Fries", 70000, "Fries with cheese and toppings"});
    r7.menuItems.append({"Lemonade", 18000, "Fresh squeezed lemonade"});
    restaurantList.append(r7);

    // === رستوران ۸ ===
    Restaurant r8;
    r8.name = "Garden Dine";
    r8.type = "Iranian";
    r8.location = "Yazd";
    r8.menuItems.append({"Kashk-e Bademjan", 90000, "Eggplant and whey appetizer"});
    r8.menuItems.append({"Tahchin", 160000, "Saffron rice cake with chicken"});
    r8.menuItems.append({"Shirazi Salad", 25000, "Cucumber, tomato, onion"});
    r8.menuItems.append({"Doogh", 15000, "Local yogurt drink"});
    restaurantList.append(r8);

    allRestaurants = restaurantList;
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

void CustomerMenu::applyFilters()
{
    QString typeFilter = ui->typeComboBox->currentText();
    QString locFilter = ui->locationComboBox->currentText();
    QString priceFilter = ui->priceComboBox->currentText();

    // پاک کردن قبلی‌ها از layout
    QLayoutItem* item;
    while ((item = ui->verticalLayout->takeAt(0)) != nullptr) {
        if (item->widget()) item->widget()->deleteLater();
        delete item;
    }

    for (const Restaurant& r : allRestaurants) {
        // بررسی اینکه آیا فیلتر اصلاً فعال هست
        bool isTypeFiltered = (typeFilter != "type");
        bool isLocFiltered = (locFilter != "location");
        bool isPriceFiltered = (priceFilter != "price");

        // بررسی وضعیت هر فیلتر فقط اگر فعال بود
        bool typeOk = (!isTypeFiltered || r.type == typeFilter);
        bool locOk = (!isLocFiltered || r.location == locFilter);

        // محاسبه میانگین قیمت غذا
        int avgPrice = 0;
        for (const MenuItem& m : r.menuItems)
            avgPrice += m.price;
        if (!r.menuItems.isEmpty())
            avgPrice /= r.menuItems.size();

        bool priceOk = true;
        if (isPriceFiltered) {
            if (priceFilter == "Under 100,000") priceOk = avgPrice < 100000;
            else if (priceFilter == "From 100,000 to 200,0000") priceOk = (avgPrice >= 100000 && avgPrice <= 200000);
            else if (priceFilter == "From 200,000 to 300,0000") priceOk = (avgPrice >= 200000 && avgPrice <= 300000);
            else if (priceFilter == "From 300,000 to 400,0000") priceOk = (avgPrice >= 300000 && avgPrice <= 400000);
            else if (priceFilter == "From 400,000 to 500,0000") priceOk = (avgPrice >= 400000 && avgPrice <= 500000);
            else if (priceFilter == "More than 500,000") priceOk = avgPrice > 500000;
        }

        // فقط اگر تمام فیلترهای فعال برقرار بودن، رستوران رو نشون بده
        if (typeOk && locOk && priceOk) {
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
}



void CustomerMenu::resetFilters()
{
    ui->typeComboBox->setCurrentIndex(0);
    ui->locationComboBox->setCurrentIndex(0);
    ui->priceComboBox->setCurrentIndex(0);
    applyFilters();  // برگردیم به حالت اولیه
}
