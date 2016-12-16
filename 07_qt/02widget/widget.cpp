#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QTextEdit(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}
