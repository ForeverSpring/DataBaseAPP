#ifndef SERVEROPTION_H
#define SERVEROPTION_H

#include <QWidget>

namespace Ui {
class ServerOption;
}

class ServerOption : public QWidget
{
    Q_OBJECT

public:
    explicit ServerOption(QWidget *parent = nullptr);
    ~ServerOption();

private slots:
    void on_pushButtonreset_clicked();

    void on_pushButtonset_clicked();

private:
    Ui::ServerOption *ui;
};

#endif // SERVEROPTION_H
