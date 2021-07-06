/********************************************************************************
** Form generated from reading UI file 'userinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USERINTERFACE_H
#define UI_USERINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userinterface
{
public:
    QFrame *line;
    QLabel *label;
    QLabel *textUsername;
    QTabWidget *tabWidget;
    QWidget *tabs;
    QPushButton *btnsearch_s;
    QTextEdit *textEditsid;
    QLabel *labelsid;
    QTextEdit *textEdittid;
    QLabel *labeltid;
    QLabel *labelsdp;
    QLabel *labelsdb;
    QDateEdit *dateEditCreat;
    QDateEdit *dateEditBuy;
    QTableView *tableViewDevice;
    QTextEdit *textEditsplace;
    QLabel *labelsplace;
    QWidget *tabstoreinfo;
    QPushButton *btnsearch_store;
    QTextEdit *textEditstoreplace;
    QLabel *labelstoreplace;
    QTextEdit *textEditstorestid;
    QLabel *labelstorestid;
    QTableView *tableViewStore;
    QWidget *tabuserinfo;
    QPushButton *btninsert_use;
    QPushButton *btnsearch_use;
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
    QWidget *tabreportinfo;
    QLabel *labelreportsid;
    QPushButton *btninsert_report;
    QLabel *labelreportid;
    QLabel *labelsreportdb;
    QTextEdit *textEditreportsid;
    QTextEdit *textEditreportid;
    QDateEdit *dateEditreportdb;
    QPushButton *btnsearch_report;
    QTableView *tableViewReport;

    void setupUi(QWidget *userinterface)
    {
        if (userinterface->objectName().isEmpty())
            userinterface->setObjectName(QString::fromUtf8("userinterface"));
        userinterface->resize(835, 551);
        line = new QFrame(userinterface);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(80, 60, 681, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(userinterface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(390, 40, 54, 12));
        textUsername = new QLabel(userinterface);
        textUsername->setObjectName(QString::fromUtf8("textUsername"));
        textUsername->setGeometry(QRect(120, 30, 201, 16));
        tabWidget = new QTabWidget(userinterface);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(70, 80, 691, 431));
        tabWidget->setMinimumSize(QSize(691, 0));
        tabs = new QWidget();
        tabs->setObjectName(QString::fromUtf8("tabs"));
        btnsearch_s = new QPushButton(tabs);
        btnsearch_s->setObjectName(QString::fromUtf8("btnsearch_s"));
        btnsearch_s->setGeometry(QRect(310, 330, 75, 23));
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
        textEditsplace = new QTextEdit(tabs);
        textEditsplace->setObjectName(QString::fromUtf8("textEditsplace"));
        textEditsplace->setGeometry(QRect(520, 140, 131, 31));
        labelsplace = new QLabel(tabs);
        labelsplace->setObjectName(QString::fromUtf8("labelsplace"));
        labelsplace->setGeometry(QRect(460, 150, 54, 12));
        tabWidget->addTab(tabs, QString());
        tabstoreinfo = new QWidget();
        tabstoreinfo->setObjectName(QString::fromUtf8("tabstoreinfo"));
        btnsearch_store = new QPushButton(tabstoreinfo);
        btnsearch_store->setObjectName(QString::fromUtf8("btnsearch_store"));
        btnsearch_store->setGeometry(QRect(280, 330, 75, 23));
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
        tabWidget->addTab(tabstoreinfo, QString());
        tabuserinfo = new QWidget();
        tabuserinfo->setObjectName(QString::fromUtf8("tabuserinfo"));
        btninsert_use = new QPushButton(tabuserinfo);
        btninsert_use->setObjectName(QString::fromUtf8("btninsert_use"));
        btninsert_use->setGeometry(QRect(350, 330, 75, 23));
        btnsearch_use = new QPushButton(tabuserinfo);
        btnsearch_use->setObjectName(QString::fromUtf8("btnsearch_use"));
        btnsearch_use->setGeometry(QRect(200, 330, 75, 23));
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
        tabWidget->addTab(tabuserinfo, QString());
        tabreportinfo = new QWidget();
        tabreportinfo->setObjectName(QString::fromUtf8("tabreportinfo"));
        labelreportsid = new QLabel(tabreportinfo);
        labelreportsid->setObjectName(QString::fromUtf8("labelreportsid"));
        labelreportsid->setGeometry(QRect(470, 110, 54, 12));
        btninsert_report = new QPushButton(tabreportinfo);
        btninsert_report->setObjectName(QString::fromUtf8("btninsert_report"));
        btninsert_report->setGeometry(QRect(360, 340, 75, 23));
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
        btnsearch_report->setGeometry(QRect(190, 340, 75, 23));
        tableViewReport = new QTableView(tabreportinfo);
        tableViewReport->setObjectName(QString::fromUtf8("tableViewReport"));
        tableViewReport->setGeometry(QRect(10, 20, 451, 291));
        tableViewReport->setEditTriggers(QAbstractItemView::AnyKeyPressed|QAbstractItemView::DoubleClicked|QAbstractItemView::EditKeyPressed);
        tabWidget->addTab(tabreportinfo, QString());

        retranslateUi(userinterface);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(userinterface);
    } // setupUi

    void retranslateUi(QWidget *userinterface)
    {
        userinterface->setWindowTitle(QCoreApplication::translate("userinterface", "Form", nullptr));
        label->setText(QCoreApplication::translate("userinterface", "\347\224\250\346\210\267\347\253\257", nullptr));
        textUsername->setText(QCoreApplication::translate("userinterface", "\346\254\242\350\277\216", nullptr));
        btnsearch_s->setText(QCoreApplication::translate("userinterface", "\346\237\245\350\257\242", nullptr));
        labelsid->setText(QCoreApplication::translate("userinterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labeltid->setText(QCoreApplication::translate("userinterface", "\350\256\276\345\244\207\345\236\213\345\217\267", nullptr));
        labelsdp->setText(QCoreApplication::translate("userinterface", "\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        labelsdb->setText(QCoreApplication::translate("userinterface", "\350\264\255\345\205\245\346\227\245\346\234\237", nullptr));
        labelsplace->setText(QCoreApplication::translate("userinterface", "\345\255\230\346\224\276\345\234\260\347\202\271", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabs), QCoreApplication::translate("userinterface", "\350\256\276\345\244\207", nullptr));
        btnsearch_store->setText(QCoreApplication::translate("userinterface", "\346\237\245\350\257\242", nullptr));
        labelstoreplace->setText(QCoreApplication::translate("userinterface", "\345\255\230\346\224\276\345\234\260\347\202\271", nullptr));
        labelstorestid->setText(QCoreApplication::translate("userinterface", "\350\256\276\345\244\207\345\236\213\345\217\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabstoreinfo), QCoreApplication::translate("userinterface", "\345\217\260\350\264\246", nullptr));
        btninsert_use->setText(QCoreApplication::translate("userinterface", "\345\242\236\345\212\240", nullptr));
        btnsearch_use->setText(QCoreApplication::translate("userinterface", "\346\237\245\350\257\242", nullptr));
        labeluserid->setText(QCoreApplication::translate("userinterface", "\345\255\246\345\267\245\345\217\267", nullptr));
        labelduse->setText(QCoreApplication::translate("userinterface", "\345\200\237\347\224\250\346\227\245\346\234\237", nullptr));
        labelusername->setText(QCoreApplication::translate("userinterface", "\345\247\223\345\220\215", nullptr));
        labelusid->setText(QCoreApplication::translate("userinterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labeluserphone->setText(QCoreApplication::translate("userinterface", "\347\224\265\350\257\235", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabuserinfo), QCoreApplication::translate("userinterface", "\344\275\277\347\224\250", nullptr));
        labelreportsid->setText(QCoreApplication::translate("userinterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        btninsert_report->setText(QCoreApplication::translate("userinterface", "\345\242\236\345\212\240", nullptr));
        labelreportid->setText(QCoreApplication::translate("userinterface", "\346\212\245\346\215\237\345\215\225\345\217\267", nullptr));
        labelsreportdb->setText(QCoreApplication::translate("userinterface", "\346\212\245\346\215\237\346\227\245\346\234\237", nullptr));
        btnsearch_report->setText(QCoreApplication::translate("userinterface", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabreportinfo), QCoreApplication::translate("userinterface", "\346\212\245\346\215\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userinterface: public Ui_userinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
