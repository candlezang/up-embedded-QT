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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_2;
    QSpacerItem *verticalSpacer;
    QSpacerItem *horizontalSpacer;
    QGridLayout *gridLayout;
    QLabel *lbl_name;
    QLineEdit *ledit_name;
    QLabel *lbl_psswd;
    QLineEdit *ledit_passwd;
    QPushButton *btn_login;
    QPushButton *btn_cancel;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *verticalSpacer_2;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(506, 336);
        gridLayout_2 = new QGridLayout(Widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        verticalSpacer = new QSpacerItem(20, 101, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer, 0, 1, 1, 1);

        horizontalSpacer = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer, 1, 0, 1, 1);

        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        lbl_name = new QLabel(Widget);
        lbl_name->setObjectName(QStringLiteral("lbl_name"));

        gridLayout->addWidget(lbl_name, 0, 0, 1, 1);

        ledit_name = new QLineEdit(Widget);
        ledit_name->setObjectName(QStringLiteral("ledit_name"));

        gridLayout->addWidget(ledit_name, 0, 1, 1, 2);

        lbl_psswd = new QLabel(Widget);
        lbl_psswd->setObjectName(QStringLiteral("lbl_psswd"));

        gridLayout->addWidget(lbl_psswd, 1, 0, 1, 1);

        ledit_passwd = new QLineEdit(Widget);
        ledit_passwd->setObjectName(QStringLiteral("ledit_passwd"));
        ledit_passwd->setEchoMode(QLineEdit::Password);

        gridLayout->addWidget(ledit_passwd, 1, 1, 1, 2);

        btn_login = new QPushButton(Widget);
        btn_login->setObjectName(QStringLiteral("btn_login"));

        gridLayout->addWidget(btn_login, 2, 0, 1, 2);

        btn_cancel = new QPushButton(Widget);
        btn_cancel->setObjectName(QStringLiteral("btn_cancel"));

        gridLayout->addWidget(btn_cancel, 2, 2, 1, 1);


        gridLayout_2->addLayout(gridLayout, 1, 1, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(141, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_2->addItem(horizontalSpacer_2, 1, 2, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 100, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 2, 1, 1, 1);

        QWidget::setTabOrder(ledit_name, ledit_passwd);
        QWidget::setTabOrder(ledit_passwd, btn_login);
        QWidget::setTabOrder(btn_login, btn_cancel);

        retranslateUi(Widget);
        QObject::connect(btn_cancel, SIGNAL(clicked()), ledit_name, SLOT(clear()));
        QObject::connect(btn_cancel, SIGNAL(clicked()), ledit_passwd, SLOT(clear()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        lbl_name->setText(QApplication::translate("Widget", "\345\270\220\345\217\267:", 0));
        ledit_name->setText(QApplication::translate("Widget", "dffff", 0));
        lbl_psswd->setText(QApplication::translate("Widget", "\345\257\206\347\240\201:", 0));
        ledit_passwd->setText(QString());
        btn_login->setText(QApplication::translate("Widget", "\347\231\273\345\275\225", 0));
        btn_cancel->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
