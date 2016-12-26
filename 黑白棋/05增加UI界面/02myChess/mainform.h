#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QDebug>
#include "classchess.h"

namespace Ui {
class MainForm;
}

class MainForm : public QWidget
{
    Q_OBJECT

public:
    explicit MainForm(QWidget *parent = 0);
    ~MainForm();

private:
    Ui::MainForm *ui;
    classChess *myChess;

    int chessData[8][8];
    int blackNum;
    int whiteNum;
    classChess::cheesType currentRole;



    void Init();
    void chessInit();

private slots:
    void doProcessGetXY(int x, int y);

    void on_btn_pvp_clicked();

protected:
    void paintEvent(QPaintEvent *);

};

#endif // MAINFORM_H
