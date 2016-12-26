#include "mysend.h"

mySend::mySend(QObject *parent) : QObject(parent)
{

}

void mySend::PreSendMsg(QString str){
    emit SignalSendMsg(str);
}
