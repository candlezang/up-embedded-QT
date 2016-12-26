#include "oneform.h"
#include "ui_oneform.h"
#include <QDebug>

oneForm::oneForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::oneForm)
{
    ui->setupUi(this);

    Init();
}

oneForm::~oneForm()
{
    delete ui;
    delete twoform;
}

//function
void oneForm::Init(){
    connect(ui->btn_gotwo, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClinkGoTwoForm(bool)));


    twoform = new twoForm();
    connect(twoform, SIGNAL(SignalBackOneForm(QString)),
            this, SLOT(doProcessSignalBackOneForm(QString)));
}
//end function

//slots
void oneForm::doProcessClinkGoTwoForm(bool){
    twoform->show();
    this->hide();
}
void oneForm::doProcessSignalBackOneForm(QString str){
    qDebug() << str << endl;
    this->show();
}
//end slots
