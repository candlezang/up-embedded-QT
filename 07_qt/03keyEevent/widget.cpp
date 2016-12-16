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

void Widget::mousePressEvent(QMouseEvent * event)
{
      if(event->button() == Qt::LeftButton ) {
          //用于设置鼠标的图标
          //一种用系统默认的鼠标
          //也可以自己加载
          //左击 更改鼠标图标为系统图标
          //右击  更改鼠标图标为自定义图标
          QCursor  cursor;
          cursor.setShape(Qt::OpenHandCursor);
          QApplication::setOverrideCursor(cursor);

          point = event->globalPos() - this->pos();

      } else if(event->button() == Qt::RightButton ) {
          QCursor cursor(QPixmap(QString("/home/candle/图片/images1/mob.png")));
          QApplication::setOverrideCursor(cursor);
      }

    qDebug() << "global POS" << event->globalPos();
    qDebug() << "this  pos" << this->pos();


}

//鼠标松开时候  鼠标图标改成默认的
void Widget::mouseReleaseEvent(QMouseEvent * event)
{
    event = event;
    QCursor  cursor;
    cursor.setShape(Qt::ArrowCursor);
    QApplication::setOverrideCursor(cursor);
}

//左击 鼠标变成手型，拖拽鼠标，窗口空间 跟着鼠标一起移动
//
void Widget::mouseMoveEvent(QMouseEvent * event)
{
     this->pos();
    event->globalPos();
    QPoint currentPoint = event->globalPos() - point;

    this->move(currentPoint);
    qDebug() << event->button();

}

