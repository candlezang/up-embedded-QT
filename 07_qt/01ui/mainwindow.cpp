#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

  //  ui->action->setIcon(QIcon("/home/candle/c_languae/20160919/Qt/07_qt/01ui/images1/new.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}
