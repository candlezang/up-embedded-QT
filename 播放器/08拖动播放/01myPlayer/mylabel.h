#ifndef MYLABEL_H
#define MYLABEL_H

#include <QWidget>
#include <QLabel>
#include <QDragEnterEvent>
#include <QDropEvent>
#include <QMimeData>
#include <QContextMenuEvent>
#include <QMenu>
#include <QDebug>

class myLabel : public QLabel
{
    Q_OBJECT
public:
    explicit myLabel(QWidget *parent = 0);

signals:
    void SignalSendPlayVideo(QList<QUrl>);
    void SignalOpenVideo();
    void SignalCapturePic();


private slots:
    void doProcessOpenVideo(bool);
    void doProcessCapturePicture(bool);


protected:
    void dragEnterEvent(QDragEnterEvent *);
    void dropEvent(QDropEvent *);
    void contextMenuEvent(QContextMenuEvent *);
};

#endif // MYLABEL_H
