#include "classchess.h"

classChess::classChess(QWidget *parent)
    : QWidget(parent), gridNumber(10), chessGridNumber(8)
{
    Init();
    //chessInit();
}

classChess::~classChess()
{

}
//--function
void classChess::Init(){
    gridWidth = gridHeigth = 0;
    bgName = "../02myChess/image/background.jpg";
    gridLineColor = Qt::red;
    gridLineStyle = Qt::SolidLine;
    gridLineWidth = 3;
}
//02.02 初始化棋盘数据
void classChess::chessInit(){
    for(int i=0; i<chessGridNumber; i++){
        for(int j=0; j<chessGridNumber; j++){
            chessData[i][j] = Empty;
        }
    }
    chessData[3][3] = Black;
    chessData[4][3] = White;
    chessData[3][4] = White;
    chessData[4][4] = Black;
}

//01.04 提供改变棋盘(背景,格子)的公共方法
int classChess::setChangeBG(const QString bgName){
    int ret = 0;
    this->bgName = bgName;
    //通知画家 画图
    this->update();
    return ret;
}
//01.04 提供改变棋盘(背景,格子)的公共方法
int classChess::setChangeGrid(QColor col, Qt::PenStyle style, int width){
    int ret = 0;
    gridLineColor = col;
    gridLineStyle = style;
    gridLineWidth = width;
    //通知画家 画图
    this->update();
    return ret;
}
//04.02 改变棋盘数据
int classChess::setChangeChessData(void *p){
    int ret = 0;
    memcpy(chessData, p, sizeof(int)*8*8);
    //通知画家 画图
    this->update();
    return ret;
}

//end

//--evnets
void classChess::paintEvent(QPaintEvent *){
    QPainter painter(this);
    //01.02 画背景
    painter.drawPixmap(this->rect(), QPixmap(bgName));

    QPen pen;
    pen.setColor(gridLineColor);
    pen.setWidth(gridLineWidth);
    pen.setStyle(gridLineStyle);
    painter.setPen(pen);
    //01.03 画棋盘
    for(int i=1; i<=chessGridNumber+1; i++){
        //x轴方向
        painter.drawLine(gridWidth,i*gridHeigth, 9*gridWidth, i*gridHeigth);
        //y轴方向
        painter.drawLine(i*gridWidth, gridHeigth, i*gridWidth, 9*gridHeigth);
    }

    //02.01 画棋子
    for(int i=0; i<chessGridNumber; i++){
        for(int j=0; j<chessGridNumber; j++){
            QString chessName;
            if(chessData[i][j] == White){
                chessName = "../02myChess/image/white.png";
            }
            else if(chessData[i][j] == Black){
                chessName = "../02myChess/image/black.png";
            }
            else{
                chessName.clear();
            }
            painter.drawPixmap((i+1)*gridWidth, (j+1)*gridHeigth, gridWidth, gridHeigth,
                               QPixmap(chessName));
        }
    }

}
void classChess::resizeEvent(QResizeEvent *event){
    //01.01 获取单个格子的宽高
    QSize size = event->size();
    gridWidth = size.width()/gridNumber;
    gridHeigth = size.height()/gridNumber;
    qDebug() << gridWidth << gridHeigth;
}

//03.01 确认鼠标点击的位置,更改为黑白棋
void classChess::mousePressEvent(QMouseEvent *event){
    int x = event->x();
    int y = event->y();
    //判断是否在格子内
    //y and x
    if((y>=gridHeigth && y<=9*gridHeigth) && (x>=gridWidth && x<=9*gridWidth)){
        //精确点击的位置,所属数组的坐标
         int i = x/gridWidth -1;
         int j = y/gridHeigth -1;
         chessData[i][j] = Black;
//         //通知画家 画图
//         this->update();
         //04.01 发射信号,把坐标告诉主窗体
         emit SignalSendXY(i, j);
         //qDebug() << i << j;
    }
}
//end



