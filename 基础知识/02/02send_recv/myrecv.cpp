#include "myrecv.h"
#include <QDebug>

myRecv::myRecv(QObject *parent) : QObject(parent)
{

}

void myRecv::doProcessSendMsg(QString str){
    qDebug() <<"接收者收到的数据为:" << str << endl;
}
