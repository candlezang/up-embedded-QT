#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "subtext.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    void   ConnectInit();

private slots:
    void SlotTriggeredActionNew(bool);

private:
    Ui::MainWindow *ui;
    subtext  * text;
};

#endif // MAINWINDOW_H
