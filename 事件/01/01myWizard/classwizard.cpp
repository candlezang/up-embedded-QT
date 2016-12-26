#include "classwizard.h"


classWizard::classWizard(QWidget *parent) : QWizard(parent)
{
    this->addPage(IntroPage());

    two = new TwoPage(this);
    this->addPage(two);

}

QWizardPage *classWizard::IntroPage(){
    QWizardPage *page = new QWizardPage(this);
    page->setTitle("Introduction");

    QLabel *label = new QLabel("This wizard will help you register your copy "
                               "of Super Product Two.");
    label->setWordWrap(true);

    QVBoxLayout *layout = new QVBoxLayout;
    layout->addWidget(label);
    page->setLayout(layout);

    return page;
}

