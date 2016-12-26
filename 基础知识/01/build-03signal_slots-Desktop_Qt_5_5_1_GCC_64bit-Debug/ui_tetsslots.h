/********************************************************************************
** Form generated from reading UI file 'tetsslots.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TETSSLOTS_H
#define UI_TETSSLOTS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_tetsSlots
{
public:
    QLineEdit *lineEdit;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn8;
    QPushButton *btn6;
    QPushButton *btn5;
    QPushButton *btn7;

    void setupUi(QWidget *tetsSlots)
    {
        if (tetsSlots->objectName().isEmpty())
            tetsSlots->setObjectName(QStringLiteral("tetsSlots"));
        tetsSlots->resize(400, 300);
        lineEdit = new QLineEdit(tetsSlots);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(50, 40, 311, 27));
        btn1 = new QPushButton(tetsSlots);
        btn1->setObjectName(QStringLiteral("btn1"));
        btn1->setGeometry(QRect(90, 90, 41, 27));
        btn2 = new QPushButton(tetsSlots);
        btn2->setObjectName(QStringLiteral("btn2"));
        btn2->setGeometry(QRect(140, 90, 41, 27));
        btn3 = new QPushButton(tetsSlots);
        btn3->setObjectName(QStringLiteral("btn3"));
        btn3->setGeometry(QRect(200, 90, 41, 27));
        btn4 = new QPushButton(tetsSlots);
        btn4->setObjectName(QStringLiteral("btn4"));
        btn4->setGeometry(QRect(260, 90, 41, 27));
        btn8 = new QPushButton(tetsSlots);
        btn8->setObjectName(QStringLiteral("btn8"));
        btn8->setGeometry(QRect(260, 130, 41, 27));
        btn6 = new QPushButton(tetsSlots);
        btn6->setObjectName(QStringLiteral("btn6"));
        btn6->setGeometry(QRect(140, 130, 41, 27));
        btn5 = new QPushButton(tetsSlots);
        btn5->setObjectName(QStringLiteral("btn5"));
        btn5->setGeometry(QRect(90, 130, 41, 27));
        btn7 = new QPushButton(tetsSlots);
        btn7->setObjectName(QStringLiteral("btn7"));
        btn7->setGeometry(QRect(200, 130, 41, 27));

        retranslateUi(tetsSlots);

        QMetaObject::connectSlotsByName(tetsSlots);
    } // setupUi

    void retranslateUi(QWidget *tetsSlots)
    {
        tetsSlots->setWindowTitle(QApplication::translate("tetsSlots", "tetsSlots", 0));
        btn1->setText(QApplication::translate("tetsSlots", "1", 0));
        btn2->setText(QApplication::translate("tetsSlots", "2", 0));
        btn3->setText(QApplication::translate("tetsSlots", "3", 0));
        btn4->setText(QApplication::translate("tetsSlots", "4", 0));
        btn8->setText(QApplication::translate("tetsSlots", "8", 0));
        btn6->setText(QApplication::translate("tetsSlots", "6", 0));
        btn5->setText(QApplication::translate("tetsSlots", "5", 0));
        btn7->setText(QApplication::translate("tetsSlots", "7", 0));
    } // retranslateUi

};

namespace Ui {
    class tetsSlots: public Ui_tetsSlots {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TETSSLOTS_H
