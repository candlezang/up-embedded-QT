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
void myProcess::PlayOpenFile(quint64 winid){
    QFileDialog *dialog = new QFileDialog(0, "打开视频文件",
                         "/home/uplooking/视频","video(*.mp4 *.wav)");
    dialog->setAcceptMode(QFileDialog::AcceptOpen);
    dialog->setFileMode(QFileDialog::ExistingFiles);
    int ret = dialog->exec();
    if(ret !=QDialog::Accepted){
        delete dialog;
        return;
    }
    playList.clear();
    playIndex = 0;
    playWinID = winid;

    QStringList filenames = dialog->selectedFiles();
    playList = filenames;
    delete dialog;

    //调用播放函数
    playVideo(playList.at(playIndex),playWinID);
}
void myProcess::PlayOrPause(){
    if(!this->isOpen()) return;
    QString cmd = "pause\n";
    this->write(cmd.toUtf8());
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
//end
