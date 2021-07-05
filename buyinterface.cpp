#include "buyinterface.h"
#include "ui_buyinterface.h"

buyinterface::buyinterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::buyinterface)
{
    ui->setupUi(this);
}

buyinterface::~buyinterface()
{
    delete ui;
}
