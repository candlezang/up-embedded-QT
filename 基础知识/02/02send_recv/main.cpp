#include "mysend.h"
#include "myrecv.h"

int main(){
    //创建产生者
    mySend *send01 = new mySend();
    //创建接收者
    myRecv *recv01 = new myRecv();
    //绑定信号
    QObject::connect(send01, SIGNAL(SignalSendMsg(QString)),
                     recv01, SLOT(doProcessSendMsg(QString)));
    //测试发射信号
    send01->PreSendMsg("测试发射信号");

    return 0;
}
