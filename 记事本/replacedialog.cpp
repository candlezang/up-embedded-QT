#include "replacedialog.h"
#include "ui_replacedialog.h"

ReplaceDialog::ReplaceDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ReplaceDialog)
{
    ui->setupUi(this);
}

ReplaceDialog::~ReplaceDialog()
{
    delete ui;
}

void ReplaceDialog::on_btn_next_clicked()
{
    QString searchStr = ui->ledit_searchStr->text();
    if(searchStr.isEmpty())return;
    emit SignalSearchNextStr(searchStr, ui->cbox_case->isChecked());
}

void ReplaceDialog::on_btn_replace_clicked()
{
    QString searchStr = ui->ledit_searchStr->text();
    if(searchStr.isEmpty())return;
    QString replaceStr = ui->ledit_replaceStr->text();
    SignalReplaceStr(searchStr, replaceStr, ui->cbox_case->isChecked(), false);
}

void ReplaceDialog::on_btn_replaceAll_clicked()
{
    QString searchStr = ui->ledit_searchStr->text();
    if(searchStr.isEmpty())return;
    QString replaceStr = ui->ledit_replaceStr->text();
    SignalReplaceStr(searchStr, replaceStr, ui->cbox_case->isChecked(), true);
}

void ReplaceDialog::on_btn_cancel_clicked()
{
    this->close();
}
