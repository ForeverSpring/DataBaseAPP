/********************************************************************************
** Form generated from reading UI file 'add_use.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_USE_H
#define UI_ADD_USE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_add_use
{
public:
    QTextEdit *textEditusername;
    QLabel *labelDid;
    QPushButton *btn_ensure;
    QTextEdit *textEditname;
    QLabel *labelname;
    QLabel *labelID;
    QTextEdit *textEditID;
    QPushButton *btn_cancel;
    QDateEdit *dateEditUseDate;
    QLabel *labeldUseDate;

    void setupUi(QWidget *add_use)
    {
        if (add_use->objectName().isEmpty())
            add_use->setObjectName(QString::fromUtf8("add_use"));
        add_use->resize(702, 377);
        textEditusername = new QTextEdit(add_use);
        textEditusername->setObjectName(QString::fromUtf8("textEditusername"));
        textEditusername->setGeometry(QRect(200, 80, 131, 31));
        labelDid = new QLabel(add_use);
        labelDid->setObjectName(QString::fromUtf8("labelDid"));
        labelDid->setGeometry(QRect(140, 90, 54, 12));
        btn_ensure = new QPushButton(add_use);
        btn_ensure->setObjectName(QString::fromUtf8("btn_ensure"));
        btn_ensure->setGeometry(QRect(230, 220, 75, 23));
        textEditname = new QTextEdit(add_use);
        textEditname->setObjectName(QString::fromUtf8("textEditname"));
        textEditname->setGeometry(QRect(450, 140, 131, 31));
        labelname = new QLabel(add_use);
        labelname->setObjectName(QString::fromUtf8("labelname"));
        labelname->setGeometry(QRect(390, 150, 54, 12));
        labelID = new QLabel(add_use);
        labelID->setObjectName(QString::fromUtf8("labelID"));
        labelID->setGeometry(QRect(140, 150, 54, 12));
        textEditID = new QTextEdit(add_use);
        textEditID->setObjectName(QString::fromUtf8("textEditID"));
        textEditID->setGeometry(QRect(200, 140, 131, 31));
        btn_cancel = new QPushButton(add_use);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(390, 220, 75, 23));
        dateEditUseDate = new QDateEdit(add_use);
        dateEditUseDate->setObjectName(QString::fromUtf8("dateEditUseDate"));
        dateEditUseDate->setGeometry(QRect(450, 90, 110, 22));
        dateEditUseDate->setDateTime(QDateTime(QDate(1800, 1, 1), QTime(0, 0, 0)));
        labeldUseDate = new QLabel(add_use);
        labeldUseDate->setObjectName(QString::fromUtf8("labeldUseDate"));
        labeldUseDate->setGeometry(QRect(390, 90, 54, 12));

        retranslateUi(add_use);

        QMetaObject::connectSlotsByName(add_use);
    } // setupUi

    void retranslateUi(QWidget *add_use)
    {
        add_use->setWindowTitle(QCoreApplication::translate("add_use", "Form", nullptr));
        labelDid->setText(QCoreApplication::translate("add_use", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        btn_ensure->setText(QCoreApplication::translate("add_use", "\347\241\256\345\256\232", nullptr));
        labelname->setText(QCoreApplication::translate("add_use", "\345\247\223\345\220\215", nullptr));
        labelID->setText(QCoreApplication::translate("add_use", "\345\267\245\345\217\267", nullptr));
        btn_cancel->setText(QCoreApplication::translate("add_use", "\345\217\226\346\266\210", nullptr));
        labeldUseDate->setText(QCoreApplication::translate("add_use", "\345\200\237\347\224\250\346\227\245\346\234\237", nullptr));
    } // retranslateUi

};

namespace Ui {
    class add_use: public Ui_add_use {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_USE_H
