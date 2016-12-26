#ifndef CLASSWIZARD_H
#define CLASSWIZARD_H

#include <QWidget>
#include <QWizard>
#include <QLabel>
#include <QVBoxLayout>
#include "twopage.h"

class classWizard : public QWizard
{
    Q_OBJECT
public:
    explicit classWizard(QWidget *parent = 0);

signals:

public slots:

private:
    QWizardPage *IntroPage();
    //QWizardPage *ClassInfoPage();
    //QWizardPage *CodeStylePage();
    //QWizardPage *OutputFilesPage();
  //  QWizardPage *ConclusionPage();


    TwoPage *two;
};

#endif // CLASSWIZARD_H
