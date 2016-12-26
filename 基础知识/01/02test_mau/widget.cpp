#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_login_clicked()
{

    QString name = ui->ledit_name->text();
    QString passwd = ui->ledit_passwd->text();
    if(name == passwd){
        qDebug() << "登录成功!";
    }
}


