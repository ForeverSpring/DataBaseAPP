#include "login.h"
#include "ui_login.h"
#include <QDebug>
#include <QSqlQuery>
#include <QSqlRecord>
#include <QLineEdit>
#include <QMessageBox>
#include <QString>
#include <mainwindow.h>
#include "admininterface.h"
#include "option.h"
extern QSqlDatabase db;
extern QString hostname,DBname;
extern int severPort;
QString UserType;
QString curname;
login::login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::login)
{
    ui->setupUi(this);
    QPushButton btn_set("Option",this);
}

login::~login()
{
    qDebug()<<"delete login";
    delete ui;
}

bool link_mysql(QString username,QString password){
    QString sql=QString("select * from databaseuser where username='%1'and password='%2' ").arg(username).arg(password);
    QSqlQuery query;
    query.exec(sql);
    if(query.first()){
        qDebug()<<"check acc success!";
        sql=QString("select usertype from databaseuser where username='%1'and password='%2' ").arg(username).arg(password);
        query.exec(sql);
        query.next();
        UserType=query.value(0).toString();
        return UserType=="admin";
    }
    else{
        qDebug()<<"login ERROR";
        return false;
    }
}

void login::open_interface(QString usertype){
    qDebug()<<"login success: "+usertype;
    admininterface* w_admin=new admininterface();
    w_admin->show();
}

void login::on_btn_login_clicked()
{
        login::account=ui->lineEditAcc->text();
        QString password=ui->lineEditPswd->text();
        if(link_mysql(login::account,password)){
            curname=login::account;
            this->close();
            open_interface(UserType);
        }
        else{
            QMessageBox::critical(this, "ERROR", "数据库连接失败");
        }
}



void login::on_btn_option_clicked()
{
    option* w_opt=new option();
    w_opt->show();
}


void login::on_btn_exit_clicked()
{
    this->close();
}

