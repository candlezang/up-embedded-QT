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
    processPlayer = new myProcess(this);
    connect(processPlayer, SIGNAL(SignalSendTimePosition(float)),
            this, SLOT(doProcessTimePosition(float)));
    connect(processPlayer, SIGNAL(SignalSendPercentPosition(int)),
            this, SLOT(doProcessPercentPosition(int)));

}

//end


//---slots
void Widget::on_btn_open_clicked()
{
    int ret = processPlayer->PlayOpenFile(ui->lbl_show->winId());
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
        processPlayer->PlaySeek(value);
    }
}
void Widget::on_horizontalSlider_sliderPressed()
{
    isPressed = true;
}

void Widget::on_horizontalSlider_sliderReleased()
{
    isPressed = false;
}


void Widget::doProcessTimePosition(float value){
    //qDebug() << value;
    int hour = value/(60*60);
    int mini = ((int)value/60)%60;
    int secn = ((int)value)%(60);
    QString str = QString("%1:%2:%3").arg(hour).arg(mini).arg(secn);
    ui->label->setText(str);
}
void Widget::doProcessPercentPosition(int value){
    ui->horizontalSlider->setValue(value);
}

//end



//---evnets
void Widget::closeEvent(QCloseEvent *e){
    processPlayer->ProcessClose();
    e->accept();
}
//end




