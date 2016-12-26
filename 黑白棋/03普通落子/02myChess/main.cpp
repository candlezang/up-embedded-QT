#include "classchess.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    classChess w;
    w.show();

    return a.exec();
}
