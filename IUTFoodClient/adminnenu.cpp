#include "adminnenu.h"
#include "ui_adminnenu.h"

adminnenu::adminnenu(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::adminnenu)
{
    ui->setupUi(this);
}

adminnenu::~adminnenu()
{
    delete ui;
}
