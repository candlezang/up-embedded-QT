/********************************************************************************
** Form generated from reading UI file 'threeform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_THREEFORM_H
#define UI_THREEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_threeForm
{
public:
    QLabel *label;
    QPushButton *btn_backtwo;

    void setupUi(QWidget *threeForm)
    {
        if (threeForm->objectName().isEmpty())
            threeForm->setObjectName(QStringLiteral("threeForm"));
        threeForm->resize(400, 300);
        label = new QLabel(threeForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 151, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        btn_backtwo = new QPushButton(threeForm);
        btn_backtwo->setObjectName(QStringLiteral("btn_backtwo"));
        btn_backtwo->setGeometry(QRect(130, 190, 97, 27));

        retranslateUi(threeForm);

        QMetaObject::connectSlotsByName(threeForm);
    } // setupUi

    void retranslateUi(QWidget *threeForm)
    {
        threeForm->setWindowTitle(QApplication::translate("threeForm", "Form", 0));
        label->setText(QApplication::translate("threeForm", "\347\254\254\344\270\211\344\270\252\351\241\265\351\235\242", 0));
        btn_backtwo->setText(QApplication::translate("threeForm", "back two", 0));
    } // retranslateUi

};

namespace Ui {
    class threeForm: public Ui_threeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREEFORM_H
