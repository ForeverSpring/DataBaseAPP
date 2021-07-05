#include "admininterface.h"
#include "ui_admininterface.h"
#include "adduser.h"
#include <QSqlQueryModel>
#include <QSqlRecord>
#include <QSqlError>
#include <QSqlTableModel>
#include <QTableView>
#include <QHeaderView>
#include <QMessageBox>
QSqlTableModel* model_device;
QSqlTableModel* model_store;
QSqlTableModel* model_use;
QSqlTableModel* model_repair;
QSqlTableModel* model_user;
QSqlTableModel* model_buy;
QSqlTableModel* model_report;
QSqlTableModel* model_DBUser;
//TODO:
//ini->tableview->button
extern QString curname;
admininterface::admininterface(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::admininterface)
{
    ui->setupUi(this);
    ui->textUsername->setText("欢迎: "+curname);
    ui->tabWidget->setCurrentIndex(0);
    //ini device table
    model_device=new QSqlTableModel();
    model_device->setTable("device");
    model_device->select();
    model_device->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableViewDevice->setModel(model_device);

    //ini store table
    model_store=new QSqlTableModel();
    model_store->setTable("store");
    model_store->select();
    model_store->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableViewStore->setModel(model_store);

    //ini use table
    model_use=new QSqlTableModel();
    model_use->setTable("use");
    model_use->select();
    model_use->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableViewUse->setModel(model_use);

    //ini buy table
    model_buy=new QSqlTableModel();
    model_buy->setTable("buy");
    model_buy->select();
    model_buy->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableViewBuy->setModel(model_buy);

    //ini report table
    model_report=new QSqlTableModel();
    model_report->setTable("report");
    model_report->select();
    model_report->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableViewReport->setModel(model_report);

    //ini repair table
    model_repair=new QSqlTableModel();
    model_repair->setTable("repair");
    model_repair->select();
    model_repair->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableViewRepair->setModel(model_repair);

    //ini user table
    model_user=new QSqlTableModel();
    model_user->setTable("user");
    model_user->select();
    model_user->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableViewUser->setModel(model_user);

    //ini DBUser table
    model_DBUser=new QSqlTableModel();
    model_DBUser->setTable("databaseuser");
    model_DBUser->select();
    model_DBUser->setEditStrategy(QSqlTableModel::OnManualSubmit);


//    model_device->setSort(0, Qt::AscendingOrder);
//    model_device->setHeaderData(0, Qt::Horizontal,tr("Did"));
//    model_device->setHeaderData(1, Qt::Horizontal,tr("Tid"));
//    model_device->setHeaderData(2, Qt::Horizontal,"CreatDate");
//    model_device->setHeaderData(3, Qt::Horizontal,"BuyDate");
}

admininterface::~admininterface()
{
    delete ui;
}

QString add_sql(QString a,QString b){
    if(a=="")
        a=b;
    else
        a=a+" and "+b;
    return a;
}

void admininterface::on_btnsearch_s_clicked()
{
    QString sql="";
    //read textEdit to select
    if(ui->textEdittid->toPlainText()!=""){
        sql=add_sql(sql,QString("Tid='%1'").arg(ui->textEdittid->toPlainText()));
    }
    model_device->setFilter(sql);
    if(ui->textEditsid->toPlainText()!=""){
        sql=add_sql(sql,QString("Did='%1'").arg(ui->textEditsid->toPlainText()));
    }
    model_device->setFilter(sql);
    if(ui->dateEditCreat->date().toString("yyyy-MM-dd")!="1800-01-01"){
        sql=add_sql(sql,QString("CreatDate='%1'").arg(ui->dateEditCreat->date().toString("yyyy-MM-dd")));
    }
    model_device->setFilter(sql);
    if(ui->dateEditBuy->date().toString("yyyy-MM-dd")!="1800-01-01"){
        sql=add_sql(sql,QString("BuyDate='%1'").arg(ui->dateEditBuy->date().toString("yyyy-MM-dd")));
    }
    model_device->setFilter(sql);
    qDebug()<<sql;
    model_device->select();
}


void admininterface::on_btndelete_s_clicked()
{
    int curRow=ui->tableViewDevice->currentIndex().row();
    if(curRow!=-1){
        model_device->removeRow(curRow);
        int ok = QMessageBox::warning(this,tr("删除当前行!"),
        tr("你确定删除当前行吗？ "),QMessageBox::Yes, QMessageBox::No);
        if(ok == QMessageBox::No)
        { // 如果不删除， 则撤销
        model_device->revertAll();
        } else { // 否则提交， 在数据库中删除该行
        model_device->submitAll();
        }
    }
}


