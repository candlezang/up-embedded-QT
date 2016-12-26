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


void Widget::Init(){
    QCursor cursor;
    cursor.setShape(Qt::ArrowCursor);
    QApplication::setOverrideCursor(cursor);

//    setMouseTracking(true); //设置鼠标跟踪
}


void Widget::mousePressEvent(QMouseEvent *e){
    if(e->button() == Qt::LeftButton){
        //按下去变手形
        QCursor cursor;
        cursor.setShape(Qt::SizeAllCursor);
        QApplication::setOverrideCursor(cursor);

        offpoint = e->globalPos()  -  this->pos();
        qDebug() << e->globalPos();
        qDebug() << "this pos"  << this->pos();

    }
    else if(e->button() == Qt::RightButton){
        QCursor xxx(QPixmap("../05mouseEvent/bomb.png"));
        QApplication::setOverrideCursor(xxx);
    }
}


void Widget::mouseMoveEvent(QMouseEvent *e){
    //拖动鼠标变 手握
     QCursor cursor;
     cursor.setShape(Qt::ClosedHandCursor);
     QApplication::setOverrideCursor(cursor);

     QPoint tmp;
     tmp = e->globalPos()-offpoint;
     //qDebug() << tmp;
     this->move(tmp);
}
void Widget::mouseReleaseEvent(QMouseEvent *e){
    if(e->button() == Qt::LeftButton){
        //恢复原始鼠标状态
        QCursor cursor;
        cursor.setShape(Qt::ArrowCursor);
        QApplication::setOverrideCursor(cursor);
    }
}
void Widget::wheelEvent(QWheelEvent *e)
{
//    qDebug() << e->angleDelta();
//    qDebug() << e->delta();
    //qDebug() << e->x() << e->y() << endl;
    if(e->delta() < 0){
        ui->textEdit->zoomOut();
    }
    else{
        ui->textEdit->zoomIn();
    }

    //e->delta("");
  // qDebug() <<  e->delta();
}
