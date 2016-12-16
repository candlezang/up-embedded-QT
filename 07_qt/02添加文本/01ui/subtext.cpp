#include "subtext.h"

subtext::subtext(QWidget *parent) : QTextEdit(parent)
{
    connectInit();
}

void subtext::connectInit()
{
    connect(this->document(),SIGNAL(contentsChanged()),
            this, SLOT(SlotDoumentChange()));
}

void subtext::subTextInit()
{
   static int index = 1;
   //textEdit   setWindowModified 为真 * 就会显示
   //如果为假 ,* 不会显示
    QString title = QString("未命名%1[*]").arg(index);
    //this->setWindowModified(true);
   this->setWindowTitle(title);

    //this->setWindowModified(true);
    this->setWindowModified(false);
    index++;
}

void subtext::SlotDoumentChange()
{
    this->setWindowModified(true);
}
