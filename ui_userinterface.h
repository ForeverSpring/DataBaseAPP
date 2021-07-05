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
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_userinterface
{
public:

    void setupUi(QWidget *userinterface)
    {
        if (userinterface->objectName().isEmpty())
            userinterface->setObjectName(QString::fromUtf8("userinterface"));
        userinterface->resize(691, 482);

        retranslateUi(userinterface);

        QMetaObject::connectSlotsByName(userinterface);
    } // setupUi

    void retranslateUi(QWidget *userinterface)
    {
        userinterface->setWindowTitle(QCoreApplication::translate("userinterface", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class userinterface: public Ui_userinterface {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USERINTERFACE_H
