/********************************************************************************
** Form generated from reading UI file 'option.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_OPTION_H
#define UI_OPTION_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_option
{
public:
    QTextBrowser *textBrowserIP;
    QLabel *labelDBname;
    QLabel *labelport;
    QLabel *labelIP;
    QTextBrowser *textBrowserport;
    QTextBrowser *textBrowserDBname;
    QPushButton *pushButtonreset;
    QPushButton *pushButtonset;

    void setupUi(QWidget *option)
    {
        if (option->objectName().isEmpty())
            option->setObjectName(QString::fromUtf8("option"));
        option->resize(615, 401);
        textBrowserIP = new QTextBrowser(option);
        textBrowserIP->setObjectName(QString::fromUtf8("textBrowserIP"));
        textBrowserIP->setGeometry(QRect(230, 100, 171, 31));
        textBrowserIP->setReadOnly(false);
        labelDBname = new QLabel(option);
        labelDBname->setObjectName(QString::fromUtf8("labelDBname"));
        labelDBname->setGeometry(QRect(160, 230, 54, 12));
        labelport = new QLabel(option);
        labelport->setObjectName(QString::fromUtf8("labelport"));
        labelport->setGeometry(QRect(160, 170, 54, 12));
        labelIP = new QLabel(option);
        labelIP->setObjectName(QString::fromUtf8("labelIP"));
        labelIP->setGeometry(QRect(160, 110, 54, 12));
        textBrowserport = new QTextBrowser(option);
        textBrowserport->setObjectName(QString::fromUtf8("textBrowserport"));
        textBrowserport->setGeometry(QRect(230, 160, 171, 31));
        textBrowserport->setReadOnly(false);
        textBrowserDBname = new QTextBrowser(option);
        textBrowserDBname->setObjectName(QString::fromUtf8("textBrowserDBname"));
        textBrowserDBname->setGeometry(QRect(230, 220, 171, 31));
        textBrowserDBname->setReadOnly(false);
        pushButtonreset = new QPushButton(option);
        pushButtonreset->setObjectName(QString::fromUtf8("pushButtonreset"));
        pushButtonreset->setGeometry(QRect(340, 290, 75, 23));
        pushButtonset = new QPushButton(option);
        pushButtonset->setObjectName(QString::fromUtf8("pushButtonset"));
        pushButtonset->setGeometry(QRect(170, 290, 75, 23));

        retranslateUi(option);

        QMetaObject::connectSlotsByName(option);
    } // setupUi

    void retranslateUi(QWidget *option)
    {
        option->setWindowTitle(QCoreApplication::translate("option", "Form", nullptr));
        textBrowserIP->setHtml(QCoreApplication::translate("option", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">127.0.0.1</p></body></html>", nullptr));
        labelDBname->setText(QCoreApplication::translate("option", "\346\225\260\346\215\256\345\272\223", nullptr));
        labelport->setText(QCoreApplication::translate("option", "\347\253\257\345\217\243", nullptr));
        labelIP->setText(QCoreApplication::translate("option", "\346\225\260\346\215\256\345\272\223IP", nullptr));
        textBrowserport->setHtml(QCoreApplication::translate("option", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">3306</p></body></html>", nullptr));
        textBrowserDBname->setHtml(QCoreApplication::translate("option", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">test</p></body></html>", nullptr));
        pushButtonreset->setText(QCoreApplication::translate("option", "\351\207\215\347\275\256", nullptr));
        pushButtonset->setText(QCoreApplication::translate("option", "\350\256\276\347\275\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class option: public Ui_option {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_OPTION_H
