#ifndef MYNOTEPAD_H
#define MYNOTEPAD_H

#include <QMainWindow>
#include <QTimer>
#include <QLabel>
#include <QDateTime>
#include <QDebug>


#include "subtext.h"
#include "searchdialog.h"
#include "replacedialog.h"


namespace Ui {
class myNotepad;
}

class myNotepad : public QMainWindow
{
    Q_OBJECT

public:
    explicit myNotepad(QWidget *parent = 0);
    ~myNotepad();

private:
    Ui::myNotepad *ui;
    QTimer *ad;
    int index;

    QTimer *runTime;
    QLabel *lblTime;

    QLabel *lblLine;
    QString codeName;
    QString bgName;
    subText *needChangeBGSubWin;
    SearchDialog *searchWin;
    ReplaceDialog *replaceWin;
    int fontSize;
    bool isAutoChangeLine;


    void Init();
    subText *getActiveSubWind();


private slots:
    void doProcessAdTimeOut();
    void doProcessCurrentTimeTimeOut();
    void doProcessSignalLineMsg(QString);
    void doProcessSelectTextCode(bool);
    void doProcessChangeBG(bool);
    void doProcessSubWindowActivated(QMdiSubWindow *subwin);
    void doProcessSendSearchValue(const QString searchStr, bool caseSensitive, bool isNext);
    void doProcessSearchNextStr(const QString searchStr, bool caseSensitive);
    void doProcessReplaceStr(const QString searchStr, const QString replaceStr, bool caseSensitive, bool replaceAll);
    void doProcessSelectFontSize();


    void on_action_New_triggered();
    void on_action_Open_triggered();
    void on_action_Save_triggered();
    void on_action_SaveAs_triggered();
    void on_action_Quit_triggered();
    void on_action_About_triggered();
    void on_action_AboutQt_triggered();
    void on_action_Undo_triggered();
    void on_action_Redo_triggered();
    void on_action_Cut_triggered();
    void on_action_Copy_triggered();
    void on_action_Paste_triggered();
    void on_action_Delete_triggered();
    void on_action_SelectAll_triggered();
    void on_action_Print_triggered();
    void on_action_Replace_triggered();
    void on_action_SearchNext_triggered();
    void on_action_Close_triggered();
    void on_action_CloseAll_triggered();
    void on_action_Cascade_triggered();
    void on_action_Tile_triggered();
    void on_action_Previous_triggered();
    void on_action_Next_triggered();
    void on_action_AutoChangeLine_triggered(bool checked);
};

#endif // MYNOTEPAD_H
