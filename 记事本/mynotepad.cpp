#include "mynotepad.h"
#include "ui_mynotepad.h"

myNotepad::myNotepad(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::myNotepad)
{
    ui->setupUi(this);

    Init();
    doProcessAdTimeOut();

}

myNotepad::~myNotepad()
{
    delete ui;
}


//--function
void myNotepad::Init(){
    //显示广告信息
    index = 0;
    ad = new QTimer(this);
    ad->setInterval(1000*60);
    connect(ad, SIGNAL(timeout()),
            this, SLOT(doProcessAdTimeOut()));
    ad->start();

    //创建时间 Label
    lblTime = new QLabel;
    lblTime->setMinimumSize(lblTime->sizeHint());
    //靠右边显示:第一种方式
//    ui->statusBar->setLayoutDirection(Qt::RightToLeft);
//    ui->statusBar->addWidget(lblTime);

    //靠右边显示:第二种方式
    ui->statusBar->insertWidget(0, lblTime);

    //去掉 Label 的边框
    ui->statusBar->setStyleSheet(QString("QStatusBar::item{border: 0px}"));

    //产生时间
    runTime = new QTimer(this);
    runTime->setInterval(1000);
    connect(runTime, SIGNAL(timeout()),
            this, SLOT(doProcessCurrentTimeTimeOut()));
    runTime->start();

    lblLine = new QLabel;
    ui->statusBar->insertWidget(5, lblLine, 5);

    connect(ui->actionGB18030, SIGNAL(triggered(bool)),
            this, SLOT(doProcessSelectTextCode(bool)));
    connect(ui->actionUTF_8, SIGNAL(triggered(bool)),
            this, SLOT(doProcessSelectTextCode(bool)));
    codeName.clear();

    connect(ui->action1, SIGNAL(triggered(bool)),
            this, SLOT(doProcessChangeBG(bool)));
    connect(ui->action2, SIGNAL(triggered(bool)),
            this, SLOT(doProcessChangeBG(bool)));
    connect(ui->action3, SIGNAL(triggered(bool)),
            this, SLOT(doProcessChangeBG(bool)));
    bgName.clear();


    needChangeBGSubWin = NULL;
    //查看选中的是哪个子窗体
    connect(ui->mdiArea, SIGNAL(subWindowActivated(QMdiSubWindow*)),
            this, SLOT(doProcessSubWindowActivated(QMdiSubWindow*)));

    searchWin = NULL;
    replaceWin = NULL;

    connect(ui->action16, SIGNAL(triggered(bool)),
            this, SLOT(doProcessSelectFontSize()));
    connect(ui->action30, SIGNAL(triggered(bool)),
            this, SLOT(doProcessSelectFontSize()));
    connect(ui->action60, SIGNAL(triggered(bool)),
            this, SLOT(doProcessSelectFontSize()));
    connect(ui->action72, SIGNAL(triggered(bool)),
            this, SLOT(doProcessSelectFontSize()));
    fontSize = 16;
    isAutoChangeLine = false;
}
subText *myNotepad::getActiveSubWind(){
    subText *child = NULL;
    QMdiSubWindow *subwid = ui->mdiArea->activeSubWindow();
    if(subwid == NULL){
        return child;
    }
    child = qobject_cast<subText *>(subwid->widget());
    return child;
}
//end



//--slots
void myNotepad::doProcessAdTimeOut(){
    index++;
    ui->statusBar->showMessage(QString::number(index));
}
void myNotepad::doProcessCurrentTimeTimeOut(){
    QString time = QDateTime::currentDateTime().toString("yyyy-MM-dd(dddd) hh:mm:ss:zzz");
    lblTime->setText(time);
}
void myNotepad::doProcessSignalLineMsg(QString str){
    lblLine->setText(str);
}
void myNotepad::doProcessSelectTextCode(bool){
    QAction *action = qobject_cast<QAction *>(this->sender());
    QString text = action->text();
    if(text.contains("GB")){
        codeName = "GB18030";
    }
    else{
        codeName = "UTF-8";
    }
}
void myNotepad::doProcessChangeBG(bool){
    QAction *action = qobject_cast<QAction *>(this->sender());
    QString text = action->text();
    bgName = text;
    if(needChangeBGSubWin != NULL){
        needChangeBGSubWin->ChangeBG(bgName);
    }

}
void myNotepad::doProcessSubWindowActivated(QMdiSubWindow *subwin){
    if(subwin == NULL){
        needChangeBGSubWin = NULL;
        return;
    }
    subText *child = qobject_cast<subText *>(subwin->widget());
    if(child == NULL) return;
//    qDebug() << child->windowTitle();

    //记录当前激活的子窗体
    needChangeBGSubWin = child;
}
void myNotepad::doProcessSendSearchValue(const QString searchStr, bool caseSensitive, bool isNext){
    //qDebug() << "str:" << searchStr << "case:" << caseSensitive << "next:" << isNext;

    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->SearchStr(searchStr, caseSensitive, isNext);
}
void myNotepad::doProcessSearchNextStr(const QString searchStr, bool caseSensitive){
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->SearchStr(searchStr, caseSensitive, true);
}
void myNotepad::doProcessReplaceStr(const QString searchStr, const QString replaceStr,
                                 bool caseSensitive, bool replaceAll){
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->ReplaceStr(searchStr, replaceStr, caseSensitive, replaceAll);
}
void myNotepad::doProcessSelectFontSize(){
    QAction *action = qobject_cast<QAction *>(this->sender());
    if(action == NULL) return;
    QString text = action->text();
    fontSize = text.toInt();
    //把字体大小传送到当前的激活窗体中去
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->SetFontSize(fontSize);
}
void myNotepad::on_action_AutoChangeLine_triggered(bool checked)
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->ChangeLine(checked);
}

