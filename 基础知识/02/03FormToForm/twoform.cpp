#include "twoform.h"
#include "ui_twoform.h"

twoForm::twoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::twoForm)
{
    ui->setupUi(this);

    Init();
}

twoForm::~twoForm()
{
    delete ui;
}

//function
void twoForm::Init(){
    connect(ui->btn_backone, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClinkBackOneForm(bool)));

    threeform = new threeForm();
    connect(threeform, SIGNAL(SignalBackTwoForm()),
            this, SLOT(doPorcessSignalBackTwoForm()));

    connect(ui->btn_gothree, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClinkGoThreeForm(bool)));
}
//end function

//slots
void twoForm::doProcessClinkBackOneForm(bool){
    emit SignalBackOneForm("我是第二个页面,现在准备返回第一个页面");
    this->hide();
}
void twoForm::doProcessClinkGoThreeForm(bool){
    this->hide();
    threeform->show();
}
void twoForm::doPorcessSignalBackTwoForm(){
    this->show();
}
//end slots
