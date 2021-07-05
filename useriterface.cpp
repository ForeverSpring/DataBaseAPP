#include "useriterface.h"
#include "ui_useriterface.h"

useriterface::useriterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::useriterface)
{
    ui->setupUi(this);
}

useriterface::~useriterface()
{
    delete ui;
}
