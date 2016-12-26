/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn0;
    QPushButton *btn8;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn9;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(400, 238);
        lineEdit = new QLineEdit(Widget);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(102, 50, 271, 27));
        lineEdit_2 = new QLineEdit(Widget);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(102, 80, 271, 27));
        btn1 = new QPushButton(Widget);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(40, 120, 61, 41));
        btn2 = new QPushButton(Widget);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(110, 120, 61, 41));
        btn3 = new QPushButton(Widget);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(180, 120, 61, 41));
        btn4 = new QPushButton(Widget);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setGeometry(QRect(250, 120, 61, 41));
        btn5 = new QPushButton(Widget);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setGeometry(QRect(320, 120, 61, 41));
        btn0 = new QPushButton(Widget);
        btn0->setObjectName(QStringLiteral("btn0"));
        btn0->setGeometry(QRect(320, 170, 61, 41));
        btn8 = new QPushButton(Widget);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setGeometry(QRect(180, 170, 61, 41));
        btn6 = new QPushButton(Widget);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setGeometry(QRect(40, 170, 61, 41));
        btn7 = new QPushButton(Widget);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setGeometry(QRect(110, 170, 61, 41));
        btn9 = new QPushButton(Widget);
        btn9->setObjectName(QStringLiteral("btn9"));
        btn9->setGeometry(QRect(250, 170, 61, 41));
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(30, 51, 67, 17));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 81, 67, 17));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        lineEdit->setText(QString());
        lineEdit_2->setText(QString());
        btn1->setText(QApplication::translate("Widget", "1", 0));
        btn2->setText(QApplication::translate("Widget", "2", 0));
        btn3->setText(QApplication::translate("Widget", "3", 0));
        btn4->setText(QApplication::translate("Widget", "4", 0));
        btn5->setText(QApplication::translate("Widget", "5", 0));
        btn0->setText(QApplication::translate("Widget", "0", 0));
        btn8->setText(QApplication::translate("Widget", "8", 0));
        btn6->setText(QApplication::translate("Widget", "6", 0));
        btn7->setText(QApplication::translate("Widget", "7", 0));
        btn9->setText(QApplication::translate("Widget", "9", 0));
        label->setText(QApplication::translate("Widget", "\346\211\213\346\234\272\345\217\267\347\240\201:", 0));
        label_2->setText(QApplication::translate("Widget", "\351\223\266\350\241\214\345\215\241\345\217\267:", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
