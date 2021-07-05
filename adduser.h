#ifndef ADDUSER_H
#define ADDUSER_H

#include <QWidget>

namespace Ui {
class adduser;
}

class adduser : public QWidget
{
    Q_OBJECT

public:
    explicit adduser(QWidget *parent = nullptr);
    ~adduser();

private slots:
    void on_btn_ensure_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::adduser *ui;
};

#endif // ADDUSER_H
