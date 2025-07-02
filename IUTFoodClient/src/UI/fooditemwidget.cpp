#include "fooditemwidget.h"
#include "ui_fooditemwidget.h"

FoodItemWidget::FoodItemWidget(const MenuItem& item, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FoodItemWidget)
{
    ui->setupUi(this);
}

FoodItemWidget::~FoodItemWidget()
{
    delete ui;
}

void FoodItemWidget::setFoodData(const MenuItem& item)
{
    ui->label_foodname->setText(item.name);
    ui->label_foodprice->setText(QString::number(item.price));
    ui->label_fooddetails->setText(item.detail);
}
