#include "changeofstatus.h"
#include "ui_changeofstatus.h"

changeofstatus::changeofstatus(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::changeofstatus)
{
    ui->setupUi(this);
}

changeofstatus::~changeofstatus()
{
    delete ui;
}
