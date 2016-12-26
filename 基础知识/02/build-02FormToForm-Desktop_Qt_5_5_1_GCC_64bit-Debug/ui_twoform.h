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

class Ui_twoForm
{
public:
    QPushButton *btn_backone;
    QPushButton *btn_gothree;
    QLabel *label;

    void setupUi(QWidget *twoForm)
    {
        if (twoForm->objectName().isEmpty())
            twoForm->setObjectName(QStringLiteral("twoForm"));
        twoForm->resize(400, 300);
        btn_backone = new QPushButton(twoForm);
        btn_backone->setObjectName(QStringLiteral("btn_backone"));
        btn_backone->setGeometry(QRect(80, 200, 97, 27));
        btn_gothree = new QPushButton(twoForm);
        btn_gothree->setObjectName(QStringLiteral("btn_gothree"));
        btn_gothree->setGeometry(QRect(210, 200, 97, 27));
        label = new QLabel(twoForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 151, 81));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(twoForm);

        QMetaObject::connectSlotsByName(twoForm);
    } // setupUi

    void retranslateUi(QWidget *twoForm)
    {
        twoForm->setWindowTitle(QApplication::translate("twoForm", "Form", 0));
        btn_backone->setText(QApplication::translate("twoForm", "back one", 0));
        btn_gothree->setText(QApplication::translate("twoForm", "go three", 0));
        label->setText(QApplication::translate("twoForm", "\347\254\254\344\272\214\344\270\252\351\241\265\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class twoForm: public Ui_twoForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TWOFORM_H