void admininterface::on_btnreport_s_clicked()
{
    model_device->database().transaction();
    if (model_device->submitAll()) {
    model_device->database().commit(); //提交
    } else {
    model_device->database().rollback(); //回滚
    QMessageBox::warning(this, tr("tableModel"),
    tr("数据库错误: %1").arg(model_device->lastError().text()));
    }
}


void admininterface::on_btnrevert_s_clicked()
{
    model_device->revertAll();
}


void admininterface::on_btninsert_s_clicked()
{
    int rowNum = model_device->rowCount();//获得表的行数
    model_device->insertRow(rowNum); //添加一行
    //model->submitAll(); //可以直接提交
}


void admininterface::on_btnsearch_store_clicked()
{
    QString sql="";
    //read textEdit to select
    if(ui->textEditstorestid->toPlainText()!=""){
        sql=add_sql(sql,QString("Tid='%1'").arg(ui->textEditstorestid->toPlainText()));
    }
    if(ui->textEditstoreplace->toPlainText()!=""){
        sql=add_sql(sql,QString("Splace='%1'").arg(ui->textEditstoreplace->toPlainText()));
    }
    model_store->setFilter(sql);
    qDebug()<<sql;
    model_store->select();
}


void admininterface::on_btninsert_store_clicked()
{
    int rowNum = model_device->rowCount();//获得表的行数
    model_store->insertRow(rowNum); //添加一行
    //model->submitAll(); //可以直接提交
}


void admininterface::on_btndelete_store_clicked()
{
    int curRow=ui->tableViewStore->currentIndex().row();
    if(curRow!=-1){
        model_store->removeRow(curRow);
        int ok = QMessageBox::warning(this,tr("删除当前行!"),
        tr("你确定删除当前行吗？ "),QMessageBox::Yes, QMessageBox::No);
        if(ok == QMessageBox::No)
        { // 如果不删除， 则撤销
        model_store->revertAll();
        } else { // 否则提交， 在数据库中删除该行
        model_store->submitAll();
        }
    }
}


void admininterface::on_btnreport_store_clicked()
{
    model_store->database().transaction();
    if (model_store->submitAll()) {
    model_store->database().commit(); //提交
    } else {
    model_store->database().rollback(); //回滚
    QMessageBox::warning(this, tr("tableModel"),
    tr("数据库错误: %1").arg(model_store->lastError().text()));
    }
}


void admininterface::on_btnrevert_store_clicked()
{
    model_store->revertAll();
}


void admininterface::on_btnsearch_use_clicked()
{
    QString sql="";
    //read textEdit to select
    if(ui->textEditusid->toPlainText()!=""){
        sql=add_sql(sql,QString("Did='%1'").arg(ui->textEditusid->toPlainText()));
    }
    if(ui->textEdituserid->toPlainText()!=""){
        sql=add_sql(sql,QString("Stuid='%1'").arg(ui->textEdituserid->toPlainText()));
    }
    if(ui->textEditusername->toPlainText()!=""){
        sql=add_sql(sql,QString("Stuname='%1'").arg(ui->textEditusername->toPlainText()));
    }
    if(ui->textEdituserphone->toPlainText()!=""){
        sql=add_sql(sql,QString("Stuphone='%1'").arg(ui->textEdituserphone->toPlainText()));
    }
    if(ui->dateEditduse->date().toString("yyyy-MM-dd")!="1800-01-01"){
        sql=add_sql(sql,QString("CreatDate='%1'").arg(ui->dateEditduse->date().toString("yyyy-MM-dd")));
    }
    model_use->setFilter(sql);
    qDebug()<<sql;
    model_use->select();
}


void admininterface::on_btninsert_use_clicked()
{
    int rowNum = model_use->rowCount();//获得表的行数
    model_use->insertRow(rowNum); //添加一行
}


void admininterface::on_btndelete_use_clicked()
{
    int curRow=ui->tableViewUse->currentIndex().row();
    if(curRow!=-1){
        model_use->removeRow(curRow);
        int ok = QMessageBox::warning(this,tr("删除当前行!"),
        tr("你确定删除当前行吗？ "),QMessageBox::Yes, QMessageBox::No);
        if(ok == QMessageBox::No)
        { // 如果不删除， 则撤销
        model_use->revertAll();
        } else { // 否则提交， 在数据库中删除该行
        model_use->submitAll();
        }
    }
}


