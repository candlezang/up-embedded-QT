#ifndef MYLINEEDIT_H
#define MYLINEEDIT_H

#include <QWidget>
#include <QLineEdit>
#include <QKeyEvent>
#include <QEvent>
#include <QDebug>

class myLineEdit : public QLineEdit
{
    Q_OBJECT
public:
    explicit myLineEdit(QWidget *parent = 0);

signals:

public slots:

protected:
    void keyPressEvent(QKeyEvent *);
    void keyReleaseEvent(QKeyEvent *);

    bool event(QEvent *);


};

#endif // MYLINEEDIT_H
