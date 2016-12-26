#include "mycalc.h"
#include "ui_mycalc.h"

myCalc::myCalc(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::myCalc)
{
    ui->setupUi(this);
    Init();
}

myCalc::~myCalc()
{
    delete ui;
}

//function
void myCalc::Init(){
    this->setFixedSize(400, 250);
    ui->lineEdit->setAlignment(Qt::AlignRight);
/*
 *            名称             QString family() const;           void setFamily(const QString &family);
        点大小                 int pointSize() const;              void setPointSize(int pointSize);
      像素大小               int pixelSize() const;               void setPixelSize(int pixelSize);
          粗细                   int weight() const;                  void setWeight(int weight);
          粗体                   bool bold() const;                    void setBold(bool enable);
          斜体                  bool italic() const;                     void setItalic(bool enable);
       下划线                bool underline() const;              void setUnderline(bool enable);
 */
    QFont myFont;
    myFont.setFamily("Ubuntu");
    myFont.setBold(true);
    myFont.setPointSize(20);

    ui->lineEdit->setFont(myFont);



    globalVar.clear();
    arrayVar.clear();

    //绑定信号和槽 (数字按键)
    connect(ui->btn0, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));
    connect(ui->btn1, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));
    connect(ui->btn2, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));
    connect(ui->btn3, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));
    connect(ui->btn4, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));
    connect(ui->btn5, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));
    connect(ui->btn6, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));
    connect(ui->btn7, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));
    connect(ui->btn8, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));
    connect(ui->btn9, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickNum(bool)));

    connect(ui->btn_pointer, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickSymbol(bool)));
    connect(ui->btn_symbol, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickSymbol(bool)));


    connect(ui->btn_clear, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickDelete(bool)));
    connect(ui->btn_delete, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickDelete(bool)));


    connect(ui->btn_a, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickArith(bool)));
    connect(ui->btn_b, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickArith(bool)));
    connect(ui->btn_c, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickArith(bool)));
    connect(ui->btn_d, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickArith(bool)));


    connect(ui->btn_equal, SIGNAL(clicked(bool)),
            this, SLOT(doProcessClickEqual(bool)));

}
//end function


//slots
void myCalc::doProcessClickNum(bool){
 /*
  *  当某一个Object emit一个signal的时候，它就是一个sender,系统会记录下当前是谁emit出这个signal的，
所以你在对应的slot里就可以通过 sender()得到当前是谁invoke了你的slot。
有可能多个 Object的signal会连接到同一个signal(例如多个Button可能会connect到一个slot函数onClick()),
因此这是就 需要判断到底是哪个Object emit了这个signal，根据sender的不同来进行不同的处理.
在槽函数中：
QObject * obj = sender(); //返回发出信号的对象，用QObject类型接收
QPushButton *button_tmp = qobject_cast<QPushButton *>(obj);  //向下转型为按钮类型
...对此按钮的其他操作
  */
    QPushButton *btn = qobject_cast<QPushButton *>(this->sender());
    btn->setFocusPolicy(Qt::StrongFocus);
    //btn->setFocus();
/*
 * Qt::TabFocus 0x1  接受Tab键焦点
Qt::ClickFocus 0x2 接受鼠标单击做焦点
Qt::StrongFocus TabFocus | ClickFocus | 0x8 接受Tab键和鼠标单击做焦点
Qt::WheelFocus StrongFocus | 0x4  滑轮作为焦点选中事件
Qt::NoFocus 0 不接受焦点
 */
    //QPushButton * btn = (QPushButton *)this->sender();
    QString text = btn->text();
    globalVar.append(text);
    ui->lineEdit->setText(globalVar);
}
void myCalc::doProcessClickSymbol(bool){
    QPushButton *btn = qobject_cast<QPushButton *>(this->sender());
    btn->setFocusPolicy(Qt::StrongFocus);
    btn->setFocus();
    QString text = btn->text();
    if(text.contains(".")){
       if(globalVar.length() == 0){
           globalVar.append("0.");
       }
       else if(!globalVar.contains(".")){
           globalVar.append(".");
       }
    }
    else{
        if(globalVar.contains("-")){
            globalVar.remove(0,1);
        }
        else{
            globalVar.insert(0,"-");
        }
    }

    ui->lineEdit->setText(globalVar);
}
void myCalc::doProcessClickDelete(bool){
    QPushButton *btn = qobject_cast<QPushButton *>(this->sender());
    btn->setFocusPolicy(Qt::StrongFocus);
    btn->setFocus();
    QString text = btn->text();
    if(text.contains("c")){
        globalVar.clear();
        arrayVar.clear();
    }
    else{
        globalVar.chop(1);
    }
    ui->lineEdit->setText(globalVar);
}
void myCalc::doProcessClickArith(bool){
    QPushButton *btn = qobject_cast<QPushButton *>(this->sender());
    btn->setFocusPolicy(Qt::StrongFocus);
    btn->setFocus();
    QString text = btn->text();
    if(arrayVar.length() == 0){
        arrayVar.insert(0, globalVar);
        globalVar.clear();
    }
    arrayVar.insert(1, text);
    ui->lineEdit->setText(globalVar);
}
void myCalc::doProcessClickEqual(bool){
    QPushButton *btn = qobject_cast<QPushButton *>(this->sender());
    btn->setFocusPolicy(Qt::StrongFocus);
    btn->setFocus();
    if(arrayVar.length() == 2){
        arrayVar.insert(2, globalVar);
        float sum = 0.0f;
        float v1 = QString(arrayVar.at(0)).toFloat();
        float v2 = QString(arrayVar.at(2)).toFloat();
        QString symbol = arrayVar.at(1);
        if(symbol.contains("+")){
            sum = v1 + v2;
        }
        else if(symbol == "-"){
            sum = v1 - v2;
        }
        else if(symbol == "*"){
            sum = v1 * v2;
        }
        else{
            if(v2 == 0.0f){
                v2 = 1.0f;
            }
            sum = v1 / v2;
        }
        QString var = QString::number(sum);
        ui->lineEdit->setText(var);

        globalVar.clear();
        arrayVar.clear();
    }
}
//end slots
