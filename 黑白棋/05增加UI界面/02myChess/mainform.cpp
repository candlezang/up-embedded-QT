#include "mainform.h"
#include "ui_mainform.h"

MainForm::MainForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::MainForm)
{
    ui->setupUi(this);

    Init();
}

MainForm::~MainForm()
{
    delete ui;
}

//funciton
void MainForm::Init(){
    //05.02 把棋盘类添加到UI界面上显示
    myChess = new classChess(this);
    ui->gridLayout->addWidget(myChess);
    //05.03 接收棋盘的信号,实现处理逻辑
    connect(myChess, SIGNAL(SignalSendXY(int,int)),
            this, SLOT(doProcessGetXY(int,int)));

    QStringList list;
    list << "白" << "黑";
    ui->comboBox->addItems(list);

    ui->lbl_black->setPixmap(QPixmap("../02myChess/image/black.png"));
    ui->lbl_black->setScaledContents(true);
    ui->lbl_white->setPixmap(QPixmap("../02myChess/image/white.png"));
    ui->lbl_white->setScaledContents(true);

}

void MainForm::chessInit(){
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            chessData[i][j] = classChess::Empty;
        }
    }
    chessData[3][3] = classChess::Black;
    chessData[4][3] = classChess::White;
    chessData[3][4] = classChess::White;
    chessData[4][4] = classChess::Black;

    blackNum = whiteNum = 0;
    ui->lcd_black->display(blackNum);
    ui->lcd_white->display(whiteNum);
    if(ui->comboBox->currentText() == "白"){
        currentRole = classChess::White;
        ui->lbl_white->show();
        ui->lbl_black->hide();
    }
    else{
        currentRole = classChess::Black;
        ui->lbl_black->show();
        ui->lbl_white->hide();
    }
}
//end

//slots
void MainForm::doProcessGetXY(int x, int y){
//    qDebug() << x << y;
}
//end

//events
//05.01 改变背景
void MainForm::paintEvent(QPaintEvent *){
    QPainter painter(this);
    painter.drawPixmap(this->rect(), QPixmap("../02myChess/image/board2.jpg"));
}
//end


void MainForm::on_btn_pvp_clicked()
{
    chessInit();
    myChess->setChangeChessData(&chessData);
}
