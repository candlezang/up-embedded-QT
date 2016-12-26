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
    processPlayer->PlayOpenFile(ui->lbl_show->winId());
}
void Widget::on_btn_previous_clicked()
{
    processPlayer->PlayPrevious();
}
void Widget::on_btn_play_clicked()
{
    processPlayer->PlayOrPause();
}

void Widget::on_btn_next_clicked()
{
    processPlayer->PlayNext();
}
void Widget::on_dial_valueChanged(int value)
{
    processPlayer->PlayChangeVoice(value);
}
//end



//---evnets
void Widget::closeEvent(QCloseEvent *e){
    processPlayer->close();
    e->accept();
}
//end