//end

//--slots --- triggered
void myNotepad::on_action_New_triggered()
{
    subText *child = new subText();
    connect(child, SIGNAL(SignalLineMsg(QString)),
            this, SLOT(doProcessSignalLineMsg(QString)));
    child->GetTextCode(codeName);
    child->ChangeBG(bgName);
    child->SetFontSize(fontSize);
    child->NewFile();
    ui->mdiArea->addSubWindow(child);
    child->show();
}
void myNotepad::on_action_Open_triggered()
{
    subText *child = new subText();
    connect(child, SIGNAL(SignalLineMsg(QString)),
            this, SLOT(doProcessSignalLineMsg(QString)));
    child->GetTextCode(codeName);
    child->ChangeBG(bgName);
    child->SetFontSize(fontSize);
    child->OpenFile();
    ui->mdiArea->addSubWindow(child);
    child->show();
}
void myNotepad::on_action_Save_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->SaveFile();
}
void myNotepad::on_action_SaveAs_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->SaveAsFile();
}
void myNotepad::on_action_Print_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->PrintFile();

}
void myNotepad::on_action_Quit_triggered()
{
    ui->mdiArea->closeAllSubWindows();
    this->close();
}


void myNotepad::on_action_SearchNext_triggered()
{
    searchWin = new SearchDialog(this);
    connect(searchWin, SIGNAL(SignalSendSearchValue(QString,bool,bool)),
            this, SLOT(doProcessSendSearchValue(QString,bool,bool)));
    searchWin->exec();
}
void myNotepad::on_action_Replace_triggered()
{
    replaceWin = new ReplaceDialog(this);
    connect(replaceWin, SIGNAL(SignalSearchNextStr(QString,bool)),
            this, SLOT(doProcessSearchNextStr(QString,bool)));
    connect(replaceWin, SIGNAL(SignalReplaceStr(QString,QString,bool,bool)),
            this, SLOT(doProcessReplaceStr(QString,QString,bool,bool)));
    replaceWin->exec();
}


void myNotepad::on_action_Undo_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->undo();
}
void myNotepad::on_action_Redo_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->redo();
}
void myNotepad::on_action_Cut_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->cut();
}
void myNotepad::on_action_Copy_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->copy();
}
void myNotepad::on_action_Paste_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->paste();
}
void myNotepad::on_action_Delete_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->DelectSelectALL();

}
void myNotepad::on_action_SelectAll_triggered()
{
    subText *child = getActiveSubWind();
    if(child == NULL)return;
    child->SelectALL();
}


void myNotepad::on_action_Close_triggered()
{
    ui->mdiArea->closeActiveSubWindow();
}
void myNotepad::on_action_CloseAll_triggered()
{
    ui->mdiArea->closeAllSubWindows();
}
void myNotepad::on_action_Cascade_triggered()
{
    ui->mdiArea->cascadeSubWindows();
}
void myNotepad::on_action_Tile_triggered()
{
    ui->mdiArea->tileSubWindows();
}
void myNotepad::on_action_Previous_triggered()
{
    ui->mdiArea->activatePreviousSubWindow();
}
void myNotepad::on_action_Next_triggered()
{
    ui->mdiArea->activateNextSubWindow();
}


void myNotepad::on_action_About_triggered()
{
    QMessageBox::about(this, "关于软件", "ower by 张三,李四......");
}
void myNotepad::on_action_AboutQt_triggered()
{
    QMessageBox::aboutQt(this, "关于Qt");
}
//end



