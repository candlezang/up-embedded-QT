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

class Ui_OneForm
{
public:
    QPushButton *btn_gotwo;
    QPushButton *btn_gothree;
    QLabel *label;

    void setupUi(QWidget *OneForm)
    {
        if (OneForm->objectName().isEmpty())
            OneForm->setObjectName(QStringLiteral("OneForm"));
        OneForm->resize(400, 300);
        btn_gotwo = new QPushButton(OneForm);
        btn_gotwo->setObjectName(QStringLiteral("btn_gotwo"));
        btn_gotwo->setGeometry(QRect(60, 220, 97, 27));
        btn_gothree = new QPushButton(OneForm);
        btn_gothree->setObjectName(QStringLiteral("btn_gothree"));
        btn_gothree->setGeometry(QRect(200, 220, 97, 27));
        label = new QLabel(OneForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 30, 171, 101));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(OneForm);

        QMetaObject::connectSlotsByName(OneForm);
    } // setupUi

    void retranslateUi(QWidget *OneForm)
    {
        OneForm->setWindowTitle(QApplication::translate("OneForm", "OneForm", 0));
        btn_gotwo->setText(QApplication::translate("OneForm", "go two", 0));
        btn_gothree->setText(QApplication::translate("OneForm", "go three", 0));
        label->setText(QApplication::translate("OneForm", "\347\254\254\344\270\200\344\270\252\351\241\265\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class OneForm: public Ui_OneForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ONEFORM_H
