#include "twoform.h"
#include "ui_twoform.h"
#include "common.h"

TwoForm::TwoForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TwoForm)
{
    ui->setupUi(this);
}

TwoForm::~TwoForm()
{
    delete ui;
}

void TwoForm::on_btn_gothree_clicked()
{
    Common::FormShow(Common::three);
}

void TwoForm::on_btn_goone_clicked()
{
    Common::FormShow(Common::one);
}
