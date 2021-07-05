/********************************************************************************
** Form generated from reading UI file 'repair.ui'
**
** Created by: Qt User Interface Compiler version 6.1.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REPAIR_H
#define UI_REPAIR_H

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

class Ui_repair
{
public:
    QLabel *textUsername;
    QTabWidget *tabWidget;
    QWidget *tabs_2;
    QPushButton *btnsearch_s_2;
    QTextEdit *textEditsid_2;
    QLabel *labelsid_2;
    QTextEdit *textEdittid_2;
    QLabel *labeltid_2;
    QLabel *labelsname_2;
    QTextEdit *textEditsname_2;
    QLabel *labelsdp_2;
    QLabel *labelsdb_2;
    QDateEdit *dateEditCreat_2;
    QDateEdit *dateEditBuy_2;
    QWidget *tabreportinfo_2;
    QLabel *labelreportsid_2;
    QLabel *labelreportid_2;
    QLabel *labelsreportdb_2;
    QTextEdit *textEditreportsid_2;
    QTextEdit *textEditreportid_2;
    QDateEdit *dateEditreportdb_2;
    QPushButton *btnsearch_report_2;
    QWidget *tabrepairinfo_2;
    QLabel *labelrepairday_2;
    QTextEdit *textEditrepairsid_2;
    QDateEdit *dateEditrepairday_2;
    QLabel *labelrepairsid_2;
    QTextEdit *textEditrepairid_2;
    QLabel *labelrepairid_2;
    QPushButton *btnsearch_repair_2;
    QPushButton *btninsert_repair_2;
    QLabel *label;
    QFrame *line;

    void setupUi(QWidget *repair)
    {
        if (repair->objectName().isEmpty())
            repair->setObjectName(QString::fromUtf8("repair"));
        repair->resize(724, 512);
        textUsername = new QLabel(repair);
        textUsername->setObjectName(QString::fromUtf8("textUsername"));
        textUsername->setGeometry(QRect(70, 10, 54, 12));
        tabWidget = new QTabWidget(repair);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(20, 60, 691, 431));
        tabWidget->setMinimumSize(QSize(691, 0));
        tabs_2 = new QWidget();
        tabs_2->setObjectName(QString::fromUtf8("tabs_2"));
        btnsearch_s_2 = new QPushButton(tabs_2);
        btnsearch_s_2->setObjectName(QString::fromUtf8("btnsearch_s_2"));
        btnsearch_s_2->setGeometry(QRect(70, 70, 75, 23));
        textEditsid_2 = new QTextEdit(tabs_2);
        textEditsid_2->setObjectName(QString::fromUtf8("textEditsid_2"));
        textEditsid_2->setGeometry(QRect(310, 70, 131, 31));
        labelsid_2 = new QLabel(tabs_2);
        labelsid_2->setObjectName(QString::fromUtf8("labelsid_2"));
        labelsid_2->setGeometry(QRect(250, 80, 54, 12));
        textEdittid_2 = new QTextEdit(tabs_2);
        textEdittid_2->setObjectName(QString::fromUtf8("textEdittid_2"));
        textEdittid_2->setGeometry(QRect(310, 120, 131, 31));
        labeltid_2 = new QLabel(tabs_2);
        labeltid_2->setObjectName(QString::fromUtf8("labeltid_2"));
        labeltid_2->setGeometry(QRect(250, 130, 54, 12));
        labelsname_2 = new QLabel(tabs_2);
        labelsname_2->setObjectName(QString::fromUtf8("labelsname_2"));
        labelsname_2->setGeometry(QRect(250, 180, 54, 12));
        textEditsname_2 = new QTextEdit(tabs_2);
        textEditsname_2->setObjectName(QString::fromUtf8("textEditsname_2"));
        textEditsname_2->setGeometry(QRect(310, 170, 131, 31));
        labelsdp_2 = new QLabel(tabs_2);
        labelsdp_2->setObjectName(QString::fromUtf8("labelsdp_2"));
        labelsdp_2->setGeometry(QRect(250, 230, 54, 12));
        labelsdb_2 = new QLabel(tabs_2);
        labelsdb_2->setObjectName(QString::fromUtf8("labelsdb_2"));
        labelsdb_2->setGeometry(QRect(250, 280, 54, 12));
        dateEditCreat_2 = new QDateEdit(tabs_2);
        dateEditCreat_2->setObjectName(QString::fromUtf8("dateEditCreat_2"));
        dateEditCreat_2->setGeometry(QRect(310, 230, 110, 22));
        dateEditBuy_2 = new QDateEdit(tabs_2);
        dateEditBuy_2->setObjectName(QString::fromUtf8("dateEditBuy_2"));
        dateEditBuy_2->setGeometry(QRect(310, 280, 110, 22));
        tabWidget->addTab(tabs_2, QString());
        tabreportinfo_2 = new QWidget();
        tabreportinfo_2->setObjectName(QString::fromUtf8("tabreportinfo_2"));
        labelreportsid_2 = new QLabel(tabreportinfo_2);
        labelreportsid_2->setObjectName(QString::fromUtf8("labelreportsid_2"));
        labelreportsid_2->setGeometry(QRect(320, 120, 54, 12));
        labelreportid_2 = new QLabel(tabreportinfo_2);
        labelreportid_2->setObjectName(QString::fromUtf8("labelreportid_2"));
        labelreportid_2->setGeometry(QRect(320, 70, 54, 16));
        labelsreportdb_2 = new QLabel(tabreportinfo_2);
        labelsreportdb_2->setObjectName(QString::fromUtf8("labelsreportdb_2"));
        labelsreportdb_2->setGeometry(QRect(320, 170, 54, 12));
        textEditreportsid_2 = new QTextEdit(tabreportinfo_2);
        textEditreportsid_2->setObjectName(QString::fromUtf8("textEditreportsid_2"));
        textEditreportsid_2->setGeometry(QRect(380, 110, 131, 31));
        textEditreportid_2 = new QTextEdit(tabreportinfo_2);
        textEditreportid_2->setObjectName(QString::fromUtf8("textEditreportid_2"));
        textEditreportid_2->setGeometry(QRect(380, 60, 131, 31));
        dateEditreportdb_2 = new QDateEdit(tabreportinfo_2);
        dateEditreportdb_2->setObjectName(QString::fromUtf8("dateEditreportdb_2"));
        dateEditreportdb_2->setGeometry(QRect(380, 170, 110, 22));
        btnsearch_report_2 = new QPushButton(tabreportinfo_2);
        btnsearch_report_2->setObjectName(QString::fromUtf8("btnsearch_report_2"));
        btnsearch_report_2->setGeometry(QRect(80, 90, 75, 23));
        tabWidget->addTab(tabreportinfo_2, QString());
        tabrepairinfo_2 = new QWidget();
        tabrepairinfo_2->setObjectName(QString::fromUtf8("tabrepairinfo_2"));
        labelrepairday_2 = new QLabel(tabrepairinfo_2);
        labelrepairday_2->setObjectName(QString::fromUtf8("labelrepairday_2"));
        labelrepairday_2->setGeometry(QRect(330, 160, 54, 12));
        textEditrepairsid_2 = new QTextEdit(tabrepairinfo_2);
        textEditrepairsid_2->setObjectName(QString::fromUtf8("textEditrepairsid_2"));
        textEditrepairsid_2->setGeometry(QRect(390, 100, 131, 31));
        dateEditrepairday_2 = new QDateEdit(tabrepairinfo_2);
        dateEditrepairday_2->setObjectName(QString::fromUtf8("dateEditrepairday_2"));
        dateEditrepairday_2->setGeometry(QRect(390, 160, 110, 22));
        labelrepairsid_2 = new QLabel(tabrepairinfo_2);
        labelrepairsid_2->setObjectName(QString::fromUtf8("labelrepairsid_2"));
        labelrepairsid_2->setGeometry(QRect(330, 110, 54, 12));
        textEditrepairid_2 = new QTextEdit(tabrepairinfo_2);
        textEditrepairid_2->setObjectName(QString::fromUtf8("textEditrepairid_2"));
        textEditrepairid_2->setGeometry(QRect(390, 50, 131, 31));
        labelrepairid_2 = new QLabel(tabrepairinfo_2);
        labelrepairid_2->setObjectName(QString::fromUtf8("labelrepairid_2"));
        labelrepairid_2->setGeometry(QRect(330, 60, 54, 16));
        btnsearch_repair_2 = new QPushButton(tabrepairinfo_2);
        btnsearch_repair_2->setObjectName(QString::fromUtf8("btnsearch_repair_2"));
        btnsearch_repair_2->setGeometry(QRect(90, 80, 75, 23));
        btninsert_repair_2 = new QPushButton(tabrepairinfo_2);
        btninsert_repair_2->setObjectName(QString::fromUtf8("btninsert_repair_2"));
        btninsert_repair_2->setGeometry(QRect(90, 140, 75, 23));
        tabWidget->addTab(tabrepairinfo_2, QString());
        label = new QLabel(repair);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(340, 20, 54, 12));
        line = new QFrame(repair);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(30, 40, 681, 16));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        retranslateUi(repair);

        tabWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(repair);
    } // setupUi

    void retranslateUi(QWidget *repair)
    {
        repair->setWindowTitle(QCoreApplication::translate("repair", "Form", nullptr));
        textUsername->setText(QCoreApplication::translate("repair", "\346\254\242\350\277\216", nullptr));
        btnsearch_s_2->setText(QCoreApplication::translate("repair", "\346\237\245\350\257\242", nullptr));
        labelsid_2->setText(QCoreApplication::translate("repair", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labeltid_2->setText(QCoreApplication::translate("repair", "\350\256\276\345\244\207\345\236\213\345\217\267", nullptr));
        labelsname_2->setText(QCoreApplication::translate("repair", "\350\256\276\345\244\207\345\220\215\347\247\260", nullptr));
        labelsdp_2->setText(QCoreApplication::translate("repair", "\347\224\237\344\272\247\346\227\245\346\234\237", nullptr));
        labelsdb_2->setText(QCoreApplication::translate("repair", "\350\264\255\345\205\245\346\227\245\346\234\237", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabs_2), QCoreApplication::translate("repair", "\350\256\276\345\244\207", nullptr));
        labelreportsid_2->setText(QCoreApplication::translate("repair", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labelreportid_2->setText(QCoreApplication::translate("repair", "\346\212\245\344\277\256\345\215\225\345\217\267", nullptr));
        labelsreportdb_2->setText(QCoreApplication::translate("repair", "\346\212\245\344\277\256\346\227\245\346\234\237", nullptr));
        btnsearch_report_2->setText(QCoreApplication::translate("repair", "\346\237\245\350\257\242", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabreportinfo_2), QCoreApplication::translate("repair", "\346\212\245\346\215\237", nullptr));
        labelrepairday_2->setText(QCoreApplication::translate("repair", "\351\200\201\344\277\256\346\227\245\346\234\237", nullptr));
        labelrepairsid_2->setText(QCoreApplication::translate("repair", "\350\256\276\345\244\207\347\274\226\345\217\267", nullptr));
        labelrepairid_2->setText(QCoreApplication::translate("repair", "\347\273\264\344\277\256\345\215\225\345\217\267", nullptr));
        btnsearch_repair_2->setText(QCoreApplication::translate("repair", "\346\237\245\350\257\242", nullptr));
        btninsert_repair_2->setText(QCoreApplication::translate("repair", " \345\242\236\345\212\240", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tabrepairinfo_2), QCoreApplication::translate("repair", "\347\273\264\344\277\256", nullptr));
        label->setText(QCoreApplication::translate("repair", "\347\273\264\344\277\256\344\272\272\345\221\230", nullptr));
    } // retranslateUi

};

namespace Ui {
    class repair: public Ui_repair {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REPAIR_H
