/********************************************************************************
** Form generated from reading UI file 'mycalc.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYCALC_H
#define UI_MYCALC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_myCalc
{
public:
    QGridLayout *gridLayout;
    QLineEdit *lineEdit;
    QPushButton *btn_clear;
    QPushButton *btn_delete;
    QPushButton *btn_equal;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn_d;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn_c;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn_b;
    QPushButton *btn0;
    QPushButton *btn_pointer;
    QPushButton *btn_symbol;
    QPushButton *btn_a;

    void setupUi(QDialog *myCalc)
    {
        if (myCalc->objectName().isEmpty())
            myCalc->setObjectName(QStringLiteral("myCalc"));
        myCalc->resize(423, 250);
        gridLayout = new QGridLayout(myCalc);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lineEdit = new QLineEdit(myCalc);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setEnabled(true);
        QFont font;
        font.setPointSize(11);
        font.setBold(false);
        font.setWeight(50);
        lineEdit->setFont(font);
        lineEdit->setReadOnly(true);

        gridLayout->addWidget(lineEdit, 0, 0, 1, 4);

        btn_clear = new QPushButton(myCalc);
        btn_clear->setObjectName(QStringLiteral("btn_clear"));
        btn_clear->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn_clear, 1, 1, 1, 1);

        btn_delete = new QPushButton(myCalc);
        btn_delete->setObjectName(QStringLiteral("btn_delete"));
        btn_delete->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn_delete, 1, 2, 1, 1);

        btn_equal = new QPushButton(myCalc);
        btn_equal->setObjectName(QStringLiteral("btn_equal"));
        btn_equal->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn_equal, 1, 3, 1, 1);

        btn7 = new QPushButton(myCalc);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn7, 2, 0, 1, 1);

        btn8 = new QPushButton(myCalc);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn8, 2, 1, 1, 1);

        btn9 = new QPushButton(myCalc);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn9, 2, 2, 1, 1);

        btn_d = new QPushButton(myCalc);
        btn_d->setObjectName(QStringLiteral("btn_d"));
        btn_d->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn_d, 2, 3, 1, 1);

        btn4 = new QPushButton(myCalc);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn4, 3, 0, 1, 1);

        btn5 = new QPushButton(myCalc);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn5, 3, 1, 1, 1);

        btn6 = new QPushButton(myCalc);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn6, 3, 2, 1, 1);

        btn_c = new QPushButton(myCalc);
        btn_c->setObjectName(QStringLiteral("btn_c"));
        btn_c->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn_c, 3, 3, 1, 1);

        btn1 = new QPushButton(myCalc);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn1, 4, 0, 1, 1);

        btn2 = new QPushButton(myCalc);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn2, 4, 1, 1, 1);

        btn3 = new QPushButton(myCalc);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn3, 4, 2, 1, 1);

        btn_b = new QPushButton(myCalc);
        btn_b->setObjectName(QStringLiteral("btn_b"));
        btn_b->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn_b, 4, 3, 1, 1);

        btn0 = new QPushButton(myCalc);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn0, 5, 0, 1, 1);

        btn_pointer = new QPushButton(myCalc);
        btn_pointer->setObjectName(QStringLiteral("btn_pointer"));
        btn_pointer->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn_pointer, 5, 1, 1, 1);

        btn_symbol = new QPushButton(myCalc);
        btn_symbol->setObjectName(QStringLiteral("btn_symbol"));
        btn_symbol->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn_symbol, 5, 2, 1, 1);

        btn_a = new QPushButton(myCalc);
        btn_a->setObjectName(QStringLiteral("btn_a"));
        btn_a->setFocusPolicy(Qt::NoFocus);

        gridLayout->addWidget(btn_a, 5, 3, 1, 1);

        QWidget::setTabOrder(lineEdit, btn_clear);
        QWidget::setTabOrder(btn_clear, btn_delete);
        QWidget::setTabOrder(btn_delete, btn7);
        QWidget::setTabOrder(btn7, btn9);
        QWidget::setTabOrder(btn9, btn8);
        QWidget::setTabOrder(btn8, btn4);
        QWidget::setTabOrder(btn4, btn6);
        QWidget::setTabOrder(btn6, btn5);
        QWidget::setTabOrder(btn5, btn1);
        QWidget::setTabOrder(btn1, btn3);
        QWidget::setTabOrder(btn3, btn2);
        QWidget::setTabOrder(btn2, btn0);
        QWidget::setTabOrder(btn0, btn_symbol);
        QWidget::setTabOrder(btn_symbol, btn_pointer);
        QWidget::setTabOrder(btn_pointer, btn_d);
        QWidget::setTabOrder(btn_d, btn_b);
        QWidget::setTabOrder(btn_b, btn_a);
        QWidget::setTabOrder(btn_a, btn_equal);
        QWidget::setTabOrder(btn_equal, btn_c);

        retranslateUi(myCalc);

        QMetaObject::connectSlotsByName(myCalc);
    } // setupUi

    void retranslateUi(QDialog *myCalc)
    {
        myCalc->setWindowTitle(QApplication::translate("myCalc", "myCalc", 0));
        btn_clear->setText(QApplication::translate("myCalc", "c", 0));
        btn_delete->setText(QApplication::translate("myCalc", "<--", 0));
        btn_equal->setText(QApplication::translate("myCalc", "=", 0));
        btn7->setText(QApplication::translate("myCalc", "7", 0));
        btn8->setText(QApplication::translate("myCalc", "8", 0));
        btn9->setText(QApplication::translate("myCalc", "9", 0));
        btn_d->setText(QApplication::translate("myCalc", "/", 0));
        btn4->setText(QApplication::translate("myCalc", "4", 0));
        btn5->setText(QApplication::translate("myCalc", "5", 0));
        btn6->setText(QApplication::translate("myCalc", "6", 0));
        btn_c->setText(QApplication::translate("myCalc", "*", 0));
        btn1->setText(QApplication::translate("myCalc", "1", 0));
        btn2->setText(QApplication::translate("myCalc", "2", 0));
        btn3->setText(QApplication::translate("myCalc", "3", 0));
        btn_b->setText(QApplication::translate("myCalc", "-", 0));
        btn0->setText(QApplication::translate("myCalc", "0", 0));
        btn_pointer->setText(QApplication::translate("myCalc", ".", 0));
        btn_symbol->setText(QApplication::translate("myCalc", "+/-", 0));
        btn_a->setText(QApplication::translate("myCalc", "+", 0));
    } // retranslateUi

};

namespace Ui {
    class myCalc: public Ui_myCalc {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYCALC_H
