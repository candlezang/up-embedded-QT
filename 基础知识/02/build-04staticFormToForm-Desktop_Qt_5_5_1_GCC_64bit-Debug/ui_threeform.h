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

class Ui_ThreeForm
{
public:
    QPushButton *btn_goone;
    QPushButton *btn_gotwo;
    QLabel *label;

    void setupUi(QWidget *ThreeForm)
    {
        if (ThreeForm->objectName().isEmpty())
            ThreeForm->setObjectName(QStringLiteral("ThreeForm"));
        ThreeForm->resize(400, 300);
        btn_goone = new QPushButton(ThreeForm);
        btn_goone->setObjectName(QStringLiteral("btn_goone"));
        btn_goone->setGeometry(QRect(70, 230, 97, 27));
        btn_gotwo = new QPushButton(ThreeForm);
        btn_gotwo->setObjectName(QStringLiteral("btn_gotwo"));
        btn_gotwo->setGeometry(QRect(210, 230, 97, 27));
        label = new QLabel(ThreeForm);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(110, 40, 171, 101));
        QFont font;
        font.setPointSize(20);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);

        retranslateUi(ThreeForm);

        QMetaObject::connectSlotsByName(ThreeForm);
    } // setupUi

    void retranslateUi(QWidget *ThreeForm)
    {
        ThreeForm->setWindowTitle(QApplication::translate("ThreeForm", "Form", 0));
        btn_goone->setText(QApplication::translate("ThreeForm", "go one", 0));
        btn_gotwo->setText(QApplication::translate("ThreeForm", "go two", 0));
        label->setText(QApplication::translate("ThreeForm", "\347\254\254\344\270\211\344\270\252\351\241\265\351\235\242", 0));
    } // retranslateUi

};

namespace Ui {
    class ThreeForm: public Ui_ThreeForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_THREEFORM_H
