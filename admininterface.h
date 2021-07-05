#ifndef ADMININTERFACE_H
#define ADMININTERFACE_H

#include <QWidget>

namespace Ui {
class admininterface;
}

class admininterface : public QWidget
{
    Q_OBJECT

public:
    explicit admininterface(QWidget *parent = nullptr);
    ~admininterface();

private slots:
    void on_btnsearch_s_clicked();

    void on_btndelete_s_clicked();

    void on_btnreport_s_clicked();

    void on_btnrevert_s_clicked();

    void on_btninsert_s_clicked();

    void on_btnsearch_store_clicked();

    void on_btninsert_store_clicked();

    void on_btndelete_store_clicked();

    void on_btnreport_store_clicked();

    void on_btnrevert_store_clicked();

    void on_btnsearch_use_clicked();

    void on_btninsert_use_clicked();

    void on_btndelete_use_clicked();

    void on_btnreport_use_clicked();

    void on_btnrevert_use_clicked();

    void on_btnsearch_buy_clicked();

    void on_btninsert_buy_clicked();

    void on_btndelete_buy_clicked();

    void on_btnreport_buy_clicked();

    void on_btnrevert_buy_clicked();

    void on_btnsearch_report_clicked();

    void on_btninsert_report_clicked();

    void on_btndelete_report_clicked();

    void on_btnreport_report_clicked();

    void on_btnrevert_report_clicked();

    void on_btnsearch_repair_clicked();

    void on_btninsert_repair_clicked();

    void on_btndelete_repair_clicked();

    void on_btnreport_repair_clicked();

    void on_btnrevert_repair_clicked();

    void on_btnsearch_User_clicked();

    void on_btninsert_User_clicked();


    void on_btndelete_User_clicked();

private:
    Ui::admininterface *ui;
};

#endif // ADMININTERFACE_H
