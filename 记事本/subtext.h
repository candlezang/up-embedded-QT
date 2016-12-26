#ifndef SUBTEXT_H
#define SUBTEXT_H

#include <QWidget>
#include <QTextEdit>
#include <QFileDialog>
#include <QFile>
#include <QMessageBox>
#include <QTextStream>
#include <QMdiSubWindow>
#include <QDebug>
#include <QCloseEvent>
#include <QTextCodec>
#include <QPrinter>
#include <QPrintDialog>
#include <QMenu>


class subText : public QTextEdit
{
    Q_OBJECT
public:
    explicit subText(QWidget *parent = 0);
    void NewFile();
    void OpenFile();
    int SaveFile();
    void SaveAsFile();
    void GetTextCode(const QString codeName);
    void ChangeBG(const QString str);
    void PrintFile();
    void SearchStr(const QString searchStr, bool caseSensitive, bool isNext);
    void ReplaceStr(const QString searchStr, const QString replaceStr, bool caseSensitive, bool replaceAll);
    void SetFontSize(int fontSize);
    void SelectALL();
    void DelectSelectALL();
    void ChangeLine(bool);


signals:
    void SignalLineMsg(QString);


protected:
    void closeEvent(QCloseEvent *);
    void contextMenuEvent(QContextMenuEvent *);


private slots:
    void doProcessContentsChanged();
    void doProcessCursorPositionChanged();
    void doProcessDeleteSelect();


private:
    QString currentFilename;
    QFile *myFile;
    const int msgLen; //c++中用const常量替换c中的宏
    int blockNum;
    int columnNum;
    QString codeName;
    bool isFind;

};

#endif // SUBTEXT_H
