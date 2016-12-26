#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    this->setFocus();
    Init();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::Init(){
    lineEdit1 = new myLineEdit(this);
    lineEdit1->setText("1111");
    lineEdit1->move((this->width()-lineEdit1->width())/2,
                    (this->height()-lineEdit1->height())/2);
    lineEdit1->installEventFilter(this);

    lineEdit2 = new myLineEdit(this);
    lineEdit2->setText("222");
    lineEdit2->move((this->width()-lineEdit1->width())/2,
                    100);
    lineEdit2->installEventFilter(this);
}


void Widget::keyPressEvent(QKeyEvent *e){
//    qDebug() << "主窗体: press ";
    if(e->modifiers() == Qt::ControlModifier){
        if(e->key() == Qt::Key_M){
            this->setWindowState(Qt::WindowFullScreen);
        }
        else{
            this->setWindowState(Qt::WindowNoState);
        }
    }
}
void Widget::keyReleaseEvent(QKeyEvent *){

}


bool Widget::eventFilter(QObject *obj, QEvent *e){
    QLineEdit *ledit = qobject_cast<QLineEdit *>(obj);

    if(ledit == lineEdit1){
        if(e->type() == QEvent::KeyRelease){
             qDebug() << "lineEdit1";
        }
    }

    else if(ledit == lineEdit2){
       if(e->type() == QEvent::KeyRelease){
           qDebug() << "lineEdit2";
       }
    }


}
