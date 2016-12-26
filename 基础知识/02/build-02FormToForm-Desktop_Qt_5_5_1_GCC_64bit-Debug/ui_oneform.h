/********************************************************************************
** Form generated from reading UI file 'oneform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ONEFORM_H
#define UI_ONEFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_oneForm
{
public:
    QLabel *label;
    QPushButton *btn_gotwo;

    void setupUi(QWidget *oneForm)
    {
        if (oneForm->objectName().isEmpty())
            oneForm->setObjectName(QStringLiteral("oneForm"));
        oneForm->resize(400, 300);
        label = new QLabel(oneForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 40, 161, 71));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        btn_gotwo = new QPushButton(oneForm);
        btn_gotwo->setObjectName(QStringLiteral("btn_gotwo"));
        btn_gotwo->setGeometry(QRect(130, 170, 111, 31));

        retranslateUi(oneForm);

        QMetaObject::connectSlotsByName(oneForm);
    } // setupUi

    void retranslateUi(QWidget *oneForm)
    {
        oneForm->setWindowTitle(QApplication::translate("oneForm", "oneForm", 0));
        label->setText(QApplication::translate("oneForm", "\347\254\254\344\270\200\344\270\252\351\241\265\351\235\242", 0));
        btn_gotwo->setText(QApplication::translate("oneForm", "go two", 0));
    } // retranslateUi

};

namespace Ui {
    class oneForm: public Ui_oneForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEFORM_H
