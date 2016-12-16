#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QWheelEvent>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);

   //滚轮事件
    void wheelEvent(QWheelEvent *);

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
