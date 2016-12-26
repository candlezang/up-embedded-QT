#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>
#include <QDebug>


#include "mylineedit.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;

    myLineEdit *lineEdit1;
    myLineEdit *lineEdit2;

    void Init();

protected:
    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);
    bool eventFilter(QObject *, QEvent *);

};

#endif // WIDGET_H
