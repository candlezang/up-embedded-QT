#ifndef MAINFORM_H
#define MAINFORM_H

#include <QWidget>
#include <QDebug>
#include <QTest>
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
    enum PKType{
        None=0,
        PVP,
        PVC,
        NVN,
    };

    classChess *myChess;

    int chessData[8][8];
    int blackNum;
    int whiteNum;
    classChess::cheesType currentRole;

    PKType currentPK;


    void Init();
    void chessInit();
    int judgeRule(int x, int y, void *chess, classChess::cheesType currentRole,bool eatChess);
    void setDownChess();
    void getChessNumber();

private slots:
    void doProcessGetXY(int x, int y);

    void on_btn_pvp_clicked();

    void on_btn_pvc_clicked();

protected:
    void paintEvent(QPaintEvent *);

};

#endif // MAINFORM_H
