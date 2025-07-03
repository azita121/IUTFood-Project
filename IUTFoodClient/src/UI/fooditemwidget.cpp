#include "fooditemwidget.h"
#include "ui_fooditemwidget.h"

FoodItemWidget::FoodItemWidget(const MenuItem& item, QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::FoodItemWidget)
{
    ui->setupUi(this);
    setFoodData(item);

    connect(ui->addFoodButton, &QToolButton::clicked, this, [=]() {
        emit foodAdded(menuItem);
    });

    connect(ui->removeFoodButton, &QToolButton::clicked, this, [=]() {
        emit foodRemoved(menuItem);
    });

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
    emit foodAdded(menuItem);
}

void FoodItemWidget::on_removeFoodButton_triggered(QAction *arg1)
{
    emit foodRemoved(menuItem);
}

void FoodItemWidget::setReadOnly(bool readOnly)
{
    if (readOnly) {
        ui->addFoodButton->hide();
        if (ui->removeFoodButton)
            ui->removeFoodButton->hide();
    } else {
        ui->addFoodButton->show();
        if (ui->removeFoodButton)
            ui->removeFoodButton->show();
    }
}

void FoodItemWidget::setOwnerMode(bool owner)
{
    if (owner) {
        ui->addFoodButton->hide();
        ui->removeFoodButton->show();
    } else {
        ui->addFoodButton->show();
        ui->removeFoodButton->hide();
    }
}

void FoodItemWidget::setShowAddButton(bool show)
{
    showAddButton = show;
    ui->addFoodButton->setVisible(showAddButton);
}

void FoodItemWidget::hidePlusMinusButtons()
{
    ui->addFoodButton->hide();
    if (ui->removeFoodButton) ui->removeFoodButton->hide();
}
