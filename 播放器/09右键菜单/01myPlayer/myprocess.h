#ifndef MYPROCESS_H
#define MYPROCESS_H

#include <QWidget>
#include <QProcess>
#include <QFileDialog>
#include <QTimer>
#include <QTest>
#include <QDebug>

class myProcess : public QProcess
{
    Q_OBJECT
public:
    explicit myProcess(QWidget *parent = 0);

    int PlayOpenFile(quint64 winid);
    int PlayOrPause(bool isPlay);
    void PlayPrevious();
    void PlayNext();
    void PlayChangeVoice(int value);
    int PlaySetSilent(bool isSilent);
    void PlaySeek(int value);
    void ProcessClose();
    void SetPlayList(QStringList listFiles);
    int PlayDragVideo(quint64 winid);
    void PlayCapturePic(const QString filename);


signals:
    void SignalSendTimePosition(float time);
    void SignalSendPercentPosition(int percent);

private slots:
    void doProcessTimeout();
    void doProcessReadyRead();
    void doProcessFinished(int);

private:
    QStringList playList;
    int playIndex;
    quint64 playWinID;
    QTimer *myTimer; //百分比表示的进度
    bool isPlay;
    bool isSilent;



    void Init();
    int playVideo(const QString filename, quint64 winid);
    void PlayLoop(); //循环播放
};

#endif // MYPROCESS_H
