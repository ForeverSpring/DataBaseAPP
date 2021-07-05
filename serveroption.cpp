#include "serveroption.h"
#include "ui_serveroption.h"
#include "mainwindow.h"
#include <QString>
#include <QSqlDatabase>
extern QString hostname,DBname;
extern int severPort;

ServerOption::ServerOption(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ServerOption)
{
    ui->setupUi(this);
}

ServerOption::~ServerOption()
{
    delete ui;
}

//reset server option
void ServerOption::on_pushButtonreset_clicked()
{
    ui->textBrowserIP->setText("127.0.0.1");
    ui->textBrowserport->setText("3306");
    ui->textBrowserDBname->setText("test");
    this->on_pushButtonset_clicked();
}


void ServerOption::on_pushButtonset_clicked()
{
    hostname=ui->textBrowserIP->toPlainText();
    DBname=ui->textBrowserDBname->toPlainText();
    severPort=ui->textBrowserport->toPlainText().toInt();
}

