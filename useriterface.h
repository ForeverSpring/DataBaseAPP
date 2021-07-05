#ifndef USERITERFACE_H
#define USERITERFACE_H

#include <QWidget>

namespace Ui {
class useriterface;
}

class useriterface : public QWidget
{
    Q_OBJECT

public:
    explicit useriterface(QWidget *parent = nullptr);
    ~useriterface();

private:
    Ui::useriterface *ui;
};

#endif // USERITERFACE_H
