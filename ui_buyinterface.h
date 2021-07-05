/********************************************************************************
** Form generated from reading UI file 'buyinterface.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BUYINTERFACE_H
#define UI_BUYINTERFACE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_buyinterface
{
public:
    QLabel *textUsername;
    QTabWidget *tabWidget;
    QWidget *tabs;
    QPushButton *btnsearch_s;
    QTextEdit *textEditsid;
    QLabel *labelsid;
    QTextEdit *textEdittid;
    QLabel *labeltid;
    QLabel *labelsname;
    QTextEdit *textEditsname;
    QLabel *labelsdp;
    QLabel *labelsdb;
    QDateEdit *dateEditCreat;
    QDateEdit *dateEditBuy;
    QWidget *tabstoreinfo;
    QPushButton *btninsert_store;
    QPushButton *btnsearch_store;
    QTextEdit *textEditstoreplace;
    QLabel *labelstoreplace;
    QTextEdit *textEditstorestid;
    QLabel *labelstorestid;
    QTextEdit *textEditstoresnum;
    QLabel *labelstoresnum;
    QWidget *tabbuyinfo;
    QPushButton *btninsert_buy;
    QPushButton *btnsearch_buy;
    QLabel *labelbuytid;
    QLabel *labelbuysid;
    QTextEdit *textEditbuysid;
    QTextEdit *textEditbuytid;
    QLabel *labelsbuydb;
    QDateEdit *dateEditbuydb;
    QLabel *labelbuyid;
    QTextEdit *textEditbuyid;
    QLabel *label;
    QFrame *line;

    void setupUi(QWidget *buyinterface)
    {
        if (buyinterface->objectName().isEmpty())
            buyinterface->setObjectName(QString::fromUtf8("buyinterface"));
        buyinterface->resize(758, 516);
        textUsername = new QLabel(buyinterface);
        textUsername->setObjectName(QString::fromUtf8("textUsername"));
        textUsername->setGeometry(QRect(90, 10, 54, 12));
        tabWidget = new QTabWidget(buyinterface);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(40, 60, 691, 431));
        tabWidget->setMinimumSize(QSize(691, 0));
        tabs = new QWidget();
        tabs->setObjectName(QString::fromUtf8("tabs"));
        btnsearch_s = new QPushButton(tabs);
        btnsearch_s->setObjectName(QString::fromUtf8("btnsearch_s"));
        btnsearch_s->setGeometry(QRect(70, 70, 75, 23));
        textEditsid = new QTextEdit(tabs);
        textEditsid->setObjectName(QString::fromUtf8("textEditsid"));
        textEditsid->setGeometry(QRect(310, 70, 131, 31));
        labelsid = new QLabel(tabs);
        labelsid->setObjectName(QString::fromUtf8("labelsid"));
        labelsid->setGeometry(QRect(250, 80, 54, 12));
        textEdittid = new QTextEdit(tabs);
        textEdittid->setObjectName(QString::fromUtf8("textEdittid"));
        textEdittid->setGeometry(QRect(310, 120, 131, 31));
        labeltid = new QLabel(tabs);
        labeltid->setObjectName(QString::fromUtf8("labeltid"));
        labeltid->setGeometry(QRect(250, 130, 54, 12));
        labelsname = new QLabel(tabs);
        labelsname->setObjectName(QString::fromUtf8("labelsname"));
        labelsname->setGeometry(QRect(250, 180, 54, 12));
        textEditsname = new QTextEdit(tabs);
        textEditsname->setObjectName(QString::fromUtf8("textEditsname"));
        textEditsname->setGeometry(QRect(310, 170, 131, 31));
        labelsdp = new QLabel(tabs);
        labelsdp->setObjectName(QString::fromUtf8("labelsdp"));
        labelsdp->setGeometry(QRect(250, 230, 54, 12));
        labelsdb = new QLabel(tabs);
        labelsdb->setObjectName(QString::fromUtf8("labelsdb"));
        labelsdb->setGeometry(QRect(250, 280, 54, 12));
        dateEditCreat = new QDateEdit(tabs);
        dateEditCreat->setObjectName(QString::fromUtf8("dateEditCreat"));
        dateEditCreat->setGeometry(QRect(310, 230, 110, 22));
        dateEditBuy = new QDateEdit(tabs);
        dateEditBuy->setObjectName(QString::fromUtf8("dateEditBuy"));
        dateEditBuy->setGeometry(QRect(310, 280, 110, 22));
        tabWidget->addTab(tabs, QString());
        tabstoreinfo = new QWidget();
        tabstoreinfo->setObjectName(QString::fromUtf8("tabstoreinfo"));
        btninsert_store = new QPushButton(tabstoreinfo);
        btninsert_store->setObjectName(QString::fromUtf8("btninsert_store"));
        btninsert_store->setGeometry(QRect(80, 140, 75, 23));
        btnsearch_store = new QPushButton(tabstoreinfo);
        btnsearch_store->setObjectName(QString::fromUtf8("btnsearch_store"));
        btnsearch_store->setGeometry(QRect(80, 70, 75, 23));
        textEditstoreplace = new QTextEdit(tabstoreinfo);
        textEditstoreplace->setObjectName(QString::fromUtf8("textEditstoreplace"));
        textEditstoreplace->setGeometry(QRect(330, 70, 131, 31));
        labelstoreplace = new QLabel(tabstoreinfo);
        labelstoreplace->setObjectName(QString::fromUtf8("labelstoreplace"));
        labelstoreplace->setGeometry(QRect(270, 80, 54, 12));
        textEditstorestid = new QTextEdit(tabstoreinfo);
        textEditstorestid->setObjectName(QString::fromUtf8("textEditstorestid"));
        textEditstorestid->setGeometry(QRect(330, 130, 131, 31));
        labelstorestid = new QLabel(tabstoreinfo);
        labelstorestid->setObjectName(QString::fromUtf8("labelstorestid"));
        labelstorestid->setGeometry(QRect(270, 140, 54, 12));
        textEditstoresnum = new QTextEdit(tabstoreinfo);
        textEditstoresnum->setObjectName(QString::fromUtf8("textEditstoresnum"));
        textEditstoresnum->setGeometry(QRect(330, 190, 131, 31));
        labelstoresnum = new QLabel(tabstoreinfo);
        labelstoresnum->setObjectName(QString::fromUtf8("labelstoresnum"));
        labelstoresnum->setGeometry(QRect(270, 200, 54, 12));
        tabWidget->addTab(tabstoreinfo, QString());
        tabbuyinfo = new QWidget();
        tabbuyinfo->setObjectName(QString::fromUtf8("tabbuyinfo"));
        btninsert_buy = new QPushButton(tabbuyinfo);
        btninsert_buy->setObjectName(QString::fromUtf8("btninsert_buy"));
        btninsert_buy->setGeometry(QRect(80, 150, 75, 23));
        btnsearch_buy = new QPushButton(tabbuyinfo);
        btnsearch_buy->setObjectName(QString::fromUtf8("btnsearch_buy"));
        btnsearch_buy->setGeometry(QRect(80, 80, 75, 23));
        labelbuytid = new QLabel(tabbuyinfo);
        labelbuytid->setObjectName(QString::fromUtf8("labelbuytid"));
        labelbuytid->setGeometry(QRect(320, 160, 54, 12));
        labelbuysid = new QLabel(tabbuyinfo);
        labelbuysid->setObjectName(QString::fromUtf8("labelbuysid"));
        labelbuysid->setGeometry(QRect(320, 110, 54, 12));
        textEditbuysid = new QTextEdit(tabbuyinfo);
        textEditbuysid->setObjectName(QString::fromUtf8("textEditbuysid"));
        textEditbuysid->setGeometry(QRect(380, 100, 131, 31));
        textEditbuytid = new QTextEdit(tabbuyinfo);
        textEditbuytid->setObjectName(QString::fromUtf8("textEditbuytid"));
        textEditbuytid->setGeometry(QRect(380, 150, 131, 31));
        labelsbuydb = new QLabel(tabbuyinfo);
        labelsbuydb->setObjectName(QString::fromUtf8("labelsbuydb"));
        labelsbuydb->setGeometry(QRect(320, 210, 54, 12));
        dateEditbuydb = new QDateEdit(tabbuyinfo);
        dateEditbuydb->setObjectName(QString::fromUtf8("dateEditbuydb"));
        dateEditbuydb->setGeometry(QRect(380, 210, 110, 22));
        labelbuyid = new QLabel(tabbuyinfo);
        labelbuyid->setObjectName(QString::fromUtf8("labelbuyid"));
        labelbuyid->setGeometry(QRect(320, 60, 54, 12));
        textEditbuyid = new QTextEdit(tabbuyinfo);
        textEditbuyid->setObjectName(QString::fromUtf8("textEditbuyid"));
        textEditbuyid->setGeometry(QRect(380, 50, 131, 31));
        tabWidget->addTab(tabbuyinfo, QString());
        label = new QLabel(buyinterface);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(360, 20, 54, 12));
        line = new QFrame(buyinterface);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(50, 40, 681, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(buyinterface);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(buyinterface);
    } // setupUi

    void retranslateUi(QWidget *buyinterface)
    {
        buyinterface->setWindowTitle(QCoreApplication::translate("buyinterface", "Form", nullptr));
        textUsername->setText(QCoreApplication::translate("buyinterface", "\346\254\242\350\277\216", nullptr));
        btnsearch_s->setText(QCoreApplication::translate("buyinterface", "\346\237\245\350\257\242", nullptr));
        labelsid->setText(QCoreApplication::translate("buyinterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labeltid->setText(QCoreApplication::translate("buyinterface", "\350\256\276\345\244\207\345\236\213\345\217\267", nullptr));
        labelsname->setText(QCoreApplication::translate("buyinterface", "\350\256\276\345\244\207\345\220\215\347\247\260", nullptr));
        labelsdp->setText(QCoreApplication::translate("buyinterface", "\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        labelsdb->setText(QCoreApplication::translate("buyinterface", "\350\264\255\345\205\245\346\227\245\346\234\237", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabs), QCoreApplication::translate("buyinterface", "\350\256\276\345\244\207", nullptr));
        btninsert_store->setText(QCoreApplication::translate("buyinterface", " \345\242\236\345\212\240", nullptr));
        btnsearch_store->setText(QCoreApplication::translate("buyinterface", "\346\237\245\350\257\242", nullptr));
        labelstoreplace->setText(QCoreApplication::translate("buyinterface", "\345\255\230\346\224\276\345\234\260\347\202\271", nullptr));
        labelstorestid->setText(QCoreApplication::translate("buyinterface", "\350\256\276\345\244\207\345\236\213\345\217\267", nullptr));
        labelstoresnum->setText(QCoreApplication::translate("buyinterface", "\350\256\276\345\244\207\346\225\260\351\207\217", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabstoreinfo), QCoreApplication::translate("buyinterface", "\345\217\260\350\264\246", nullptr));
        btninsert_buy->setText(QCoreApplication::translate("buyinterface", " \345\242\236\345\212\240", nullptr));
        btnsearch_buy->setText(QCoreApplication::translate("buyinterface", "\346\237\245\350\257\242", nullptr));
        labelbuytid->setText(QCoreApplication::translate("buyinterface", "\350\256\276\345\244\207\345\236\213\345\217\267", nullptr));
        labelbuysid->setText(QCoreApplication::translate("buyinterface", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labelsbuydb->setText(QCoreApplication::translate("buyinterface", "\351\207\207\350\264\255\346\227\245\346\234\237", nullptr));
        labelbuyid->setText(QCoreApplication::translate("buyinterface", "\351\207\207\350\264\255\345\215\225\345\217\267", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabbuyinfo), QCoreApplication::translate("buyinterface", "\351\207\207\350\264\255", nullptr));
        label->setText(QCoreApplication::translate("buyinterface", "\351\207\207\350\264\255\347\253\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class buyinterface: public Ui_buyinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BUYINTERFACE_H
