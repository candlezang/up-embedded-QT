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
    }
    else{
        currentRole = classChess::Black;
    }
    setDownChess();
}
/*********************************************************************
* 功能：
*     黑白棋吃子规则
* 参数：
*    x, y: 棋盘数组坐标位置
*     chess：棋子状态
*     currentRole：ChessWidget类中枚举变量,enum GblackNumridState{Empty,Black, White }
*     eatChess: true代表吃子，false只是判断有子可吃，默认为true
* 返回值：
*    能吃子的个数
***********************************************************************/
int MainForm::judgeRule(int x, int y, void *chess, classChess::cheesType currentRole,bool eatChess)
{
    // 棋盘的八个方向
    int dir[8][2]={{1,0},{1,-1},{0,-1},{-1,-1},{-1,0},{-1,1},{0,1},{1,1}};
    int temp_x = x, temp_y = y;             // 临时保存棋盘数组坐标位置
    int i = 0, eatNum = 0;                  // 初始化数据
    typedef int (*p)[8];             // 自定义类型
    p chessFlag = p(chess);                // 类型转换

    if(chessFlag[temp_x][temp_y] != classChess::Empty)  // 如果此方格内已有棋子，返回;
        return 0;
    // 棋盘的8个方向
    for(i = 0 ; i <8; i++)
    {
        temp_x += dir[i][0]; temp_y += dir[i][1];	// 准备判断相邻棋子
        // 如果没有出界，且相邻棋子是对方棋子，才有吃子blackNum的可能．
        if((temp_x < 8 && temp_x >=0 && temp_y < 8 && temp_y >= 0)
            && (chessFlag[temp_x][temp_y] != currentRole) && (chessFlag[temp_x][temp_y] != classChess::Empty) )
        {
            temp_x += dir[i][0]; temp_y += dir[i][1];	            // 继续判断下一个，向前走一步
            while(temp_x < 8 && temp_x >=0 && temp_y < 8 && temp_y >= 0)
            {
                if(chessFlag[temp_x][temp_y] == classChess::Empty) // 遇到空位跳出
                        break;
                if(chessFlag[temp_x][temp_y] == currentRole)       // 找到自己的棋子，代表可以吃子
                {
                    if(eatChess == true)                            // 确定吃子
                    {
                        chessFlag[x][y] = currentRole;          // 开始点标志为自己的棋子
                        temp_x -= dir[i][0]; temp_y -= dir[i][1];// 后退一步
                        while((temp_x != x )||(temp_y != y))	 // 只要没有回到开始的位置就执行
                        {
                            chessFlag[temp_x][temp_y] = currentRole;   // 标志为自己的棋子
                            temp_x -= dir[i][0]; temp_y -= dir[i][1];   // 继续后退一步
                            eatNum++;  // 累计
                        }
                    }
                    else    // 不吃子，只是判断这个位置能不能吃子
                    {
                        temp_x -= dir[i][0]; temp_y -= dir[i][1];   // 后退一步
                        while((temp_x != x )||(temp_y != y))        // 只计算可以吃子的个数
                        {
                            temp_x -= dir[i][0]; temp_y -= dir[i][1];// 继续后退一步
                            eatNum ++;
                        }
                    }
                    break;  // 跳出循环
                }// 没有找到自己的棋子，就向前走一步
                temp_x += dir[i][0]; temp_y += dir[i][1];   // 向前走一步
            }
        }// 如果这个方向不能吃子，就换一个方向
        temp_x = x; temp_y = y;
    }

    return eatNum;              // 返回能吃子的个数
}
void MainForm::setDownChess(){
    if(currentRole == classChess::White){
        ui->lbl_white->show();
        ui->lbl_black->hide();
    }
    else{
        ui->lbl_black->show();
        ui->lbl_white->hide();
    }
}
void MainForm::getChessNumber(){
    whiteNum = blackNum = 0;
    for(int i=0; i<8; i++){
        for(int j=0; j<8; j++){
            if(chessData[i][j] == classChess::White){
                whiteNum++;
            }
            else if(chessData[i][j] == classChess::Black){
                blackNum++;
            }
        }
    }
    ui->lcd_black->display(blackNum);
    ui->lcd_white->display(whiteNum);
}
//end

//slots
void MainForm::doProcessGetXY(int x, int y){
//    qDebug() << x << y;
    int num = judgeRule(x, y, chessData, currentRole, true);
    if(num > 0){
        //通知棋盘,改变棋盘显示数据
        myChess->setChangeChessData(chessData);
        if(currentRole == classChess::White){
            currentRole = classChess::Black;
        }
        else{
            currentRole = classChess::White;
        }

        //改变当前显示谁下子
        setDownChess();

        //显示各方子的数量
        getChessNumber();
    }
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
    //05.04 开始初始化棋盘
    chessInit();
    myChess->setChangeChessData(&chessData);
}
