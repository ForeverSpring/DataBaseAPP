/********************************************************************************
** Form generated from reading UI file 'adduser.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADDUSER_H
#define UI_ADDUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_adduser
{
public:
    QGroupBox *groupBoxusertype;
    QRadioButton *radioButtonUserUse;
    QRadioButton *radioButtonUserRepair;
    QRadioButton *radioButtonUserBuy;
    QRadioButton *radioButtonUserAdmin;
    QLabel *labelname;
    QTextEdit *textEditname;
    QLabel *labelphone;
    QTextEdit *textEditphone;
    QPushButton *btn_ensure;
    QPushButton *btn_cancel;
    QLabel *labelusername;
    QTextEdit *textEditusername;
    QLabel *labelpassword;
    QTextEdit *textEditpassword;

    void setupUi(QWidget *adduser)
    {
        if (adduser->objectName().isEmpty())
            adduser->setObjectName(QString::fromUtf8("adduser"));
        adduser->resize(601, 373);
        groupBoxusertype = new QGroupBox(adduser);
        groupBoxusertype->setObjectName(QString::fromUtf8("groupBoxusertype"));
        groupBoxusertype->setGeometry(QRect(380, 40, 131, 211));
        radioButtonUserUse = new QRadioButton(groupBoxusertype);
        radioButtonUserUse->setObjectName(QString::fromUtf8("radioButtonUserUse"));
        radioButtonUserUse->setGeometry(QRect(20, 20, 91, 31));
        radioButtonUserUse->setChecked(true);
        radioButtonUserRepair = new QRadioButton(groupBoxusertype);
        radioButtonUserRepair->setObjectName(QString::fromUtf8("radioButtonUserRepair"));
        radioButtonUserRepair->setGeometry(QRect(20, 100, 91, 31));
        radioButtonUserBuy = new QRadioButton(groupBoxusertype);
        radioButtonUserBuy->setObjectName(QString::fromUtf8("radioButtonUserBuy"));
        radioButtonUserBuy->setGeometry(QRect(20, 60, 91, 31));
        radioButtonUserAdmin = new QRadioButton(groupBoxusertype);
        radioButtonUserAdmin->setObjectName(QString::fromUtf8("radioButtonUserAdmin"));
        radioButtonUserAdmin->setGeometry(QRect(20, 140, 91, 31));
        labelname = new QLabel(adduser);
        labelname->setObjectName(QString::fromUtf8("labelname"));
        labelname->setGeometry(QRect(70, 110, 54, 12));
        textEditname = new QTextEdit(adduser);
        textEditname->setObjectName(QString::fromUtf8("textEditname"));
        textEditname->setGeometry(QRect(130, 100, 131, 31));
        labelphone = new QLabel(adduser);
        labelphone->setObjectName(QString::fromUtf8("labelphone"));
        labelphone->setGeometry(QRect(70, 250, 54, 12));
        textEditphone = new QTextEdit(adduser);
        textEditphone->setObjectName(QString::fromUtf8("textEditphone"));
        textEditphone->setGeometry(QRect(130, 240, 131, 31));
        btn_ensure = new QPushButton(adduser);
        btn_ensure->setObjectName(QString::fromUtf8("btn_ensure"));
        btn_ensure->setGeometry(QRect(140, 300, 75, 23));
        btn_cancel = new QPushButton(adduser);
        btn_cancel->setObjectName(QString::fromUtf8("btn_cancel"));
        btn_cancel->setGeometry(QRect(320, 300, 75, 23));
        labelusername = new QLabel(adduser);
        labelusername->setObjectName(QString::fromUtf8("labelusername"));
        labelusername->setGeometry(QRect(70, 50, 54, 12));
        textEditusername = new QTextEdit(adduser);
        textEditusername->setObjectName(QString::fromUtf8("textEditusername"));
        textEditusername->setGeometry(QRect(130, 40, 131, 31));
        labelpassword = new QLabel(adduser);
        labelpassword->setObjectName(QString::fromUtf8("labelpassword"));
        labelpassword->setGeometry(QRect(70, 180, 54, 12));
        textEditpassword = new QTextEdit(adduser);
        textEditpassword->setObjectName(QString::fromUtf8("textEditpassword"));
        textEditpassword->setGeometry(QRect(130, 170, 131, 31));

        retranslateUi(adduser);

        QMetaObject::connectSlotsByName(adduser);
    } // setupUi

    void retranslateUi(QWidget *adduser)
    {
        adduser->setWindowTitle(QCoreApplication::translate("adduser", "Form", nullptr));
        groupBoxusertype->setTitle(QCoreApplication::translate("adduser", "    \347\224\250\346\210\267\347\261\273\345\236\213", nullptr));
        radioButtonUserUse->setText(QCoreApplication::translate("adduser", "\344\275\277\347\224\250\344\272\272\345\221\230", nullptr));
        radioButtonUserRepair->setText(QCoreApplication::translate("adduser", "\347\273\264\344\277\256\344\272\272\345\221\230", nullptr));
        radioButtonUserBuy->setText(QCoreApplication::translate("adduser", "\351\207\207\350\264\255\344\272\272\345\221\230", nullptr));
        radioButtonUserAdmin->setText(QCoreApplication::translate("adduser", "\347\256\241\347\220\206\345\221\230", nullptr));
        labelname->setText(QCoreApplication::translate("adduser", "\345\247\223\345\220\215", nullptr));
        labelphone->setText(QCoreApplication::translate("adduser", "\347\224\265\350\257\235\345\217\267\347\240\201", nullptr));
        btn_ensure->setText(QCoreApplication::translate("adduser", "\347\241\256\345\256\232", nullptr));
        btn_cancel->setText(QCoreApplication::translate("adduser", "\345\217\226\346\266\210", nullptr));
        labelusername->setText(QCoreApplication::translate("adduser", "\347\224\250\346\210\267\345\220\215", nullptr));
        labelpassword->setText(QCoreApplication::translate("adduser", "\345\257\206\347\240\201", nullptr));
    } // retranslateUi

};

namespace Ui {
    class adduser: public Ui_adduser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADDUSER_H
