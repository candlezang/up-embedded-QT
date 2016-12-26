#include "mylineedit.h"

myLineEdit::myLineEdit(QWidget *parent) : QLineEdit(parent)
{

}

void myLineEdit::keyPressEvent(QKeyEvent *e){
    qDebug() << "1";
    if(e->key()>=Qt::Key_0 && e->key()<=Qt::Key_9)
    {
        QLineEdit::keyPressEvent(e);
       // qDebug() << "aaaaaa";
    }
    else{
        e->ignore();
    }
}
void myLineEdit::keyReleaseEvent(QKeyEvent *e){
    qDebug() << "3\n-------------------\n";
    QLineEdit::keyReleaseEvent(e);
}


bool myLineEdit::event(QEvent *e){
    if(e->type() == QEvent::KeyPress){
        qDebug() << "2";
        //e->ignore();
    }

    else if(e->type() == QEvent::KeyRelease){
        qDebug() << "4";
    }
    QLineEdit::event(e);
}
