#include "myprocess.h"

myProcess::myProcess(QWidget *parent) : QProcess(parent)
{
    Init();
}


//---function
//private
void myProcess::Init(){
    playList.clear();
    playIndex = 0;
    connect(this, SIGNAL(readyRead()),
            this, SLOT(doProcessReadyRead()));

    myTimer = new QTimer(this);
    connect(myTimer, SIGNAL(timeout()),
            this, SLOT(doProcessTimeout()));
}
int myProcess::playVideo(const QString filename, quint64 winid){
    int ret=0;
    this->close();
    if(myTimer->isActive())
        myTimer->stop();
    QString mplayerPath = "/usr/bin/mplayer";
    QStringList argList;
    //播放的文件
    argList << filename;
    //指定到窗口上播放
    argList << "-wid";
    argList << QString::number(winid);
    //软件缩放
    argList << "-zoom";
    //让mplayer变为从机
    argList << "-slave";
    //让mplayer 变为 静默 模式
    argList << "-quiet";
    this->start(mplayerPath, argList, QIODevice::ReadWrite);
    myTimer->start(1000*1);
    return ret;
}
void myProcess::PlayLoop(){
    //播放下一首
    if(playIndex >= playList.count() -1){
        playIndex = 0;
    }
    else{
        playIndex++;
    }
    playVideo(playList.at(playIndex), playWinID);
}


//public
int myProcess::PlayOpenFile(quint64 winid){
    int ret = 0;
    QFileDialog *dialog = new QFileDialog(0, "打开视频文件",
                         "/home/uplooking/视频","video(*.mp4 *.wav)");
    dialog->setAcceptMode(QFileDialog::AcceptOpen);
    dialog->setFileMode(QFileDialog::ExistingFiles);
    ret = dialog->exec();
    if(ret !=QDialog::Accepted){
        delete dialog;
        ret = -1;
        return ret;
    }
    playList.clear();
    playIndex = 0;
    playWinID = winid;

    QStringList filenames = dialog->selectedFiles();
    playList = filenames;
    delete dialog;

    //调用播放函数
    ret = playVideo(playList.at(playIndex),playWinID);
    return ret;
}
int myProcess::PlayOrPause(bool isPlay){
    int ret = 0;
    if(!this->isOpen()) {
        ret = -1;
        return ret;
    }
    if(!isPlay){
        myTimer->stop();
    }
    QString cmd = "pause\n";
    this->write(cmd.toUtf8());
    return ret;
}
void myProcess::PlayPrevious(){
    if(!this->isOpen()) return;
    if(playIndex != 0){
        playIndex --;
    }
    playVideo(playList.at(playIndex),playWinID);
}
void myProcess::PlayNext(){
    if(!this->isOpen()) return;
    if(playIndex != playList.count()-1){
        playIndex ++;
    }
    playVideo(playList.at(playIndex),playWinID);
}
void myProcess::PlayChangeVoice(int value){
    if(!this->isOpen()) return;
    QString cmd = QString("volume %1 1\n").arg(value);
    this->write(cmd.toUtf8());
}
int myProcess::PlaySetSilent(bool isSilent){
    int ret = 0;
    if(!this->isOpen()) {
        ret = -1;
        return ret;
    }
    QString cmd;
    if(isSilent){
        cmd = "mute 0\n";
        ret = 0;
    }
    else{
        cmd = "mute 1\n";
        ret = 1;
    }
    this->write(cmd.toUtf8());
    return ret;

}
void myProcess::PlaySeek(int value){
    if(!this->isOpen())return;
    QString cmd = QString("seek %1 1\n").arg(value);
    this->write(cmd.toUtf8());
}
void myProcess::ProcessClose(){
    disconnect(myTimer, SIGNAL(timeout()), this, SLOT(doProcessTimeout()));
    disconnect(this, SIGNAL(readyRead()), this, SLOT(doProcessReadyRead()));
    myTimer->stop();
    this->close();
}
//end


//----slots
void myProcess::doProcessTimeout(){
    //取得百分比表示的进度 and 取得时间进度
    if(myTimer->isActive()){
        //QString cmd1 = "get_percent_pos\n";
        //this->write(cmd1.toUtf8());
        //QTest::qWait(500);
        if(!this->isOpen()) return;
        QString cmd2 = "get_time_pos\n";
        this->write(cmd2.toUtf8());
    }
}
void myProcess::doProcessReadyRead(){
    QString str = this->readAll();
    //取得时间进度
    if(str.contains("ANS_TIME_POSITION")){
        str.replace("\n", "");
        //qDebug() << "str:" << str;
        QString var = str.split("=").at(1);
        //qDebug() << "ssssss:" << var;
        float timePosition = var.toFloat();
        emit SignalSendTimePosition(timePosition);
    }
    //取得百分比表示的进度
    else if(str.contains("ANS_PERCENT_POSITION")){
        str.replace("\n", "");
        str.replace("\n", "");
        QString var = str.split("=").at(1);
        int percentPosition = var.toInt();
        emit SignalSendPercentPosition(percentPosition);
    }
    else if(str.contains("Exiting")){
        PlayLoop();
    }
}
void myProcess::doProcessFinished(int){
    PlayLoop();
}
//end
