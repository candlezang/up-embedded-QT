#include "twopage.h"

TwoPage::TwoPage(QWidget *parent) : QWizardPage(parent)
{
    this->setTitle(tr("Class Information"));
    this->setSubTitle(tr("Specify basic information about the class for which you "
                   "want to generate skeleton source code files."));
    this->setPixmap(QWizard::LogoPixmap, QPixmap(":/images/logo1.png"));
    QLabel *classNameLabel = new QLabel(tr("&Class name:"));
    QLineEdit *classNameLineEdit = new QLineEdit;
    classNameLabel->setBuddy(classNameLineEdit);

    QLabel *baseClassLabel = new QLabel(tr("B&ase class:"));
    QLineEdit *baseClassLineEdit = new QLineEdit;
    baseClassLabel->setBuddy(baseClassLineEdit);

    QCheckBox *qobjectMacroCheckBox = new QCheckBox(tr("Generate Q_OBJECT &macro"));

//! [10]
    QGroupBox *groupBox = new QGroupBox(tr("C&onstructor"));
//! [9]

    QRadioButton *qobjectCtorRadioButton = new QRadioButton(tr("&QObject-style constructor"));
    QRadioButton *qwidgetCtorRadioButton = new QRadioButton(tr("Q&Widget-style constructor"));
    QRadioButton *defaultCtorRadioButton = new QRadioButton(tr("&Default constructor"));
    QCheckBox *copyCtorCheckBox = new QCheckBox(tr("&Generate copy constructor and "
                                        "operator="));

    defaultCtorRadioButton->setChecked(true);

    connect(defaultCtorRadioButton, SIGNAL(toggled(bool)),
            copyCtorCheckBox, SLOT(setEnabled(bool)));

//! [11] //! [12]
    this->registerField("className*", classNameLineEdit);
    this->registerField("baseClass", baseClassLineEdit);
    this->registerField("qobjectMacro", qobjectMacroCheckBox);
//! [11]
    this->registerField("qobjectCtor", qobjectCtorRadioButton);
    this->registerField("qwidgetCtor", qwidgetCtorRadioButton);
    this->registerField("defaultCtor", defaultCtorRadioButton);
    this->registerField("copyCtor", copyCtorCheckBox);

    QVBoxLayout *groupBoxLayout = new QVBoxLayout;
//! [12]
    groupBoxLayout->addWidget(qobjectCtorRadioButton);
    groupBoxLayout->addWidget(qwidgetCtorRadioButton);
    groupBoxLayout->addWidget(defaultCtorRadioButton);
    groupBoxLayout->addWidget(copyCtorCheckBox);
    groupBox->setLayout(groupBoxLayout);

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(classNameLabel, 0, 0);
    layout->addWidget(classNameLineEdit, 0, 1);
    layout->addWidget(baseClassLabel, 1, 0);
    layout->addWidget(baseClassLineEdit, 1, 1);
    layout->addWidget(qobjectMacroCheckBox, 2, 0, 1, 2);
    layout->addWidget(groupBox, 3, 0, 1, 2);
    this->setLayout(layout);

}

