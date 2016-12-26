#include "mylabel.h"

myLabel::myLabel(QWidget *parent) : QLabel(parent)
{
    this->setAcceptDrops(true);
}

//---events
void myLabel::dragEnterEvent(QDragEnterEvent *e){
    e->accept();
}
void myLabel::dropEvent(QDropEvent *event){
    QList<QUrl> listfiles = event->mimeData()->urls();
    emit SignalSendPlayVideo(listfiles);
}
void myLabel::contextMenuEvent(QContextMenuEvent *e){
    QMenu *menu = new QMenu(this);
    menu->setStyleSheet("background-color: rgb(50, 100, 255);");
    QFont myFont;
    myFont.setBold(true);
    myFont.setItalic(true);
    menu->setFont(myFont);
    //打开
    QList<QAction *> actionList;
    QAction *openvideo = new QAction("打开文件", this);
    connect(openvideo, SIGNAL(triggered(bool)),
            this, SLOT(doProcessOpenVideo(bool)));
    actionList << openvideo;
    //截图
    QAction *capturePic = new QAction("截屏", this);
    connect(capturePic, SIGNAL(triggered(bool)),
            this, SLOT(doProcessCapturePicture(bool)));
    actionList << capturePic;


    menu->addActions(actionList);
    menu->exec(e->globalPos());
}
//end


//----slots
void myLabel::doProcessOpenVideo(bool){
    emit SignalOpenVideo();
}
void myLabel::doProcessCapturePicture(bool){
    emit SignalCapturePic();
}
//end
