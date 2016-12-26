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
}
int myProcess::playVideo(const QString filename, quint64 winid){
    int ret=0;
    this->close();
    QString mplayerPath = "/usr/bin/mplayer";
    QStringList argList;
    //播放的文件
    argList << filename;
    //指定到窗口上播放
    argList << "-wid";
    argList << QString::number(winid);
    //软件缩放
    argList << "-zoom";
    //让maplayer变为从机
    argList << "-slave";
    this->start(mplayerPath, argList);

    return ret;
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
int myProcess::PlayOrPause(){
    int ret = 0;
    if(!this->isOpen()) {
        ret = -1;
        return ret;
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
    QString cmd = QString("seek %1 1\n").arg(value);
    this->write(cmd.toUtf8());
}
//end
