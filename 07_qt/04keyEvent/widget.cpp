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

//按下M时候 全屏显示   按下N时候 回到正常
void Widget::keyPressEvent(QKeyEvent * event)
{
    //qDebug() << "keyPressEvent     "  << event->key();
    //char a = 'A';
   // int b = a;
//    qDebug() << b;
//    if(event->key() == 'M') {
//        this->showFullScreen();
//    } else if(event->key() == 'N') {
//        this->showNormal();
//    }

    //if(event->key() == Qt::Key_M)
     //   this->showFullScreen();
     
    //按下ctrl+M 全屏   按下alt+N 缩小
    //Qt::KeyboardModifiers	modifiers() const  返回值来判断
    if(event->modifiers() ==Qt::ControlModifier ) {
        if(event->key() == Qt::Key_M) {
            this->showFullScreen();
        }

        //if(event->key())
        //任何可编辑控件都实现了  ctrl+c crtl+v ..........
        //如果你想重定义 编译控件的快捷键功能，必须重新定义类
        if(event->key() == Qt::Key_C) {
            if(ui->lineEdit->hasFocus()) {
                ui->lineEdit->clear();
            }

            if(ui->lineEdit_2->hasFocus()) {
                ui->lineEdit_2->clear();
            }


        }


    } else if(event->modifiers() == Qt::AltModifier) {
        if(event->key() == Qt::Key_N) {
            this->showNormal();
        }
    }

   // QTextEdit

}



void Widget::keyReleaseEvent(QKeyEvent * event)
{
   //qDebug() << "keyReleaseEvent  " << event->key();

  // if(event->key() == Qt::Key_N)
  //     this->showNormal();
}


//当滚轮滚到最高位置，再往上 滚动，放大字体
//当滚轮滚到最低位置，再往下滚动，缩小字体
void Widget::wheelEvent(QWheelEvent * event)
{
    //qDebug() << event->pixelDelta();
    //qDebug() << event->angleDelta();
   qDebug() << event->delta();

        if(event->delta() > 0) {
            ui->textEdit->zoomIn();
        } else if(event->delta() < 0) {
            ui->textEdit->zoomOut();
        }
}




