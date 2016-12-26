#include "mycalc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myCalc w;
    w.show();

    return a.exec();
}
