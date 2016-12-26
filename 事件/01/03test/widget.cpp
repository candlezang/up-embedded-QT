#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    ui->lineEdit->installEventFilter(this);
    ui->lineEdit_2->installEventFilter(this);

    Init();
}

Widget::~Widget()
{
    delete ui;
}

void Widget::Init(){
    currentEdit = NULL;
    connect(ui->btn0, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
    connect(ui->btn1, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
    connect(ui->btn2, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
    connect(ui->btn3, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
    connect(ui->btn4, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
    connect(ui->btn5, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
    connect(ui->btn6, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
    connect(ui->btn7, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
    connect(ui->btn8, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
    connect(ui->btn9, SIGNAL(clicked(bool)),this, SLOT(doProcessClinkNum(bool)));
}

void Widget::doProcessClinkNum(bool){
    QPushButton *btn = qobject_cast<QPushButton *>(this->sender());
    if(btn == NULL)return;
    QString text = btn->text();
    Str.append(text);
    if(currentEdit != NULL){
        currentEdit->setText(Str);
    }
}


bool Widget::eventFilter(QObject *obj, QEvent *e){
    if(e->type() == QEvent::MouseButtonPress){
        QLineEdit *lineEdit = qobject_cast<QLineEdit *>(obj);
        if(currentEdit != lineEdit){
            Str = lineEdit->text();

            qDebug() << lineEdit->objectName();

            currentEdit = lineEdit;
            QWidget::eventFilter(obj, e);
        }
    }
}
