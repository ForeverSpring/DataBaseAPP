#ifndef BUYINTERFACE_H
#define BUYINTERFACE_H

#include <QWidget>

namespace Ui {
class buyinterface;
}

class buyinterface : public QWidget
{
    Q_OBJECT

public:
    explicit buyinterface(QWidget *parent = nullptr);
    ~buyinterface();

private:
    Ui::buyinterface *ui;
};

#endif // BUYINTERFACE_H
