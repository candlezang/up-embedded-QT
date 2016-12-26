#include "tetsslots.h"
#include "ui_tetsslots.h"
#include <QDebug>

tetsSlots::tetsSlots(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::tetsSlots)
{
    ui->setupUi(this);

    QObject::connect(ui->btn1, SIGNAL(clicked(bool)),
                     this, SLOT(doProcessClicked(bool)));
    QObject::connect(ui->btn2, SIGNAL(clicked(bool)),
                     this, SLOT(doProcessClicked(bool)));
    QObject::connect(ui->btn3, SIGNAL(clicked(bool)),
                     this, SLOT(doProcessClicked(bool)));
    QObject::connect(ui->btn4, SIGNAL(clicked(bool)),
                     this, SLOT(doProcessClicked(bool)));
    QObject::connect(ui->btn5, SIGNAL(clicked(bool)),
                     this, SLOT(doProcessClicked(bool)));
    QObject::connect(ui->btn6, SIGNAL(clicked(bool)),
                     this, SLOT(doProcessClicked(bool)));
    QObject::connect(ui->btn7, SIGNAL(clicked(bool)),
                    this, SLOT(doProcessClicked(bool)));
    QObject::connect(ui->btn8, SIGNAL(clicked(bool)),
                     this, SLOT(doProcessClicked(bool)));
}

tetsSlots::~tetsSlots()
{
    delete ui;
}

void tetsSlots::doProcessClicked(bool){
    //QPushButton *btn = (QPushButton *)this->sender();
    QPushButton *btn = qobject_cast<QPushButton *>(this->sender());
    QString text = btn->text();
    QString old = ui->lineEdit->text();
    old.append(text);
    ui->lineEdit->setText(old);
}
