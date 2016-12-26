#ifndef TWOPAGE_H
#define TWOPAGE_H

#include <QWidget>
#include <QWizardPage>
#include <QLabel>
#include <QLineEdit>
#include <QCheckBox>
#include <QGroupBox>
#include <QRadioButton>
#include <QVBoxLayout>
#include <QGridLayout>

class TwoPage : public QWizardPage
{
    Q_OBJECT
public:
    explicit TwoPage(QWidget *parent = 0);

signals:

public slots:
};

#endif // TWOPAGE_H