void admininterface::on_btnreport_use_clicked()
{
    model_use->database().transaction();
    if (model_use->submitAll()) {
    model_use->database().commit(); //提交
    } else {
    model_use->database().rollback(); //回滚
    QMessageBox::warning(this, tr("tableModel"),
    tr("数据库错误: %1").arg(model_use->lastError().text()));
    }
}


void admininterface::on_btnrevert_use_clicked()
{
    model_store->revertAll();
}


void admininterface::on_btnsearch_buy_clicked()
{
    QString sql="";
    //read textEdit to select
    if(ui->textEditbuyid->toPlainText()!=""){
        sql=add_sql(sql,QString("Bid='%1'").arg(ui->textEditbuyid->toPlainText()));
    }
    if(ui->textEditbuytid->toPlainText()!=""){
        sql=add_sql(sql,QString("Tid='%1'").arg(ui->textEditbuytid->toPlainText()));
    }
    if(ui->dateEditbuydb->date().toString("yyyy-MM-dd")!="1800-01-01"){
        sql=add_sql(sql,QString("Bdate='%1'").arg(ui->dateEditbuydb->date().toString("yyyy-MM-dd")));
    }
    model_buy->setFilter(sql);
    qDebug()<<sql;
    model_buy->select();
}


void admininterface::on_btninsert_buy_clicked()
{
    int rowNum = model_buy->rowCount();//获得表的行数
    model_buy->insertRow(rowNum); //添加一行
}


void admininterface::on_btndelete_buy_clicked()
{
    int curRow=ui->tableViewBuy->currentIndex().row();
    if(curRow!=-1){
        model_buy->removeRow(curRow);
        int ok = QMessageBox::warning(this,tr("删除当前行!"),
        tr("你确定删除当前行吗？ "),QMessageBox::Yes, QMessageBox::No);
        if(ok == QMessageBox::No)
        { // 如果不删除， 则撤销
        model_buy->revertAll();
        } else { // 否则提交， 在数据库中删除该行
        model_buy->submitAll();
        }
    }
}


void admininterface::on_btnreport_buy_clicked()
{
    model_buy->database().transaction();
    if (model_buy->submitAll()) {
    model_buy->database().commit(); //提交
    } else {
    model_buy->database().rollback(); //回滚
    QMessageBox::warning(this, tr("tableModel"),
    tr("数据库错误: %1").arg(model_buy->lastError().text()));
    }
}


void admininterface::on_btnrevert_buy_clicked()
{
    model_buy->revertAll();
}


void admininterface::on_btnsearch_report_clicked()
{
    QString sql="";
    //read textEdit to select
    if(ui->textEditreportid->toPlainText()!=""){
        sql=add_sql(sql,QString("Reportid='%1'").arg(ui->textEditreportid->toPlainText()));
    }
    if(ui->textEditreportsid->toPlainText()!=""){
        sql=add_sql(sql,QString("Did='%1'").arg(ui->textEditreportsid->toPlainText()));
    }
    if(ui->dateEditreportdb->date().toString("yyyy-MM-dd")!="1800-01-01"){
        sql=add_sql(sql,QString("Reportdate='%1'").arg(ui->dateEditreportdb->date().toString("yyyy-MM-dd")));
    }
    model_report->setFilter(sql);
    qDebug()<<sql;
    model_report->select();
}


void admininterface::on_btninsert_report_clicked()
{
    int rowNum = model_report->rowCount();//获得表的行数
    model_report->insertRow(rowNum); //添加一行
}


void admininterface::on_btndelete_report_clicked()
{
    int curRow=ui->tableViewReport->currentIndex().row();
    if(curRow!=-1){
        model_report->removeRow(curRow);
        int ok = QMessageBox::warning(this,tr("删除当前行!"),
        tr("你确定删除当前行吗？ "),QMessageBox::Yes, QMessageBox::No);
        if(ok == QMessageBox::No)
        { // 如果不删除， 则撤销
        model_report->revertAll();
        } else { // 否则提交， 在数据库中删除该行
        model_report->submitAll();
        }
    }
}


void admininterface::on_btnreport_report_clicked()
{
    model_report->database().transaction();
    if (model_report->submitAll()) {
    model_report->database().commit(); //提交
    } else {
    model_report->database().rollback(); //回滚
    QMessageBox::warning(this, tr("tableModel"),
    tr("数据库错误: %1").arg(model_report->lastError().text()));
    }
}


void admininterface::on_btnrevert_report_clicked()
{
    model_report->revertAll();
}


