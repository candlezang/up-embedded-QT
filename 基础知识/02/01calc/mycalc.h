#ifndef MYCALC_H
#define MYCALC_H

#include <QDialog>

namespace Ui {
class myCalc;
}

class myCalc : public QDialog
{
    Q_OBJECT

public:
    explicit myCalc(QWidget *parent = 0);
    ~myCalc();

private:
    Ui::myCalc *ui;
    QString globalVar;
    QStringList arrayVar;


    void Init();

private slots:
    void doProcessClickNum(bool); //处理数字
    void doProcessClickSymbol(bool); //处理小数点,正负
    void doProcessClickDelete(bool); //处理清除,删除
    void doProcessClickArith(bool); //处理 + - * /
    void doProcessClickEqual(bool); //处理 =
};

#endif // MYCALC_H
