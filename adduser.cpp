#include "adduser.h"
#include "ui_adduser.h"
#include <QMessageBox>
#include <QString>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
adduser::adduser(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::adduser)
{
    ui->setupUi(this);
}

adduser::~adduser()
{
    delete ui;
}

void adduser::on_btn_ensure_clicked()
{
    QString name=ui->textEditname->toPlainText();
    QString username=ui->textEditusername->toPlainText();
    QString password=ui->textEditpassword->toPlainText();
    QString phone=ui->textEditphone->toPlainText();
    QString usertype;
    if(name==""||username==""||password==""){
        QMessageBox::warning(this, "warning","关键字不能为空");
        return;
    }
    if(ui->radioButtonUserAdmin->isChecked()){
        usertype="admin";
    }
    if(ui->radioButtonUserBuy->isChecked()){
        usertype="buy";
    }
    if(ui->radioButtonUserRepair->isChecked()){
        usertype="repair";
    }
    if(ui->radioButtonUserUse->isChecked()){
        usertype="user";
    }
    QString sql_check=QString("select * from databaseuser where username='%1' and usertype='%2' ").arg(username).arg(usertype);
    QSqlQuery query;
    query.exec(sql_check);
    if(!query.first()){
        query.exec("SELECT MAX(userid) FROM databaseuser GROUP BY 'userid' ;");
        query.next();
        int userid=query.value(0).toInt()+1;
        sql_check=QString("SELECT MAX(Userid) FROM user WHERE Usertype='%1' GROUP BY 'Userid';").arg(usertype);
        query.exec(sql_check);
        query.next();
        int personalid=query.value(0).toInt()+1;
        QString sql_insert=QString("insert into databaseuser values (%1,'%2','%3','%4');").arg(userid).arg(username).arg(password).arg(usertype);
        query.exec(sql_insert);
        sql_insert=QString("insert into user values (%1,'%2','%3',%4,'%5');").arg(userid).arg(usertype).arg(username).arg(personalid).arg(phone);
        qDebug()<<sql_insert;
        query.exec(sql_insert);
        QMessageBox::about(this,  "添加成功",  "添加用户\n工号:"+QString::number(userid)+"\n登录名:"+username+"\n登录密码:"+password);
        this->close();
    }
    else{
        qDebug()<<"add ERROR";
        QMessageBox::critical(this, "ERROR", "添加用户失败");
    }
}


void adduser::on_btn_cancel_clicked()
{
    this->close();
}

