#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QTextEdit(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    /////////////
    //candle add
    //candle end
}

Widget::~Widget()
{
    delete ui;
}
