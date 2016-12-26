#include "oneform.h"
#include <QApplication>
#include "common.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Common::Init();
    Common::FormShow(Common::one);

    return a.exec();
}
