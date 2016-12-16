#ifndef SUBTEXT_H
#define SUBTEXT_H

#include <QWidget>
#include <QTextEdit>

class subtext : public QTextEdit
{
    Q_OBJECT
public:
    explicit subtext(QWidget *parent = 0);

signals:

public slots:
};

#endif // SUBTEXT_H
