#include "repair.h"
#include "ui_repair.h"

repair::repair(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::repair)
{
    ui->setupUi(this);
}

repair::~repair()
{
    delete ui;
}
