#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>
#include "subtext.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ConnectInit();
  //  ui->action->setIcon(QIcon("/home/candle/c_languae/20160919/Qt/07_qt/01ui/images1/new.png"));
}

MainWindow::~MainWindow()
{
    delete ui;
}

//-------------------------function--------------
//public
/* ConnectInit 用于绑定信号的初始化函数
 */
void MainWindow::ConnectInit()
{
    connect(ui->action_new,SIGNAL(triggered(bool)),this,
            SLOT(SlotTriggeredActionNew(bool)));

    QFont  font;
    font.setBold(true);
    font.setItalic(true);
    //font.setWeight(20);
    font.setPointSize(20);
    ui->action_new->setFont(font);
   // ui->action_new

    //ui->action_new->set

}

//--------------------------end--------------------

//--------------------------event----------------------
//----------------------------end------------------------


//--------------------------slot-------------------------
//当触发新建文件 按钮，在当前的对象中创建一个subtext类
void MainWindow::SlotTriggeredActionNew(bool)
{
    qDebug() << "SlotTrige";
    subtext   * text = new subtext(this);
    ui->mdiArea->addSubWindow(text);
    //ui->gridLayout->addWidget(text);
    text->subTextInit();
    text->show();


}

//--------------------------end--------------------------

