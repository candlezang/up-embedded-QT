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

//---funciton
void Widget::Init(){
    isPlay = false;
    isSlent = false;
    isPressed = false;
    playSeek = 0;

    processPlayer = new myProcess(this);
    connect(processPlayer, SIGNAL(SignalSendTimePosition(float)),
            this, SLOT(doProcessTimePosition(float)));
    connect(processPlayer, SIGNAL(SignalSendPercentPosition(int)),
            this, SLOT(doProcessPercentPosition(int)));

    labelPlayer = new myLabel(this);
    labelPlayer->setStyleSheet("background-color: rgb(0,0,0);");
    labelPlayer->setGeometry(1,1,564,331);
    ui->gridLayout->addWidget(labelPlayer);
    connect(labelPlayer, SIGNAL(SignalSendPlayVideo(QList<QUrl>)),
            this, SLOT(doProcessDragPlayVideo(QList<QUrl>)));
    connect(labelPlayer, SIGNAL(SignalOpenVideo()),
            this, SLOT(on_btn_open_clicked()));
    connect(labelPlayer, SIGNAL(SignalCapturePic()),
            this, SLOT(doProcessCapturePic()));

}

//end


//---slots
void Widget::on_btn_open_clicked()
{
    int ret = processPlayer->PlayOpenFile(labelPlayer->winId());
    if(ret >= 0 )
    {
        isPlay = true;
        //切换播放按钮为暂停提示
        ui->btn_play->setIcon(QIcon(":/new/prefix1/images/pause.png"));
    }
}
void Widget::on_btn_previous_clicked()
{
    processPlayer->PlayPrevious();
}
void Widget::on_btn_play_clicked()
{
    int ret = processPlayer->PlayOrPause(isPlay);
    if(ret < 0) return;
    //播放中, 准备暂停提示
    if(isPlay){
        isPlay = false;
        ui->btn_play->setIcon(QIcon(":/new/prefix1/images/play.png"));
        }
    //暂停中,准备播放提示
    else{
        isPlay = true;
        ui->btn_play->setIcon(QIcon(":/new/prefix1/images/pause.png"));
    }
}
void Widget::on_btn_next_clicked()
{
    processPlayer->PlayNext();
}
void Widget::on_dial_valueChanged(int value)
{
    processPlayer->PlayChangeVoice(value);
}
void Widget::on_btn_voice_clicked()
{
    int ret = processPlayer->PlaySetSilent(isSlent);
    if(ret < 0) return;
    //已经处于静音状态
    if(isSlent){
        isSlent = false;
        ui->btn_voice->setIcon(QIcon(":/new/prefix1/images/voice.png"));

    }
    //非静音状态
    else{
        isSlent = true;
        ui->btn_voice->setIcon(QIcon(":/new/prefix1/images/silent.png"));
    }
}
void Widget::on_horizontalSlider_valueChanged(int value)
{
    if(isPressed){
//        processPlayer->PlaySeek(value);
        playSeek = value;
//        qDebug() << playSeek;
    }
}
void Widget::on_horizontalSlider_sliderPressed()
{
    isPressed = true;
}

void Widget::on_horizontalSlider_sliderReleased()
{
    isPressed = false;
    processPlayer->PlaySeek(playSeek);
}


void Widget::doProcessTimePosition(float value){
    int hour = value/(60*60);
    int mini = ((int)value/60)%60;
    int secn = ((int)value)%(60);
    QString str = QString("%1:%2:%3").arg(hour).arg(mini).arg(secn);
    ui->label->setText(str);
}
void Widget::doProcessPercentPosition(int value){
    if(!isPressed){
        ui->horizontalSlider->setValue(value);
    }
}
void Widget::doProcessDragPlayVideo(QList<QUrl> listFiles){
    QStringList playList;
    for(int i=0; i<listFiles.count(); i++){
        QUrl url = listFiles.at(0);
        QString str = url.toLocalFile();
        playList << str;
    }
    processPlayer->SetPlayList(playList);
    processPlayer->PlayDragVideo(labelPlayer->winId());
}
void Widget::doProcessCapturePic(){
    processPlayer->PlayCapturePic("");
}
//end



//---evnets
void Widget::closeEvent(QCloseEvent *e){
    processPlayer->ProcessClose();
    e->accept();
}
//end




