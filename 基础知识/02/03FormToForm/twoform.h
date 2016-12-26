#ifndef TWOFORM_H
#define TWOFORM_H

#include <QWidget>
#include "threeform.h"

namespace Ui {
class twoForm;
}

class twoForm : public QWidget
{
    Q_OBJECT

public:
    explicit twoForm(QWidget *parent = 0);
    ~twoForm();

private:
    Ui::twoForm *ui;
    threeForm *threeform;


    void Init();

private slots:
    void doProcessClinkBackOneForm(bool);
    void doProcessClinkGoThreeForm(bool);
    void doPorcessSignalBackTwoForm();

signals:
    void SignalBackOneForm(QString);
};

#endif // TWOFORM_H
