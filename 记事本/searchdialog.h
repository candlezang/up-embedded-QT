#ifndef SEARCHDIALOG_H
#define SEARCHDIALOG_H

#include <QDialog>

namespace Ui {
class SearchDialog;
}

class SearchDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SearchDialog(QWidget *parent = 0);
    ~SearchDialog();

private slots:
    void on_btn_next_clicked();

private:
    Ui::SearchDialog *ui;


signals:
    void SignalSendSearchValue(const QString searchStr, bool caseSensitive, bool isNext);
};

#endif // SEARCHDIALOG_H
