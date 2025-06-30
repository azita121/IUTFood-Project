#include "restaurantitem.h"
#include "ui_restaurantitem.h"

restaurantitem::restaurantitem(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::restaurantitem)
{
    ui->setupUi(this);
}

restaurantitem::~restaurantitem()
{
    delete ui;
}

void restaurantitem::setRestaurantData(const Restaurant& data)
{
    restaurantData = data;

    ui->label_restaurantName->setText(data.name);
    ui->label_restaurantType->setText(data.type);
    ui->label_restaurantLocation->setText(data.location);

}

void restaurantitem::on_showresButton_clicked()
{
    emit restaurantClicked(restaurantData);
}
