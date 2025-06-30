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

    ui->label_5->setText(data.name);
    ui->label_6->setText(data.type);
    ui->label_7->setText(data.location);

}

void restaurantitem::on_showresButton_clicked()
{
    emit restaurantClicked(restaurantData);
}
