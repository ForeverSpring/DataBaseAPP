#include "option.h"
#include "ui_option.h"
#include <mainwindow.h>
extern QString hostname,DBname;
extern int severPort;
option::option(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::option)
{
    ui->setupUi(this);
    this->flush_text();
}

option::~option()
{
    delete ui;
}

void option::flush_text(){
    ui->textBrowserIP->setText(hostname);
    ui->textBrowserDBname->setText(DBname);
    ui->textBrowserport->setText(QString::number(severPort));
}

void option::on_pushButtonset_clicked()
{
    hostname=ui->textBrowserIP->toPlainText();
    DBname=ui->textBrowserDBname->toPlainText();
    severPort=ui->textBrowserport->toPlainText().toInt();
    qDebug()<<"change";
}


void option::on_pushButtonreset_clicked()
{
    hostname=MainWindow::INIhostname;
    DBname=MainWindow::INIDBname;
    severPort=MainWindow::INIport;
    this->flush_text();
    qDebug()<<"reset";
}

