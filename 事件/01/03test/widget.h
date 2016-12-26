#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QLineEdit>
#include <QDebug>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
    QLineEdit *currentEdit;
    QString Str;

    void Init();


protected:
    bool eventFilter(QObject *, QEvent *);

private slots:
    void doProcessClinkNum(bool);
};

#endif // WIDGET_H
