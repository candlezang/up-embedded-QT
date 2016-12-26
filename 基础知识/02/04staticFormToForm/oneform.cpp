#include "oneform.h"
#include "ui_oneform.h"
#include "common.h"

OneForm::OneForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OneForm)
{
    ui->setupUi(this);
}

OneForm::~OneForm()
{
    delete ui;
}

void OneForm::on_btn_gotwo_clicked()
{
    Common::FormShow(Common::two);
}

void OneForm::on_btn_gothree_clicked()
{
    Common::FormShow(Common::three);
}
