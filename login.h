#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>

namespace Ui {
class login;
}

class login : public QWidget
{
    Q_OBJECT

public:
    explicit login(QWidget *parent = nullptr);
    ~login();

private slots:
    void on_btn_login_clicked();

    void on_btn_option_clicked();

    void on_btn_exit_clicked();

    void open_interface(QString usertype);
private:
    QString account;
    int id;
    Ui::login *ui;
};

#endif // LOGIN_H
