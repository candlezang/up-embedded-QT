#ifndef THREEFORM_H
#define THREEFORM_H

#include <QWidget>

namespace Ui {
class ThreeForm;
}

class ThreeForm : public QWidget
{
    Q_OBJECT

public:
    explicit ThreeForm(QWidget *parent = 0);
    ~ThreeForm();

private slots:
    void on_btn_goone_clicked();

    void on_btn_gotwo_clicked();

private:
    Ui::ThreeForm *ui;
};

#endif // THREEFORM_H
