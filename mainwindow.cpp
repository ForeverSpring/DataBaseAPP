#include "mainwindow.h"
#include "ui_mainwindow.h"
QString MainWindow::INIhostname="127.0.0.1",MainWindow::INIDBname="dms";
int MainWindow::INIport=3306;
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

