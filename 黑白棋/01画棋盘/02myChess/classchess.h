#ifndef CLASSCHESS_H
#define CLASSCHESS_H

#include <QWidget>
#include <QResizeEvent>
#include <QPainter>

class classChess : public QWidget
{
    Q_OBJECT

public:
    classChess(QWidget *parent = 0);
    ~classChess();

    int setChangeBG(const QString bgName);
    int setChangeGrid(QColor col = Qt::red, Qt::PenStyle style = Qt::SolidLine, int width=3);

protected:
    void paintEvent(QPaintEvent *);
    void resizeEvent(QResizeEvent *);

private:
    const int gridNumber;
    int gridWidth, gridHeigth;

    QString bgName;
    QColor gridLineColor;
    Qt::PenStyle gridLineStyle;
    int gridLineWidth;


    void Init();

};

#endif // CLASSCHESS_H
