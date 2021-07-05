#include "mainwindow.h"
#include "login.h"
#include "useriterface.h"
#include "admininterface.h"
#include <QDebug>
#include <QApplication>
#include <QMessageBox>
#include <QSqlDatabase>
#include <QSqlQuery>
QSqlDatabase db;
QString hostname,DBname;
int severPort;
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    db = QSqlDatabase::addDatabase("QMYSQL");
    hostname=MainWindow::INIhostname;
    DBname=MainWindow::INIDBname;
    severPort=MainWindow::INIport;
    QString username="root",pswd="123456";
    db.setHostName(hostname); //数据库服务器IP
    db.setUserName(username);//用户名
    db.setPort(severPort);
    db.setPassword(pswd);//密码
    db.setDatabaseName("dms");//使用的数据库
    db.open();

    login* w=new login();
    w->show();
    return a.exec();
}
