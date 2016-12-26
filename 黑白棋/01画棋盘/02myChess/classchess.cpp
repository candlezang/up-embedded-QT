#include "classchess.h"

classChess::classChess(QWidget *parent)
    : QWidget(parent), gridNumber(10)
{
    Init();

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

//01.04 提供改变棋盘(背景,格子)的公共方法
int classChess::setChangeBG(const QString bgName){
    int ret = 0;
    this->bgName = bgName;
    return ret;
}
//01.04 提供改变棋盘(背景,格子)的公共方法
int classChess::setChangeGrid(QColor col, Qt::PenStyle style, int width){
    int ret = 0;
    gridLineColor = col;
    gridLineStyle = style;
    gridLineWidth = width;
    return ret;
}

//end

//--evnets
void classChess::paintEvent(QPaintEvent *){
    QPainter painter(this);
    QPen pen;
    pen.setColor(gridLineColor);
    pen.setWidth(gridLineWidth);
    pen.setStyle(gridLineStyle);
    painter.setPen(pen);
    //01.02 画背景
    painter.drawPixmap(this->rect(), QPixmap(bgName));
    //01.03 画棋盘
    for(int i=1; i<=9; i++){
        //x轴方向
        painter.drawLine(gridWidth,i*gridHeigth, 9*gridWidth, i*gridHeigth);
        //y轴方向
        painter.drawLine(i*gridWidth, gridHeigth, i*gridWidth, 9*gridHeigth);
    }
}
void classChess::resizeEvent(QResizeEvent *event){
    //01.01 获取单个格子的宽高
    QSize size = event->size();
    gridWidth = size.width()/gridNumber;
    gridHeigth = size.height()/gridNumber;
}
//end



