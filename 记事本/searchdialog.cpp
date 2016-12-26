#include "searchdialog.h"
#include "ui_searchdialog.h"

SearchDialog::SearchDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SearchDialog)
{
    ui->setupUi(this);
    ui->groupBox->setStyleSheet(QString("QGroupBox:{border: 3px}"));

}

SearchDialog::~SearchDialog()
{
    delete ui;
}

void SearchDialog::on_btn_next_clicked()
{
    QString searchStr = ui->ledit_search->text();
    if(searchStr.isEmpty())return;

    emit SignalSendSearchValue(searchStr, ui->cbox_case->isChecked(), ui->rbtn_next->isChecked());
}
