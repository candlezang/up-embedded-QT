#include "threeform.h"
#include "ui_threeform.h"
#include "common.h"

ThreeForm::ThreeForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ThreeForm)
{
    ui->setupUi(this);
}

ThreeForm::~ThreeForm()
{
    delete ui;
}

void ThreeForm::on_btn_goone_clicked()
{
    Common::FormShow(Common::one);
}

void ThreeForm::on_btn_gotwo_clicked()
{
    Common::FormShow(Common::two);
}
