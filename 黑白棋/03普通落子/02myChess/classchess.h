#ifndef CLASSCHESS_H
#define CLASSCHESS_H

#include <QWidget>
#include <QResizeEvent>
#include <QPainter>
#include <QMouseEvent>
#include <QDebug>

class classChess : public QWidget
{
    Q_OBJECT

public:
    classChess(QWidget *parent = 0);
    ~classChess();

    enum cheesType{
        Empty = 0,
        Black,
        White
    };
    int setChangeBG(const QString bgName);
    int setChangeGrid(QColor col = Qt::red, Qt::PenStyle style = Qt::SolidLine, int width=3);

protected:
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *);
    void mousePressEvent(QMouseEvent *);

private:
    const int gridNumber;
    int gridWidth, gridHeigth;

    QString bgName;
    QColor gridLineColor;
    Qt::PenStyle gridLineStyle;
    int gridLineWidth;

    const int chessGridNumber;
    int chessData[8][8];


    void Init();
    void chessInit();

};

#endif // CLASSCHESS_H
