#include "mynotepad.h"
#include <QApplication>
#include "searchdialog.h"
#include "replacedialog.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myNotepad w;
    w.show();
//    SearchDialog s;
//    s.show();
//    ReplaceDialog r;
//    r.show();

    return a.exec();
}
