#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QTextEdit>

namespace Ui {
class Widget;
}

class Widget : public QTextEdit
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;
};

#endif // WIDGET_H
