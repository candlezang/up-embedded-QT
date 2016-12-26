#ifndef REPLACEDIALOG_H
#define REPLACEDIALOG_H

#include <QDialog>

namespace Ui {
class ReplaceDialog;
}

class ReplaceDialog : public QDialog
{
    Q_OBJECT

public:
    explicit ReplaceDialog(QWidget *parent = 0);
    ~ReplaceDialog();

private slots:
    void on_btn_next_clicked();

    void on_btn_replace_clicked();

    void on_btn_replaceAll_clicked();

    void on_btn_cancel_clicked();

private:
    Ui::ReplaceDialog *ui;

signals:
    void SignalSearchNextStr(const QString searchStr, bool caseSensitive);
    void SignalReplaceStr(const QString searchStr, const QString replaceStr, bool caseSensitive, bool replaceAll);
};

#endif // REPLACEDIALOG_H
