#include "widget.h"
#include "ui_widget.h"
#include <QDebug>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_btn_login_clicked()
{

    QString name = ui->ledit_name->text();
    QString passwd = ui->ledit_passwd->text();
    if(name == passwd){
        qDebug() << QString("登录成功!");
    }
}



void Widget::on_btn_cancel_clicked()
{
    /*
    long a = 100;
    QString after = QString::number(a,8);
    qDebug() << after << endl;
    */

    /*
    char *str = "hello world";
    QString mystr = QString(str);
    qDebug() << mystr << endl;
    */

    /*
    bool ok;
    QString str = "sdrtfdf";
    long var_long = str.toLong(&ok, 10);
    qDebug() <<"ret:" <<ok << "   " << var_long << endl;
    */

    /*
    int a=10; float b = 20.333f; double c=3434.323;
    char *str = "hello world";
    QString myStr = QString("a:%1 b:%2 c:%3 str:%4").arg(a)
            .arg(b).arg(c).arg(str);

    qDebug() << myStr << endl;
    */

    /*
    QString str = "12345";
    str.chop(2);
    qDebug() << str << endl;
    */

    /*
    QString str1 = "AA";
    QString str2 = "aa";
    if(str1.compare(str2,Qt::CaseSensitive) == 0){
        qDebug() << "相等" << endl;
    }
    else{
        qDebug() << "不相等" << endl;
    }
    */

    /*
    QString str = "colour behaviour flavour neighbour";
    str.replace(QString("ou"), QString("o"));
    qDebug() << str << endl;
    */

    QString str = "hello world#我爱中国#ni hao";
    QStringList list = str.split("#");
    for(int i=0; i<list.count(); i++){
        qDebug() << list.at(i) << endl;
    }
}
