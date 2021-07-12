/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_login
{
public:
    QLabel *label_login1;
    QLabel *label_login2;
    QPushButton *btn_login;
    QPushButton *btn_exit;
    QLineEdit *lineEditAcc;
    QLineEdit *lineEditPswd;
    QPushButton *btn_option;
    QLabel *label;

    void setupUi(QWidget *login)
    {
        if (login->objectName().isEmpty())
            login->setObjectName(QString::fromUtf8("login"));
        login->resize(683, 474);
        label_login1 = new QLabel(login);
        label_login1->setObjectName(QString::fromUtf8("label_login1"));
        label_login1->setGeometry(QRect(150, 120, 54, 12));
        label_login2 = new QLabel(login);
        label_login2->setObjectName(QString::fromUtf8("label_login2"));
        label_login2->setGeometry(QRect(150, 190, 54, 12));
        btn_login = new QPushButton(login);
        btn_login->setObjectName(QString::fromUtf8("btn_login"));
        btn_login->setGeometry(QRect(170, 300, 111, 41));
        btn_exit = new QPushButton(login);
        btn_exit->setObjectName(QString::fromUtf8("btn_exit"));
        btn_exit->setGeometry(QRect(380, 300, 101, 41));
        lineEditAcc = new QLineEdit(login);
        lineEditAcc->setObjectName(QString::fromUtf8("lineEditAcc"));
        lineEditAcc->setGeometry(QRect(260, 120, 221, 31));
        lineEditPswd = new QLineEdit(login);
        lineEditPswd->setObjectName(QString::fromUtf8("lineEditPswd"));
        lineEditPswd->setGeometry(QRect(260, 180, 221, 31));
        btn_option = new QPushButton(login);
        btn_option->setObjectName(QString::fromUtf8("btn_option"));
        btn_option->setGeometry(QRect(460, 380, 75, 23));
        label = new QLabel(login);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(320, 40, 54, 12));

        retranslateUi(login);

        QMetaObject::connectSlotsByName(login);
    } // setupUi

    void retranslateUi(QWidget *login)
    {
        login->setWindowTitle(QCoreApplication::translate("login", "Form", nullptr));
        label_login1->setText(QCoreApplication::translate("login", "\350\264\246\345\217\267", nullptr));
        label_login2->setText(QCoreApplication::translate("login", "\345\257\206\347\240\201", nullptr));
        btn_login->setText(QCoreApplication::translate("login", "\347\231\273\345\275\225", nullptr));
        btn_exit->setText(QCoreApplication::translate("login", "\351\200\200\345\207\272", nullptr));
        btn_option->setText(QCoreApplication::translate("login", "Option", nullptr));
        label->setText(QCoreApplication::translate("login", "\347\256\241\347\220\206\347\253\257", nullptr));
    } // retranslateUi

};

namespace Ui {
    class login: public Ui_login {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
