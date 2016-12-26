#ifndef MYPROCESS_H
#define MYPROCESS_H

#include <QWidget>
#include <QProcess>
#include <QFileDialog>

class myProcess : public QProcess
{
    Q_OBJECT
public:
    explicit myProcess(QWidget *parent = 0);

    void PlayOpenFile(quint64 winid);
    void PlayOrPause();
    void PlayPrevious();
    void PlayNext();
    void PlayChangeVoice(int value);

signals:

public slots:

private:
    QStringList playList;
    int playIndex;
    quint64 playWinID;


    void Init();
    int playVideo(const QString filename, quint64 winid);
};

#endif // MYPROCESS_H
