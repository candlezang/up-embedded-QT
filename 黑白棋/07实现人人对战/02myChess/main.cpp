#include "classchess.h"
#include <QApplication>
#include "mainform.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
//    classChess w;
//    w.show();
    MainForm mf;
    mf.show();

    return a.exec();
}
