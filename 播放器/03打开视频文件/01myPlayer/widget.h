#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

#include "myprocess.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_btn_open_clicked();

private:
    Ui::Widget *ui;

    myProcess *processPlayer;

    void Init();
};

#endif // WIDGET_H
