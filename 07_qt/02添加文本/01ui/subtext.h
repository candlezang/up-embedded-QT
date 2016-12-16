#ifndef SUBTEXT_H
#define SUBTEXT_H

#include <QWidget>
#include <QTextEdit>

class subtext : public QTextEdit
{
    Q_OBJECT
public:
    explicit subtext(QWidget *parent = 0);
    void  connectInit();

    void  subTextInit();

signals:

private slots:
    void SlotDoumentChange();


};

#endif // SUBTEXT_H
