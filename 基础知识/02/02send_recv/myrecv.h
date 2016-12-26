#ifndef MYRECV_H
#define MYRECV_H

#include <QObject>

class myRecv : public QObject
{
    Q_OBJECT
public:
    explicit myRecv(QObject *parent = 0);

public slots:
    void doProcessSendMsg(QString);
};

#endif // MYRECV_H
