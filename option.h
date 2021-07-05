#ifndef OPTION_H
#define OPTION_H

#include <QWidget>

namespace Ui {
class option;
}

class option : public QWidget
{
    Q_OBJECT

public:
    explicit option(QWidget *parent = nullptr);
    ~option();

private slots:
    void on_pushButtonset_clicked();

    void on_pushButtonreset_clicked();

    void flush_text();

private:
    Ui::option *ui;
};

#endif // OPTION_H
