#ifndef THREEFORM_H
#define THREEFORM_H

#include <QWidget>

namespace Ui {
class threeForm;
}

class threeForm : public QWidget
{
    Q_OBJECT

public:
    explicit threeForm(QWidget *parent = 0);
    ~threeForm();

private slots:
    void on_btn_backtwo_clicked();

private:
    Ui::threeForm *ui;

signals:
    void SignalBackTwoForm();
};

#endif // THREEFORM_H
