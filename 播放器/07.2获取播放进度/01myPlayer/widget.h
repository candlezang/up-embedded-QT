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

    void on_btn_voice_clicked();

    void on_horizontalSlider_valueChanged(int value);


    void doProcessTimePosition(float);
    void doProcessPercentPosition(int);


    void on_horizontalSlider_sliderPressed();

    void on_horizontalSlider_sliderReleased();

private:
    Ui::Widget *ui;
    myProcess *processPlayer;
    bool isPlay;
    bool isSlent;
    bool isPressed; //是否人为设置值

    void Init();
};

#endif // WIDGET_H
