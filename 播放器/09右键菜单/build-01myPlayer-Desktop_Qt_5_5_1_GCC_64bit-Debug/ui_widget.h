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
#include <QtWidgets/QDial>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QGridLayout *gridLayout_3;
    QGridLayout *gridLayout;
    QWidget *widget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QSlider *horizontalSlider;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btn_open;
    QPushButton *btn_previous;
    QPushButton *btn_play;
    QPushButton *btn_next;
    QPushButton *btn_voice;
    QDial *dial;
    QSpacerItem *horizontalSpacer;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(584, 447);
        gridLayout_3 = new QGridLayout(Widget);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));

        gridLayout_3->addLayout(gridLayout, 0, 0, 1, 1);

        widget = new QWidget(Widget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setMaximumSize(QSize(16777215, 90));
        gridLayout_2 = new QGridLayout(widget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout_2->addWidget(label);

        horizontalSlider = new QSlider(widget);
        horizontalSlider->setObjectName(QStringLiteral("horizontalSlider"));
        horizontalSlider->setFocusPolicy(Qt::NoFocus);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setOrientation(Qt::Horizontal);

        horizontalLayout_2->addWidget(horizontalSlider);


        gridLayout_2->addLayout(horizontalLayout_2, 0, 0, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        btn_open = new QPushButton(widget);
        btn_open->setObjectName(QStringLiteral("btn_open"));
        btn_open->setFocusPolicy(Qt::NoFocus);
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images/open3.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_open->setIcon(icon);
        btn_open->setIconSize(QSize(50, 50));
        btn_open->setFlat(true);

        horizontalLayout->addWidget(btn_open);

        btn_previous = new QPushButton(widget);
        btn_previous->setObjectName(QStringLiteral("btn_previous"));
        btn_previous->setFocusPolicy(Qt::NoFocus);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/images/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_previous->setIcon(icon1);
        btn_previous->setIconSize(QSize(50, 50));
        btn_previous->setFlat(true);

        horizontalLayout->addWidget(btn_previous);

        btn_play = new QPushButton(widget);
        btn_play->setObjectName(QStringLiteral("btn_play"));
        btn_play->setFocusPolicy(Qt::NoFocus);
        btn_play->setStyleSheet(QStringLiteral(""));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/images/play.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_play->setIcon(icon2);
        btn_play->setIconSize(QSize(50, 50));
        btn_play->setFlat(true);

        horizontalLayout->addWidget(btn_play);

        btn_next = new QPushButton(widget);
        btn_next->setObjectName(QStringLiteral("btn_next"));
        btn_next->setFocusPolicy(Qt::NoFocus);
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_next->setIcon(icon3);
        btn_next->setIconSize(QSize(50, 50));
        btn_next->setFlat(true);

        horizontalLayout->addWidget(btn_next);

        btn_voice = new QPushButton(widget);
        btn_voice->setObjectName(QStringLiteral("btn_voice"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/images/voice.png"), QSize(), QIcon::Normal, QIcon::Off);
        btn_voice->setIcon(icon4);
        btn_voice->setIconSize(QSize(50, 50));
        btn_voice->setFlat(true);

        horizontalLayout->addWidget(btn_voice);

        dial = new QDial(widget);
        dial->setObjectName(QStringLiteral("dial"));
        dial->setMaximumSize(QSize(80, 80));
        dial->setFocusPolicy(Qt::NoFocus);
        dial->setMaximum(100);
        dial->setNotchesVisible(true);

        horizontalLayout->addWidget(dial);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);


        gridLayout_2->addLayout(horizontalLayout, 1, 0, 1, 1);


        gridLayout_3->addWidget(widget, 1, 0, 1, 1);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "\346\222\255\346\224\276\345\231\250", 0));
        label->setText(QApplication::translate("Widget", "00:00:00", 0));
        btn_open->setText(QString());
        btn_previous->setText(QString());
        btn_play->setText(QString());
        btn_next->setText(QString());
        btn_voice->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
