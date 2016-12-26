/********************************************************************************
** Form generated from reading UI file 'twoform.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TWOFORM_H
#define UI_TWOFORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TwoForm
{
public:
    QPushButton *btn_gothree;
    QLabel *label;
    QPushButton *btn_goone;

    void setupUi(QWidget *TwoForm)
    {
        if (TwoForm->objectName().isEmpty())
            TwoForm->setObjectName(QStringLiteral("TwoForm"));
        TwoForm->resize(400, 300);
        btn_gothree = new QPushButton(TwoForm);
        btn_gothree->setObjectName(QStringLiteral("btn_gothree"));
        btn_gothree->setGeometry(QRect(190, 220, 97, 27));
        label = new QLabel(TwoForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 30, 171, 101));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        btn_goone = new QPushButton(TwoForm);
        btn_goone->setObjectName(QStringLiteral("btn_goone"));
        btn_goone->setGeometry(QRect(50, 220, 97, 27));

        retranslateUi(TwoForm);

        QMetaObject::connectSlotsByName(TwoForm);
    } // setupUi

    void retranslateUi(QWidget *TwoForm)
    {
        TwoForm->setWindowTitle(QApplication::translate("TwoForm", "Form", 0));
        btn_gothree->setText(QApplication::translate("TwoForm", "go three", 0));
        label->setText(QApplication::translate("TwoForm", "\347\254\254\344\272\214\344\270\252\351\241\265\351\235\242", 0));
        btn_goone->setText(QApplication::translate("TwoForm", "go one", 0));
    } // retranslateUi

};

namespace Ui {
    class TwoForm: public Ui_TwoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOFORM_H
