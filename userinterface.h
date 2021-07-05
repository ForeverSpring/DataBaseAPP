#ifndef USERINTERFACE_H
#define USERINTERFACE_H

#include <QWidget>

namespace Ui {
class userinterface;
}

class userinterface : public QWidget
{
    Q_OBJECT

public:
    explicit userinterface(QWidget *parent = nullptr);
    ~userinterface();

private:
    Ui::userinterface *ui;
};

#endif // USERINTERFACE_H
