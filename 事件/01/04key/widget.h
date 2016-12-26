#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QKeyEvent>

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



protected:
    void keyPressEvent(QKeyEvent *);

};

#endif // WIDGET_H
