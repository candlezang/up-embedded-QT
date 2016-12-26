#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    Init();
}

Widget::~Widget()
{
    delete ui;
}

//---funciton
void Widget::Init(){
    processPlayer = new myProcess(this);

}
//end


//---slots
void Widget::on_btn_open_clicked()
{
    processPlayer->OpenFile(ui->lbl_show->winId());
}
//end
