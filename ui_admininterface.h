/********************************************************************************
** Form generated from reading UI file 'admininterface.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMININTERFACE_H
#define UI_ADMININTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_admininterface
{
public:
    QTabWidget *tabWidget;
    QWidget *tabs;
    QPushButton *btnsearch_s;
    QPushButton *btninsert_s;
    QTextEdit *textEditsid;
    QLabel *labelsid;
    QTextEdit *textEdittid;
    QLabel *labeltid;
    QLabel *labelsdp;
    QLabel *labelsdb;
    QDateEdit *dateEditCreat;
    QDateEdit *dateEditBuy;
    QTableView *tableViewDevice;
    QPushButton *btnreport_s;
    QPushButton *btnrevert_s;
    QTextEdit *textEditsplace;
    QLabel *labelsplace;
    QWidget *tabuser;
    QPushButton *btninsert_User;
    QPushButton *btnsearch_User;
    QPushButton *btndelete_User;
    QGroupBox *groupBoxusertype;
    QRadioButton *GroupUserUse;
    QRadioButton *GroupUserRepair;
    QRadioButton *GroupUserBuy;
    QRadioButton *GroupUserAll;
    QRadioButton *GroupUserAdmin;
    QGroupBox *groupBoxusertype_2;
    QRadioButton *radioButtonUserUse;
    QRadioButton *radioButtonUserRepair;
    QRadioButton *radioButtonUserBuy;
    QRadioButton *radioButtonUserAll;
    QRadioButton *radioButtonUserAdmin;
    QTableView *tableViewUser;
    QTextEdit *textEditusername_user;
    QLabel *labeluserid_user;
    QLabel *labelusername_user;
    QTextEdit *textEdituserid_user;
    QWidget *tabstoreinfo;
    QPushButton *btninsert_store;
    QPushButton *btndelete_store;
    QPushButton *btnsearch_store;
    QTextEdit *textEditstoreplace;
    QLabel *labelstoreplace;
    QTextEdit *textEditstorestid;
    QLabel *labelstorestid;
    QTableView *tableViewStore;
    QPushButton *btnreport_store;
    QPushButton *btnrevert_store;
    QWidget *tabuserinfo;
    QPushButton *btninsert_use;
    QPushButton *btnsearch_use;
    QPushButton *btndelete_use;
    QTextEdit *textEditusername;
    QLabel *labeluserid;
    QLabel *labelduse;
    QLabel *labelusername;
    QLabel *labelusid;
    QDateEdit *dateEditduse;
    QTextEdit *textEditusid;
    QTextEdit *textEdituserid;
    QLabel *labeluserphone;
    QTextEdit *textEdituserphone;
    QTableView *tableViewUse;
    QPushButton *btnreport_use;
    QPushButton *btnrevert_use;
    QWidget *tabbuyinfo;
    QPushButton *btninsert_buy;
    QPushButton *btnsearch_buy;
    QPushButton *btndelete_buy;
    QLabel *labelbuytid;
    QTextEdit *textEditbuytid;
    QLabel *labelsbuydb;
    QDateEdit *dateEditbuydb;
    QLabel *labelbuyid;
    QTextEdit *textEditbuyid;
    QPushButton *btnreport_buy;
    QPushButton *btnrevert_buy;
    QTableView *tableViewBuy;
    QLabel *labelbuynum;
    QTextEdit *textEditbuynum;
    QLabel *labelbuySplace;
    QTextEdit *textEditbuySplace;
    QWidget *tabreportinfo;
    QPushButton *btndelete_report;
    QLabel *labelreportsid;
    QPushButton *btninsert_report;
    QLabel *labelreportid;
    QLabel *labelsreportdb;
    QTextEdit *textEditreportsid;
    QTextEdit *textEditreportid;
    QDateEdit *dateEditreportdb;
    QPushButton *btnsearch_report;
    QPushButton *btnrevert_report;
    QPushButton *btnreport_report;
    QTableView *tableViewReport;
    QWidget *tabrepairinfo;
    QLabel *labelrepairday;
    QTextEdit *textEditrepairsid;
    QDateEdit *dateEditrepairday;
    QLabel *labelrepairsid;
    QTextEdit *textEditrepairid;
    QLabel *labelrepairid;
    QPushButton *btnsearch_repair;
    QPushButton *btninsert_repair;
    QPushButton *btndelete_repair;
    QPushButton *btnreport_repair;
    QPushButton *btnrevert_repair;
    QTableView *tableViewRepair;
    QLabel *labelrepairid_2;
    QLabel *labelrepairsid_2;
    QLabel *labelrepairday_2;
    QLabel *label;
    QLabel *textUsername;
    QFrame *line;

    void setupUi(QWidget *admininterface)
    {
        if (admininterface->objectName().isEmpty())
            admininterface->setObjectName(QString::fromUtf8("admininterface"));
        admininterface->resize(836, 574);
        tabWidget = new QTabWidget(admininterface);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(60, 80, 691, 431));
        tabWidget->setMinimumSize(QSize(691, 0));
        tabs = new QWidget();
        tabs->setObjectName(QString::fromUtf8("tabs"));
        btnsearch_s = new QPushButton(tabs);
        btnsearch_s->setObjectName(QString::fromUtf8("btnsearch_s"));
        btnsearch_s->setGeometry(QRect(40, 330, 75, 23));
        btninsert_s = new QPushButton(tabs);
        btninsert_s->setObjectName(QString::fromUtf8("btninsert_s"));
        btninsert_s->setGeometry(QRect(160, 330, 75, 23));
        textEditsid = new QTextEdit(tabs);
        textEditsid->setObjectName(QString::fromUtf8("textEditsid"));
        textEditsid->setGeometry(QRect(520, 40, 131, 31));
        labelsid = new QLabel(tabs);
        labelsid->setObjectName(QString::fromUtf8("labelsid"));
        labelsid->setGeometry(QRect(460, 50, 54, 12));
        textEdittid = new QTextEdit(tabs);
        textEdittid->setObjectName(QString::fromUtf8("textEdittid"));
        textEdittid->setGeometry(QRect(520, 90, 131, 31));
        labeltid = new QLabel(tabs);
        labeltid->setObjectName(QString::fromUtf8("labeltid"));
        labeltid->setGeometry(QRect(460, 100, 54, 12));
        labelsdp = new QLabel(tabs);
        labelsdp->setObjectName(QString::fromUtf8("labelsdp"));
        labelsdp->setGeometry(QRect(460, 200, 54, 12));
        labelsdb = new QLabel(tabs);
        labelsdb->setObjectName(QString::fromUtf8("labelsdb"));
        labelsdb->setGeometry(QRect(460, 250, 54, 12));
        dateEditCreat = new QDateEdit(tabs);
        dateEditCreat->setObjectName(QString::fromUtf8("dateEditCreat"));
        dateEditCreat->setGeometry(QRect(520, 200, 110, 22));
        dateEditCreat->setDateTime(QDateTime(QDate(1800, 1, 1), QTime(0, 0, 0)));
        dateEditCreat->setCurrentSection(QDateTimeEdit::YearSection);
        dateEditBuy = new QDateEdit(tabs);
        dateEditBuy->setObjectName(QString::fromUtf8("dateEditBuy"));
        dateEditBuy->setGeometry(QRect(520, 250, 110, 22));
        dateEditBuy->setDateTime(QDateTime(QDate(1800, 1, 1), QTime(0, 0, 0)));
        tableViewDevice = new QTableView(tabs);
        tableViewDevice->setObjectName(QString::fromUtf8("tableViewDevice"));
        tableViewDevice->setGeometry(QRect(0, 20, 451, 291));
        tableViewDevice->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        btnreport_s = new QPushButton(tabs);
        btnreport_s->setObjectName(QString::fromUtf8("btnreport_s"));
        btnreport_s->setGeometry(QRect(400, 330, 75, 23));
        btnrevert_s = new QPushButton(tabs);
        btnrevert_s->setObjectName(QString::fromUtf8("btnrevert_s"));
        btnrevert_s->setGeometry(QRect(520, 330, 75, 23));
        textEditsplace = new QTextEdit(tabs);
        textEditsplace->setObjectName(QString::fromUtf8("textEditsplace"));
        textEditsplace->setGeometry(QRect(520, 140, 131, 31));
        labelsplace = new QLabel(tabs);
        labelsplace->setObjectName(QString::fromUtf8("labelsplace"));
        labelsplace->setGeometry(QRect(460, 150, 54, 12));
        tabWidget->addTab(tabs, QString());
        tabuser = new QWidget();
        tabuser->setObjectName(QString::fromUtf8("tabuser"));
        btninsert_User = new QPushButton(tabuser);
        btninsert_User->setObjectName(QString::fromUtf8("btninsert_User"));
        btninsert_User->setGeometry(QRect(160, 340, 75, 23));
        btnsearch_User = new QPushButton(tabuser);
        btnsearch_User->setObjectName(QString::fromUtf8("btnsearch_User"));
        btnsearch_User->setGeometry(QRect(60, 340, 75, 23));
        btndelete_User = new QPushButton(tabuser);
        btndelete_User->setObjectName(QString::fromUtf8("btndelete_User"));
        btndelete_User->setGeometry(QRect(260, 340, 75, 23));
        groupBoxusertype = new QGroupBox(tabuser);
        groupBoxusertype->setObjectName(QString::fromUtf8("groupBoxusertype"));
        groupBoxusertype->setGeometry(QRect(520, 10, 121, 211));
        GroupUserUse = new QRadioButton(groupBoxusertype);
        GroupUserUse->setObjectName(QString::fromUtf8("GroupUserUse"));
        GroupUserUse->setGeometry(QRect(20, 20, 91, 31));
        GroupUserRepair = new QRadioButton(groupBoxusertype);
        GroupUserRepair->setObjectName(QString::fromUtf8("GroupUserRepair"));
        GroupUserRepair->setGeometry(QRect(20, 100, 91, 31));
        GroupUserBuy = new QRadioButton(groupBoxusertype);
        GroupUserBuy->setObjectName(QString::fromUtf8("GroupUserBuy"));
        GroupUserBuy->setGeometry(QRect(20, 60, 91, 31));
        GroupUserAll = new QRadioButton(groupBoxusertype);
        GroupUserAll->setObjectName(QString::fromUtf8("GroupUserAll"));
        GroupUserAll->setGeometry(QRect(20, 170, 91, 31));
        GroupUserAdmin = new QRadioButton(groupBoxusertype);
        GroupUserAdmin->setObjectName(QString::fromUtf8("GroupUserAdmin"));
        GroupUserAdmin->setGeometry(QRect(20, 140, 91, 31));
        groupBoxusertype_2 = new QGroupBox(groupBoxusertype);
        groupBoxusertype_2->setObjectName(QString::fromUtf8("groupBoxusertype_2"));
        groupBoxusertype_2->setGeometry(QRect(0, 0, 121, 211));
        radioButtonUserUse = new QRadioButton(groupBoxusertype_2);
        radioButtonUserUse->setObjectName(QString::fromUtf8("radioButtonUserUse"));
        radioButtonUserUse->setGeometry(QRect(20, 20, 91, 31));
        radioButtonUserRepair = new QRadioButton(groupBoxusertype_2);
        radioButtonUserRepair->setObjectName(QString::fromUtf8("radioButtonUserRepair"));
        radioButtonUserRepair->setGeometry(QRect(20, 100, 91, 31));
        radioButtonUserBuy = new QRadioButton(groupBoxusertype_2);
        radioButtonUserBuy->setObjectName(QString::fromUtf8("radioButtonUserBuy"));
        radioButtonUserBuy->setGeometry(QRect(20, 60, 91, 31));
        radioButtonUserAll = new QRadioButton(groupBoxusertype_2);
        radioButtonUserAll->setObjectName(QString::fromUtf8("radioButtonUserAll"));
        radioButtonUserAll->setGeometry(QRect(20, 170, 91, 31));
        radioButtonUserAll->setChecked(true);
        radioButtonUserAdmin = new QRadioButton(groupBoxusertype_2);
        radioButtonUserAdmin->setObjectName(QString::fromUtf8("radioButtonUserAdmin"));
        radioButtonUserAdmin->setGeometry(QRect(20, 140, 91, 31));
        tableViewUser = new QTableView(tabuser);
        tableViewUser->setObjectName(QString::fromUtf8("tableViewUser"));
        tableViewUser->setGeometry(QRect(30, 20, 451, 291));
        tableViewUser->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        textEditusername_user = new QTextEdit(tabuser);
        textEditusername_user->setObjectName(QString::fromUtf8("textEditusername_user"));
        textEditusername_user->setGeometry(QRect(550, 230, 131, 31));
        labeluserid_user = new QLabel(tabuser);
        labeluserid_user->setObjectName(QString::fromUtf8("labeluserid_user"));
        labeluserid_user->setGeometry(QRect(490, 290, 54, 12));
        labelusername_user = new QLabel(tabuser);
        labelusername_user->setObjectName(QString::fromUtf8("labelusername_user"));
        labelusername_user->setGeometry(QRect(490, 240, 54, 12));
        textEdituserid_user = new QTextEdit(tabuser);
        textEdituserid_user->setObjectName(QString::fromUtf8("textEdituserid_user"));
        textEdituserid_user->setGeometry(QRect(550, 280, 131, 31));
        tabWidget->addTab(tabuser, QString());
        tabstoreinfo = new QWidget();
        tabstoreinfo->setObjectName(QString::fromUtf8("tabstoreinfo"));
        btninsert_store = new QPushButton(tabstoreinfo);
        btninsert_store->setObjectName(QString::fromUtf8("btninsert_store"));
        btninsert_store->setGeometry(QRect(180, 330, 75, 23));
        btndelete_store = new QPushButton(tabstoreinfo);
        btndelete_store->setObjectName(QString::fromUtf8("btndelete_store"));
        btndelete_store->setGeometry(QRect(300, 330, 75, 23));
        btnsearch_store = new QPushButton(tabstoreinfo);
        btnsearch_store->setObjectName(QString::fromUtf8("btnsearch_store"));
        btnsearch_store->setGeometry(QRect(60, 330, 75, 23));
        textEditstoreplace = new QTextEdit(tabstoreinfo);
        textEditstoreplace->setObjectName(QString::fromUtf8("textEditstoreplace"));
        textEditstoreplace->setGeometry(QRect(530, 50, 131, 31));
        labelstoreplace = new QLabel(tabstoreinfo);
        labelstoreplace->setObjectName(QString::fromUtf8("labelstoreplace"));
        labelstoreplace->setGeometry(QRect(470, 60, 54, 12));
        textEditstorestid = new QTextEdit(tabstoreinfo);
        textEditstorestid->setObjectName(QString::fromUtf8("textEditstorestid"));
        textEditstorestid->setGeometry(QRect(530, 110, 131, 31));
        labelstorestid = new QLabel(tabstoreinfo);
        labelstorestid->setObjectName(QString::fromUtf8("labelstorestid"));
        labelstorestid->setGeometry(QRect(470, 120, 54, 12));
        tableViewStore = new QTableView(tabstoreinfo);
        tableViewStore->setObjectName(QString::fromUtf8("tableViewStore"));
        tableViewStore->setGeometry(QRect(0, 10, 451, 291));
        tableViewStore->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        btnreport_store = new QPushButton(tabstoreinfo);
        btnreport_store->setObjectName(QString::fromUtf8("btnreport_store"));
        btnreport_store->setGeometry(QRect(420, 330, 75, 23));
        btnrevert_store = new QPushButton(tabstoreinfo);
        btnrevert_store->setObjectName(QString::fromUtf8("btnrevert_store"));
        btnrevert_store->setGeometry(QRect(540, 330, 75, 23));
        tabWidget->addTab(tabstoreinfo, QString());
        tabuserinfo = new QWidget();
        tabuserinfo->setObjectName(QString::fromUtf8("tabuserinfo"));
        btninsert_use = new QPushButton(tabuserinfo);
        btninsert_use->setObjectName(QString::fromUtf8("btninsert_use"));
        btninsert_use->setGeometry(QRect(150, 330, 75, 23));
        btnsearch_use = new QPushButton(tabuserinfo);
        btnsearch_use->setObjectName(QString::fromUtf8("btnsearch_use"));
        btnsearch_use->setGeometry(QRect(40, 330, 75, 23));
        btndelete_use = new QPushButton(tabuserinfo);
        btndelete_use->setObjectName(QString::fromUtf8("btndelete_use"));
        btndelete_use->setGeometry(QRect(260, 330, 75, 23));
        textEditusername = new QTextEdit(tabuserinfo);
        textEditusername->setObjectName(QString::fromUtf8("textEditusername"));
        textEditusername->setGeometry(QRect(540, 170, 131, 31));
        labeluserid = new QLabel(tabuserinfo);
        labeluserid->setObjectName(QString::fromUtf8("labeluserid"));
        labeluserid->setGeometry(QRect(480, 130, 54, 12));
        labelduse = new QLabel(tabuserinfo);
        labelduse->setObjectName(QString::fromUtf8("labelduse"));
        labelduse->setGeometry(QRect(480, 280, 54, 12));
        labelusername = new QLabel(tabuserinfo);
        labelusername->setObjectName(QString::fromUtf8("labelusername"));
        labelusername->setGeometry(QRect(480, 180, 54, 12));
        labelusid = new QLabel(tabuserinfo);
        labelusid->setObjectName(QString::fromUtf8("labelusid"));
        labelusid->setGeometry(QRect(480, 80, 54, 12));
        dateEditduse = new QDateEdit(tabuserinfo);
        dateEditduse->setObjectName(QString::fromUtf8("dateEditduse"));
        dateEditduse->setGeometry(QRect(540, 280, 110, 22));
        dateEditduse->setDateTime(QDateTime(QDate(1800, 1, 1), QTime(0, 0, 0)));
        textEditusid = new QTextEdit(tabuserinfo);
        textEditusid->setObjectName(QString::fromUtf8("textEditusid"));
        textEditusid->setGeometry(QRect(540, 70, 131, 31));
        textEdituserid = new QTextEdit(tabuserinfo);
        textEdituserid->setObjectName(QString::fromUtf8("textEdituserid"));
        textEdituserid->setGeometry(QRect(540, 120, 131, 31));
        labeluserphone = new QLabel(tabuserinfo);
        labeluserphone->setObjectName(QString::fromUtf8("labeluserphone"));
        labeluserphone->setGeometry(QRect(480, 230, 54, 12));
        textEdituserphone = new QTextEdit(tabuserinfo);
        textEdituserphone->setObjectName(QString::fromUtf8("textEdituserphone"));
        textEdituserphone->setGeometry(QRect(540, 220, 131, 31));
        tableViewUse = new QTableView(tabuserinfo);
        tableViewUse->setObjectName(QString::fromUtf8("tableViewUse"));
        tableViewUse->setGeometry(QRect(0, 10, 451, 291));
        tableViewUse->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        btnreport_use = new QPushButton(tabuserinfo);
        btnreport_use->setObjectName(QString::fromUtf8("btnreport_use"));
        btnreport_use->setGeometry(QRect(370, 330, 75, 23));
        btnrevert_use = new QPushButton(tabuserinfo);
        btnrevert_use->setObjectName(QString::fromUtf8("btnrevert_use"));
        btnrevert_use->setGeometry(QRect(490, 330, 75, 23));
        tabWidget->addTab(tabuserinfo, QString());
        tabbuyinfo = new QWidget();
        tabbuyinfo->setObjectName(QString::fromUtf8("tabbuyinfo"));
        btninsert_buy = new QPushButton(tabbuyinfo);
        btninsert_buy->setObjectName(QString::fromUtf8("btninsert_buy"));
        btninsert_buy->setGeometry(QRect(170, 330, 75, 23));
        btnsearch_buy = new QPushButton(tabbuyinfo);
        btnsearch_buy->setObjectName(QString::fromUtf8("btnsearch_buy"));
        btnsearch_buy->setGeometry(QRect(50, 330, 75, 23));
        btndelete_buy = new QPushButton(tabbuyinfo);
        btndelete_buy->setObjectName(QString::fromUtf8("btndelete_buy"));
        btndelete_buy->setGeometry(QRect(290, 330, 75, 23));
        labelbuytid = new QLabel(tabbuyinfo);
        labelbuytid->setObjectName(QString::fromUtf8("labelbuytid"));
        labelbuytid->setGeometry(QRect(480, 120, 54, 12));
        textEditbuytid = new QTextEdit(tabbuyinfo);
        textEditbuytid->setObjectName(QString::fromUtf8("textEditbuytid"));
        textEditbuytid->setGeometry(QRect(540, 110, 131, 31));
        labelsbuydb = new QLabel(tabbuyinfo);
        labelsbuydb->setObjectName(QString::fromUtf8("labelsbuydb"));
        labelsbuydb->setGeometry(QRect(480, 270, 54, 12));
        dateEditbuydb = new QDateEdit(tabbuyinfo);
        dateEditbuydb->setObjectName(QString::fromUtf8("dateEditbuydb"));
        dateEditbuydb->setGeometry(QRect(540, 260, 110, 22));
        dateEditbuydb->setDateTime(QDateTime(QDate(1800, 1, 1), QTime(0, 0, 0)));
        labelbuyid = new QLabel(tabbuyinfo);
        labelbuyid->setObjectName(QString::fromUtf8("labelbuyid"));
        labelbuyid->setGeometry(QRect(480, 70, 54, 12));
        textEditbuyid = new QTextEdit(tabbuyinfo);
        textEditbuyid->setObjectName(QString::fromUtf8("textEditbuyid"));
        textEditbuyid->setGeometry(QRect(540, 60, 131, 31));
        btnreport_buy = new QPushButton(tabbuyinfo);
        btnreport_buy->setObjectName(QString::fromUtf8("btnreport_buy"));
        btnreport_buy->setGeometry(QRect(400, 330, 75, 23));
        btnrevert_buy = new QPushButton(tabbuyinfo);
        btnrevert_buy->setObjectName(QString::fromUtf8("btnrevert_buy"));
        btnrevert_buy->setGeometry(QRect(520, 330, 75, 23));
        tableViewBuy = new QTableView(tabbuyinfo);
        tableViewBuy->setObjectName(QString::fromUtf8("tableViewBuy"));
        tableViewBuy->setGeometry(QRect(0, 20, 451, 291));
        tableViewBuy->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        labelbuynum = new QLabel(tabbuyinfo);
        labelbuynum->setObjectName(QString::fromUtf8("labelbuynum"));
        labelbuynum->setGeometry(QRect(480, 170, 54, 12));
        textEditbuynum = new QTextEdit(tabbuyinfo);
        textEditbuynum->setObjectName(QString::fromUtf8("textEditbuynum"));
        textEditbuynum->setGeometry(QRect(540, 160, 131, 31));
        labelbuySplace = new QLabel(tabbuyinfo);
        labelbuySplace->setObjectName(QString::fromUtf8("labelbuySplace"));
        labelbuySplace->setGeometry(QRect(480, 220, 54, 12));
        textEditbuySplace = new QTextEdit(tabbuyinfo);
        textEditbuySplace->setObjectName(QString::fromUtf8("textEditbuySplace"));
        textEditbuySplace->setGeometry(QRect(540, 210, 131, 31));
        tabWidget->addTab(tabbuyinfo, QString());
        tabreportinfo = new QWidget();
        tabreportinfo->setObjectName(QString::fromUtf8("tabreportinfo"));
        btndelete_report = new QPushButton(tabreportinfo);
        btndelete_report->setObjectName(QString::fromUtf8("btndelete_report"));
        btndelete_report->setGeometry(QRect(280, 350, 75, 23));
        labelreportsid = new QLabel(tabreportinfo);
        labelreportsid->setObjectName(QString::fromUtf8("labelreportsid"));
        labelreportsid->setGeometry(QRect(470, 110, 54, 12));
        btninsert_report = new QPushButton(tabreportinfo);
        btninsert_report->setObjectName(QString::fromUtf8("btninsert_report"));
        btninsert_report->setGeometry(QRect(180, 350, 75, 23));
        labelreportid = new QLabel(tabreportinfo);
        labelreportid->setObjectName(QString::fromUtf8("labelreportid"));
        labelreportid->setGeometry(QRect(470, 60, 54, 16));
        labelsreportdb = new QLabel(tabreportinfo);
        labelsreportdb->setObjectName(QString::fromUtf8("labelsreportdb"));
        labelsreportdb->setGeometry(QRect(470, 160, 54, 12));
        textEditreportsid = new QTextEdit(tabreportinfo);
        textEditreportsid->setObjectName(QString::fromUtf8("textEditreportsid"));
        textEditreportsid->setGeometry(QRect(530, 100, 131, 31));
        textEditreportid = new QTextEdit(tabreportinfo);
        textEditreportid->setObjectName(QString::fromUtf8("textEditreportid"));
        textEditreportid->setGeometry(QRect(530, 50, 131, 31));
        dateEditreportdb = new QDateEdit(tabreportinfo);
        dateEditreportdb->setObjectName(QString::fromUtf8("dateEditreportdb"));
        dateEditreportdb->setGeometry(QRect(530, 160, 110, 22));
        dateEditreportdb->setDateTime(QDateTime(QDate(1800, 1, 1), QTime(0, 0, 0)));
        btnsearch_report = new QPushButton(tabreportinfo);
        btnsearch_report->setObjectName(QString::fromUtf8("btnsearch_report"));
        btnsearch_report->setGeometry(QRect(70, 350, 75, 23));
        btnrevert_report = new QPushButton(tabreportinfo);
        btnrevert_report->setObjectName(QString::fromUtf8("btnrevert_report"));
        btnrevert_report->setGeometry(QRect(500, 350, 75, 23));
        btnreport_report = new QPushButton(tabreportinfo);
        btnreport_report->setObjectName(QString::fromUtf8("btnreport_report"));
        btnreport_report->setGeometry(QRect(380, 350, 75, 23));
        tableViewReport = new QTableView(tabreportinfo);
        tableViewReport->setObjectName(QString::fromUtf8("tableViewReport"));
        tableViewReport->setGeometry(QRect(10, 20, 451, 291));
        tableViewReport->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tabWidget->addTab(tabreportinfo, QString());
        tabrepairinfo = new QWidget();
        tabrepairinfo->setObjectName(QString::fromUtf8("tabrepairinfo"));
        labelrepairday = new QLabel(tabrepairinfo);
        labelrepairday->setObjectName(QString::fromUtf8("labelrepairday"));
        labelrepairday->setGeometry(QRect(490, 130, 54, 12));
        textEditrepairsid = new QTextEdit(tabrepairinfo);
        textEditrepairsid->setObjectName(QString::fromUtf8("textEditrepairsid"));
        textEditrepairsid->setGeometry(QRect(550, 70, 131, 31));
        dateEditrepairday = new QDateEdit(tabrepairinfo);
        dateEditrepairday->setObjectName(QString::fromUtf8("dateEditrepairday"));
        dateEditrepairday->setGeometry(QRect(550, 130, 110, 22));
        dateEditrepairday->setDateTime(QDateTime(QDate(1800, 1, 1), QTime(0, 0, 0)));
        labelrepairsid = new QLabel(tabrepairinfo);
        labelrepairsid->setObjectName(QString::fromUtf8("labelrepairsid"));
        labelrepairsid->setGeometry(QRect(490, 80, 54, 12));
        textEditrepairid = new QTextEdit(tabrepairinfo);
        textEditrepairid->setObjectName(QString::fromUtf8("textEditrepairid"));
        textEditrepairid->setGeometry(QRect(550, 20, 131, 31));
        labelrepairid = new QLabel(tabrepairinfo);
        labelrepairid->setObjectName(QString::fromUtf8("labelrepairid"));
        labelrepairid->setGeometry(QRect(490, 30, 54, 16));
        btnsearch_repair = new QPushButton(tabrepairinfo);
        btnsearch_repair->setObjectName(QString::fromUtf8("btnsearch_repair"));
        btnsearch_repair->setGeometry(QRect(50, 340, 75, 23));
        btninsert_repair = new QPushButton(tabrepairinfo);
        btninsert_repair->setObjectName(QString::fromUtf8("btninsert_repair"));
        btninsert_repair->setGeometry(QRect(160, 340, 75, 23));
        btndelete_repair = new QPushButton(tabrepairinfo);
        btndelete_repair->setObjectName(QString::fromUtf8("btndelete_repair"));
        btndelete_repair->setGeometry(QRect(270, 340, 75, 23));
        btnreport_repair = new QPushButton(tabrepairinfo);
        btnreport_repair->setObjectName(QString::fromUtf8("btnreport_repair"));
        btnreport_repair->setGeometry(QRect(380, 340, 75, 23));
        btnrevert_repair = new QPushButton(tabrepairinfo);
        btnrevert_repair->setObjectName(QString::fromUtf8("btnrevert_repair"));
        btnrevert_repair->setGeometry(QRect(500, 340, 75, 23));
        tableViewRepair = new QTableView(tabrepairinfo);
        tableViewRepair->setObjectName(QString::fromUtf8("tableViewRepair"));
        tableViewRepair->setGeometry(QRect(20, 20, 451, 291));
        tableViewRepair->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        labelrepairid_2 = new QLabel(tabrepairinfo);
        labelrepairid_2->setObjectName(QString::fromUtf8("labelrepairid_2"));
        labelrepairid_2->setGeometry(QRect(550, 140, 54, 16));
        labelrepairsid_2 = new QLabel(tabrepairinfo);
        labelrepairsid_2->setObjectName(QString::fromUtf8("labelrepairsid_2"));
        labelrepairsid_2->setGeometry(QRect(550, 190, 54, 12));
        labelrepairday_2 = new QLabel(tabrepairinfo);
        labelrepairday_2->setObjectName(QString::fromUtf8("labelrepairday_2"));
        labelrepairday_2->setGeometry(QRect(550, 240, 54, 12));
        tabWidget->addTab(tabrepairinfo, QString());
        label = new QLabel(admininterface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(380, 40, 54, 12));
        textUsername = new QLabel(admininterface);
        textUsername->setObjectName(QString::fromUtf8("textUsername"));
        textUsername->setGeometry(QRect(110, 30, 201, 16));
        line = new QFrame(admininterface);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(70, 60, 681, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(admininterface);

        tabWidget->setCurrentIndex(6);


        QMetaObject::connectSlotsByName(admininterface);
    } // setupUi

    void retranslateUi(QWidget *admininterface)
    {
        admininterface->setWindowTitle(QCoreApplication::translate("admininterface", "Form", nullptr));
        btnsearch_s->setText(QCoreApplication::translate("admininterface", "\346\237\245\350\257\242", nullptr));
        btninsert_s->setText(QCoreApplication::translate("admininterface", " \345\242\236\345\212\240", nullptr));
        labelsid->setText(QCoreApplication::translate("admininterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labeltid->setText(QCoreApplication::translate("admininterface", "\350\256\276\345\244\207\345\236\213\345\217\267", nullptr));
        labelsdp->setText(QCoreApplication::translate("admininterface", "\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        labelsdb->setText(QCoreApplication::translate("admininterface", "\350\264\255\345\205\245\346\227\245\346\234\237", nullptr));
        btnreport_s->setText(QCoreApplication::translate("admininterface", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        btnrevert_s->setText(QCoreApplication::translate("admininterface", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
        labelsplace->setText(QCoreApplication::translate("admininterface", "\345\255\230\346\224\276\345\234\260\347\202\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabs), QCoreApplication::translate("admininterface", "\350\256\276\345\244\207", nullptr));
        btninsert_User->setText(QCoreApplication::translate("admininterface", "\345\242\236\345\212\240", nullptr));
        btnsearch_User->setText(QCoreApplication::translate("admininterface", "\346\237\245\350\257\242", nullptr));
        btndelete_User->setText(QCoreApplication::translate("admininterface", "\345\210\240\351\231\244", nullptr));
        groupBoxusertype->setTitle(QCoreApplication::translate("admininterface", "    \347\224\250\346\210\267\347\261\273\345\236\213", nullptr));
        GroupUserUse->setText(QCoreApplication::translate("admininterface", "\344\275\277\347\224\250\344\272\272\345\221\230", nullptr));
        GroupUserRepair->setText(QCoreApplication::translate("admininterface", "\347\273\264\344\277\256\344\272\272\345\221\230", nullptr));
        GroupUserBuy->setText(QCoreApplication::translate("admininterface", "\351\207\207\350\264\255\344\272\272\345\221\230", nullptr));
        GroupUserAll->setText(QCoreApplication::translate("admininterface", "\345\205\250\351\203\250", nullptr));
        GroupUserAdmin->setText(QCoreApplication::translate("admininterface", "\347\256\241\347\220\206\345\221\230", nullptr));
        groupBoxusertype_2->setTitle(QCoreApplication::translate("admininterface", "    \347\224\250\346\210\267\347\261\273\345\236\213", nullptr));
        radioButtonUserUse->setText(QCoreApplication::translate("admininterface", "\344\275\277\347\224\250\344\272\272\345\221\230", nullptr));
        radioButtonUserRepair->setText(QCoreApplication::translate("admininterface", "\347\273\264\344\277\256\344\272\272\345\221\230", nullptr));
        radioButtonUserBuy->setText(QCoreApplication::translate("admininterface", "\351\207\207\350\264\255\344\272\272\345\221\230", nullptr));
        radioButtonUserAll->setText(QCoreApplication::translate("admininterface", "\345\205\250\351\203\250", nullptr));
        radioButtonUserAdmin->setText(QCoreApplication::translate("admininterface", "\347\256\241\347\220\206\345\221\230", nullptr));
        labeluserid_user->setText(QCoreApplication::translate("admininterface", "\345\267\245\345\217\267", nullptr));
        labelusername_user->setText(QCoreApplication::translate("admininterface", "\345\247\223\345\220\215", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabuser), QCoreApplication::translate("admininterface", "\344\272\272\345\221\230", nullptr));
        btninsert_store->setText(QCoreApplication::translate("admininterface", " \345\242\236\345\212\240", nullptr));
        btndelete_store->setText(QCoreApplication::translate("admininterface", "\345\210\240\351\231\244", nullptr));
        btnsearch_store->setText(QCoreApplication::translate("admininterface", "\346\237\245\350\257\242", nullptr));
        labelstoreplace->setText(QCoreApplication::translate("admininterface", "\345\255\230\346\224\276\345\234\260\347\202\271", nullptr));
        labelstorestid->setText(QCoreApplication::translate("admininterface", "\350\256\276\345\244\207\345\236\213\345\217\267", nullptr));
        btnreport_store->setText(QCoreApplication::translate("admininterface", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        btnrevert_store->setText(QCoreApplication::translate("admininterface", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabstoreinfo), QCoreApplication::translate("admininterface", "\345\217\260\350\264\246", nullptr));
        btninsert_use->setText(QCoreApplication::translate("admininterface", "\345\242\236\345\212\240", nullptr));
        btnsearch_use->setText(QCoreApplication::translate("admininterface", "\346\237\245\350\257\242", nullptr));
        btndelete_use->setText(QCoreApplication::translate("admininterface", "\345\210\240\351\231\244", nullptr));
        labeluserid->setText(QCoreApplication::translate("admininterface", "\345\255\246\345\267\245\345\217\267", nullptr));
        labelduse->setText(QCoreApplication::translate("admininterface", "\345\200\237\347\224\250\346\227\245\346\234\237", nullptr));
        labelusername->setText(QCoreApplication::translate("admininterface", "\345\247\223\345\220\215", nullptr));
        labelusid->setText(QCoreApplication::translate("admininterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labeluserphone->setText(QCoreApplication::translate("admininterface", "\347\224\265\350\257\235", nullptr));
        btnreport_use->setText(QCoreApplication::translate("admininterface", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        btnrevert_use->setText(QCoreApplication::translate("admininterface", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabuserinfo), QCoreApplication::translate("admininterface", "\344\275\277\347\224\250", nullptr));
        btninsert_buy->setText(QCoreApplication::translate("admininterface", " \345\242\236\345\212\240", nullptr));
        btnsearch_buy->setText(QCoreApplication::translate("admininterface", "\346\237\245\350\257\242", nullptr));
        btndelete_buy->setText(QCoreApplication::translate("admininterface", "\345\210\240\351\231\244", nullptr));
        labelbuytid->setText(QCoreApplication::translate("admininterface", "\350\256\276\345\244\207\345\236\213\345\217\267", nullptr));
        labelsbuydb->setText(QCoreApplication::translate("admininterface", "\351\207\207\350\264\255\346\227\245\346\234\237", nullptr));
        labelbuyid->setText(QCoreApplication::translate("admininterface", "\351\207\207\350\264\255\345\215\225\345\217\267", nullptr));
        btnreport_buy->setText(QCoreApplication::translate("admininterface", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        btnrevert_buy->setText(QCoreApplication::translate("admininterface", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
        labelbuynum->setText(QCoreApplication::translate("admininterface", "\350\256\276\345\244\207\346\225\260\351\207\217", nullptr));
        labelbuySplace->setText(QCoreApplication::translate("admininterface", "\345\255\230\346\224\276\345\234\260\347\202\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabbuyinfo), QCoreApplication::translate("admininterface", "\351\207\207\350\264\255", nullptr));
        btndelete_report->setText(QCoreApplication::translate("admininterface", "\345\210\240\351\231\244", nullptr));
        labelreportsid->setText(QCoreApplication::translate("admininterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        btninsert_report->setText(QCoreApplication::translate("admininterface", "\345\242\236\345\212\240", nullptr));
        labelreportid->setText(QCoreApplication::translate("admininterface", "\346\212\245\346\215\237\345\215\225\345\217\267", nullptr));
        labelsreportdb->setText(QCoreApplication::translate("admininterface", "\346\212\245\346\215\237\346\227\245\346\234\237", nullptr));
        btnsearch_report->setText(QCoreApplication::translate("admininterface", "\346\237\245\350\257\242", nullptr));
        btnrevert_report->setText(QCoreApplication::translate("admininterface", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
        btnreport_report->setText(QCoreApplication::translate("admininterface", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabreportinfo), QCoreApplication::translate("admininterface", "\346\212\245\346\215\237", nullptr));
        labelrepairday->setText(QCoreApplication::translate("admininterface", "\351\200\201\344\277\256\346\227\245\346\234\237", nullptr));
        labelrepairsid->setText(QCoreApplication::translate("admininterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labelrepairid->setText(QCoreApplication::translate("admininterface", "\347\273\264\344\277\256\345\215\225\345\217\267", nullptr));
        btnsearch_repair->setText(QCoreApplication::translate("admininterface", "\346\237\245\350\257\242", nullptr));
        btninsert_repair->setText(QCoreApplication::translate("admininterface", "\345\242\236\345\212\240", nullptr));
        btndelete_repair->setText(QCoreApplication::translate("admininterface", "\345\210\240\351\231\244", nullptr));
        btnreport_repair->setText(QCoreApplication::translate("admininterface", "\346\217\220\344\272\244\344\277\256\346\224\271", nullptr));
        btnrevert_repair->setText(QCoreApplication::translate("admininterface", "\346\222\244\351\224\200\344\277\256\346\224\271", nullptr));
        labelrepairid_2->setText(QCoreApplication::translate("admininterface", "\347\273\264\344\277\256\345\215\225\345\217\267", nullptr));
        labelrepairsid_2->setText(QCoreApplication::translate("admininterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labelrepairday_2->setText(QCoreApplication::translate("admininterface", "\351\200\201\344\277\256\346\227\245\346\234\237", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabrepairinfo), QCoreApplication::translate("admininterface", "\347\273\264\344\277\256", nullptr));
        label->setText(QCoreApplication::translate("admininterface", "\347\256\241\347\220\206\347\253\257", nullptr));
        textUsername->setText(QCoreApplication::translate("admininterface", "\346\254\242\350\277\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class admininterface: public Ui_admininterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMININTERFACE_H
