/********************************************************************************
** Form generated from reading UI file 'mainform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINFORM_H
#define UI_MAINFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainForm
{
public:
    QGridLayout *gridLayout_2;
    QWidget *widget;
    QLCDNumber *lcd_black;
    QLabel *lbl_black;
    QGridLayout *gridLayout;
    QWidget *widget_2;
    QLabel *lbl_white;
    QLCDNumber *lcd_white;
    QWidget *widget_3;
    QPushButton *btn_pvp;
    QPushButton *btn_pvc;
    QPushButton *btn_nvn;
    QComboBox *comboBox;

    void setupUi(QWidget *MainForm)
    {
        if (MainForm->objectName().isEmpty())
            MainForm->setObjectName(QStringLiteral("MainForm"));
        MainForm->resize(653, 398);
        gridLayout_2 = new QGridLayout(MainForm);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        widget = new QWidget(MainForm);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(150, 16777215));
        widget->setStyleSheet(QStringLiteral(""));
        lcd_black = new QLCDNumber(widget);
        lcd_black->setObjectName(QStringLiteral("lcd_black"));
        lcd_black->setGeometry(QRect(20, 100, 111, 81));
        lcd_black->setDigitCount(2);
        lbl_black = new QLabel(widget);
        lbl_black->setObjectName(QStringLiteral("lbl_black"));
        lbl_black->setGeometry(QRect(20, 10, 111, 81));

        gridLayout_2->addWidget(widget, 0, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        gridLayout_2->addLayout(gridLayout, 0, 1, 1, 1);

        widget_2 = new QWidget(MainForm);
        widget_2->setObjectName(QStringLiteral("widget_2"));
        widget_2->setMaximumSize(QSize(150, 16777215));
        widget_2->setStyleSheet(QStringLiteral(""));
        lbl_white = new QLabel(widget_2);
        lbl_white->setObjectName(QStringLiteral("lbl_white"));
        lbl_white->setGeometry(QRect(20, 10, 111, 81));
        lcd_white = new QLCDNumber(widget_2);
        lcd_white->setObjectName(QStringLiteral("lcd_white"));
        lcd_white->setGeometry(QRect(20, 100, 111, 81));
        lcd_white->setDigitCount(2);

        gridLayout_2->addWidget(widget_2, 0, 2, 1, 1);

        widget_3 = new QWidget(MainForm);
        widget_3->setObjectName(QStringLiteral("widget_3"));
        widget_3->setMaximumSize(QSize(16777215, 100));
        widget_3->setStyleSheet(QStringLiteral(""));
        btn_pvp = new QPushButton(widget_3);
        btn_pvp->setObjectName(QStringLiteral("btn_pvp"));
        btn_pvp->setGeometry(QRect(90, 40, 97, 27));
        btn_pvc = new QPushButton(widget_3);
        btn_pvc->setObjectName(QStringLiteral("btn_pvc"));
        btn_pvc->setGeometry(QRect(270, 40, 97, 27));
        btn_nvn = new QPushButton(widget_3);
        btn_nvn->setObjectName(QStringLiteral("btn_nvn"));
        btn_nvn->setGeometry(QRect(450, 40, 97, 27));
        comboBox = new QComboBox(widget_3);
        comboBox->setObjectName(QStringLiteral("comboBox"));
        comboBox->setGeometry(QRect(91, 10, 91, 27));

        gridLayout_2->addWidget(widget_3, 1, 0, 1, 3);


        retranslateUi(MainForm);

        QMetaObject::connectSlotsByName(MainForm);
    } // setupUi

    void retranslateUi(QWidget *MainForm)
    {
        MainForm->setWindowTitle(QApplication::translate("MainForm", "Form", 0));
        lbl_black->setText(QApplication::translate("MainForm", "TextLabel", 0));
        lbl_white->setText(QApplication::translate("MainForm", "TextLabel", 0));
        btn_pvp->setText(QApplication::translate("MainForm", "PVP", 0));
        btn_pvc->setText(QApplication::translate("MainForm", "PVC", 0));
        btn_nvn->setText(QApplication::translate("MainForm", "NVN", 0));
    } // retranslateUi

};

namespace Ui {
    class MainForm: public Ui_MainForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINFORM_H
