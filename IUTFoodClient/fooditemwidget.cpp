#include "fooditemwidget.h"
#include "ui_fooditemwidget.h"

FoodItemWidget::FoodItemWidget(const MenuItem& item, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FoodItemWidget)
{
    ui->setupUi(this);
    setFoodData(item);
}

FoodItemWidget::~FoodItemWidget()
{
    delete ui;
}

void FoodItemWidget::setFoodData(const MenuItem& item)
{
    menuItem = item;
    ui->label_foodname->setText(item.name);
    ui->label_foodprice->setText(QString::number(item.price));
    ui->label_fooddetails->setText(item.detail);
}

void FoodItemWidget::on_addFoodButton_triggered(QAction *arg1)
{
    if (!arg1) return;

    if (isInCart && arg1->text() == "Remove") {
        emit foodRemoved(menuItem);  // به parent سیگنال می‌زنیم
    }
    else if (!isInCart && arg1->text() == "Add") {
        emit foodAdded(menuItem);
    }
}

void FoodItemWidget::setInCartMode(bool cart)
{
    isInCart = cart;
    if (isInCart) {
        ui->addFoodButton->setIcon(QIcon(":/icons/minus.png"));
        ui->addFoodButton->setToolTip("Remove from cart");

        QMenu* menu = new QMenu(this);
        QAction* removeAction = new QAction("Remove", this);
        menu->addAction(removeAction);
        ui->addFoodButton->setMenu(menu);
    } else {
        ui->addFoodButton->setIcon(QIcon(":/icons/plus.png"));
        ui->addFoodButton->setToolTip("Add to cart");

        QMenu* menu = new QMenu(this);
        QAction* addAction = new QAction("Add", this);
        menu->addAction(addAction);
        ui->addFoodButton->setMenu(menu);
    }
}
