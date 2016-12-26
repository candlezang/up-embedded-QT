#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QCloseEvent>
#include <QDebug>

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


protected:
    void closeEvent(QCloseEvent *);

private slots:
    void on_btn_open_clicked();

    void on_btn_previous_clicked();

    void on_btn_play_clicked();

    void on_btn_next_clicked();

    void on_dial_valueChanged(int value);

private:
    Ui::Widget *ui;

    myProcess *processPlayer;

    void Init();
};

#endif // WIDGET_H
