#ifndef ONEFORM_H
#define ONEFORM_H

#include <QWidget>
#include "twoform.h"

namespace Ui {
class oneForm;
}

class oneForm : public QWidget
{
    Q_OBJECT

public:
    explicit oneForm(QWidget *parent = 0);
    ~oneForm();

private:
    Ui::oneForm *ui;
    twoForm *twoform;

    void Init();

private slots:
    void doProcessClinkGoTwoForm(bool);
    void doProcessSignalBackOneForm(QString);
};

#endif // ONEFORM_H
