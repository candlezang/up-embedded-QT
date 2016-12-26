#ifndef MYSEND_H
#define MYSEND_H

#include <QObject>

class mySend : public QObject
{
    Q_OBJECT
public:
    explicit mySend(QObject *parent = 0);
    void PreSendMsg(QString); //供给外部调用,而发送信号

signals:
    void SignalSendMsg(QString); //自定义一个信号/事件 (信号不需要实现,而槽一定要实现)
};

#endif // MYSEND_H
