#ifndef TETSSLOTS_H
#define TETSSLOTS_H

#include <QWidget>

namespace Ui {
class tetsSlots;
}

class tetsSlots : public QWidget
{
    Q_OBJECT

public:
    explicit tetsSlots(QWidget *parent = 0);
    ~tetsSlots();

private:
    Ui::tetsSlots *ui;

private slots:
     void doProcessClicked(bool checked = false);
};

#endif // TETSSLOTS_H
