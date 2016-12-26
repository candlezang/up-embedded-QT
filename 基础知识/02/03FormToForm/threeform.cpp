#include "threeform.h"
#include "ui_threeform.h"

threeForm::threeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::threeForm)
{
    ui->setupUi(this);
}

threeForm::~threeForm()
{
    delete ui;
}

void threeForm::on_btn_backtwo_clicked()
{
    this->hide();
    emit SignalBackTwoForm();
}
