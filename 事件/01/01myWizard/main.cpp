#include <QApplication>
#include <QTranslator>
#include <QLocale>
#include <QLibraryInfo>

#include "classwizard.h"


int main(int argc, char *argv[]){
    QApplication a(argc, argv);

    classWizard cw;
    cw.show();

    a.exec();
}