void admininterface::on_btnsearch_repair_clicked()
{
    QString sql="";
    //read textEdit to select
    if(ui->textEditrepairid->toPlainText()!=""){
        sql=add_sql(sql,QString("Repairid='%1'").arg(ui->textEditrepairid->toPlainText()));
    }
    if(ui->textEditrepairsid->toPlainText()!=""){
        sql=add_sql(sql,QString("Did='%1'").arg(ui->textEditrepairsid->toPlainText()));
    }
    if(ui->dateEditrepairday->date().toString("yyyy-MM-dd")!="1800-01-01"){
        sql=add_sql(sql,QString("Repairdate='%1'").arg(ui->dateEditrepairday->date().toString("yyyy-MM-dd")));
    }
    model_repair->setFilter(sql);
    qDebug()<<sql;
    model_repair->select();
}


void admininterface::on_btninsert_repair_clicked()
{
    int rowNum = model_repair->rowCount();//获得表的行数
    model_repair->insertRow(rowNum); //添加一行
}


void admininterface::on_btndelete_repair_clicked()
{
    int curRow=ui->tableViewRepair->currentIndex().row();
    if(curRow!=-1){
        model_repair->removeRow(curRow);
        int ok = QMessageBox::warning(this,tr("删除当前行!"),
        tr("你确定删除当前行吗？ "),QMessageBox::Yes, QMessageBox::No);
        if(ok == QMessageBox::No)
        { // 如果不删除， 则撤销
        model_repair->revertAll();
        } else { // 否则提交， 在数据库中删除该行
        model_repair->submitAll();
        }
    }
}


void admininterface::on_btnreport_repair_clicked()
{
    model_repair->database().transaction();
    if (model_repair->submitAll()) {
    model_repair->database().commit(); //提交
    } else {
    model_repair->database().rollback(); //回滚
    QMessageBox::warning(this, tr("tableModel"),
    tr("数据库错误: %1").arg(model_repair->lastError().text()));
    }
}


void admininterface::on_btnrevert_repair_clicked()
{
    model_repair->revertAll();
}


void admininterface::on_btnsearch_User_clicked()
{
    QString sql="";
    //read textEdit to select
    if(ui->radioButtonUserAdmin->isChecked()){
        sql=add_sql(sql,"Usertype='admin' ");
    }
    if(ui->radioButtonUserUse->isChecked()){
        sql=add_sql(sql,QString("Usertype='user' "));
    }
    if(ui->radioButtonUserBuy->isChecked()){
        sql=add_sql(sql,QString("Usertype='buy' "));

    }
    if(ui->radioButtonUserRepair->isChecked()){
        sql=add_sql(sql,QString("Usertype='repair' "));

    }
    if(ui->radioButtonUserAll->isChecked()){
        sql=add_sql(sql,QString(""));

    }
    if(ui->textEditusername_user->toPlainText()!=""){
        sql=add_sql(sql,QString("Username='%1'").arg(ui->textEditusername_user->toPlainText()));
    }
    if(ui->textEdituserid_user->toPlainText()!=""){
        sql=add_sql(sql,QString("Userid=%1").arg(ui->textEdituserid_user->toPlainText().toInt()));
    }
    model_user->setFilter(sql);
    model_user->select();
}


void admininterface::on_btninsert_User_clicked()
{
    adduser* w_adduser=new adduser();
    w_adduser->setWindowFlags(w_adduser->windowFlags() |Qt::Dialog);
    w_adduser->setWindowModality(Qt::ApplicationModal);
    w_adduser->show();
}


void admininterface::on_btndelete_User_clicked()
{
    extern QString curname;
    int curRow=ui->tableViewUser->currentIndex().row();
    if(curRow!=-1){
        QString uid2delete=model_user->data(model_user->index(curRow,0)).toString();
        qDebug()<<"try to delete user DBuid="+uid2delete;
        QString sql=QString("userid=%1").arg(uid2delete.toInt());
        model_DBUser->setFilter(sql);
        if(curname==model_DBUser->data(model_DBUser->index(0,1)).toString()){
            QMessageBox::warning(this,"删除失败","不能删除本账户");
            return;
        }
        model_DBUser->select();
        model_DBUser->removeRow(0);
        int ok = QMessageBox::warning(this,tr("删除当前行!"),
        tr("你确定删除当前行吗？ "),QMessageBox::Yes, QMessageBox::No);
        if(ok == QMessageBox::No)
        { // 如果不删除， 则撤销
            model_DBUser->revertAll();
        } else { // 否则提交， 在数据库中删除该行
            model_DBUser->submitAll();
            qDebug()<<"delete success";
        }
    }
    model_DBUser->revertAll();
    admininterface::on_btnsearch_User_clicked();
}

