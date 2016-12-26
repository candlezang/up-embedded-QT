#include "widget.h"
#include "ui_widget.h"

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


void Widget::keyPressEvent(QKeyEvent *e){
    int key = e->key();
    switch (key) {
    case Qt::Key_Left:
        ui->pushButton->move(ui->frame->width()/2-ui->pushButton->width()*2, ui->pushButton->y());
        break;
    case Qt::Key_Right:
        ui->pushButton->move(ui->frame->width()/2+10, ui->pushButton->y());
        break;
    case Qt::Key_Up:
        ui->pushButton->move(ui->pushButton->x(), ui->frame_2->height()/2-ui->pushButton->height()-10);
        break;
    case Qt::Key_Down:
        ui->pushButton->move(ui->pushButton->x(), ui->frame_2->height()/2+10);

        break;
    }
}
