/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMdiArea>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_new;
    QAction *action_save;
    QAction *action_saveAdd;
    QAction *action_print;
    QAction *action_exit;
    QAction *action_search;
    QAction *action_replace;
    QAction *action_undo;
    QAction *action_redo;
    QAction *action_cut;
    QAction *action_copy;
    QAction *action_paste;
    QAction *action_del;
    QAction *action_allSelect;
    QAction *action_changeLine;
    QAction *action16;
    QAction *action30;
    QAction *action60;
    QAction *action72;
    QAction *actionGB18030;
    QAction *actionUTF_8;
    QAction *action_close;
    QAction *action_closeAll;
    QAction *action_pingpu;
    QAction *action_cengdie;
    QAction *action_prive;
    QAction *action_next;
    QAction *action_bg1;
    QAction *action_bg2;
    QAction *action_bg3;
    QAction *action_about;
    QAction *action_Qt;
    QAction *action_open;
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QMdiArea *mdiArea;
    QStatusBar *statusBar;
    QToolBar *mainToolBar;
    QMenuBar *menuBar;
    QMenu *menu;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_3;
    QMenu *menu_4;
    QMenu *menu_W;
    QMenu *menu_5;
    QMenu *menu_H;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(534, 423);
        action_new = new QAction(MainWindow);
        action_new->setObjectName(QStringLiteral("action_new"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/images1/new.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_new->setIcon(icon);
        action_save = new QAction(MainWindow);
        action_save->setObjectName(QStringLiteral("action_save"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/images1/save.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_save->setIcon(icon1);
        action_saveAdd = new QAction(MainWindow);
        action_saveAdd->setObjectName(QStringLiteral("action_saveAdd"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/images1/saveAs.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_saveAdd->setIcon(icon2);
        action_print = new QAction(MainWindow);
        action_print->setObjectName(QStringLiteral("action_print"));
        action_exit = new QAction(MainWindow);
        action_exit->setObjectName(QStringLiteral("action_exit"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/images1/exit.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_exit->setIcon(icon3);
        action_search = new QAction(MainWindow);
        action_search->setObjectName(QStringLiteral("action_search"));
        action_replace = new QAction(MainWindow);
        action_replace->setObjectName(QStringLiteral("action_replace"));
        action_undo = new QAction(MainWindow);
        action_undo->setObjectName(QStringLiteral("action_undo"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/images1/undo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_undo->setIcon(icon4);
        action_redo = new QAction(MainWindow);
        action_redo->setObjectName(QStringLiteral("action_redo"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/images1/redo.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_redo->setIcon(icon5);
        action_cut = new QAction(MainWindow);
        action_cut->setObjectName(QStringLiteral("action_cut"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/new/prefix1/images1/cut.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_cut->setIcon(icon6);
        action_copy = new QAction(MainWindow);
        action_copy->setObjectName(QStringLiteral("action_copy"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/new/prefix1/images1/copy.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_copy->setIcon(icon7);
        action_paste = new QAction(MainWindow);
        action_paste->setObjectName(QStringLiteral("action_paste"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/new/prefix1/images1/paste.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_paste->setIcon(icon8);
        action_del = new QAction(MainWindow);
        action_del->setObjectName(QStringLiteral("action_del"));
        action_allSelect = new QAction(MainWindow);
        action_allSelect->setObjectName(QStringLiteral("action_allSelect"));
        action_changeLine = new QAction(MainWindow);
        action_changeLine->setObjectName(QStringLiteral("action_changeLine"));
        action_changeLine->setCheckable(true);
        action16 = new QAction(MainWindow);
        action16->setObjectName(QStringLiteral("action16"));
        action30 = new QAction(MainWindow);
        action30->setObjectName(QStringLiteral("action30"));
        action60 = new QAction(MainWindow);
        action60->setObjectName(QStringLiteral("action60"));
        action72 = new QAction(MainWindow);
        action72->setObjectName(QStringLiteral("action72"));
        actionGB18030 = new QAction(MainWindow);
        actionGB18030->setObjectName(QStringLiteral("actionGB18030"));
        actionUTF_8 = new QAction(MainWindow);
        actionUTF_8->setObjectName(QStringLiteral("actionUTF_8"));
        action_close = new QAction(MainWindow);
        action_close->setObjectName(QStringLiteral("action_close"));
        action_closeAll = new QAction(MainWindow);
        action_closeAll->setObjectName(QStringLiteral("action_closeAll"));
        action_pingpu = new QAction(MainWindow);
        action_pingpu->setObjectName(QStringLiteral("action_pingpu"));
        action_cengdie = new QAction(MainWindow);
        action_cengdie->setObjectName(QStringLiteral("action_cengdie"));
        action_prive = new QAction(MainWindow);
        action_prive->setObjectName(QStringLiteral("action_prive"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/new/prefix1/images1/previous.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_prive->setIcon(icon9);
        action_next = new QAction(MainWindow);
        action_next->setObjectName(QStringLiteral("action_next"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/new/prefix1/images1/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_next->setIcon(icon10);
        action_bg1 = new QAction(MainWindow);
        action_bg1->setObjectName(QStringLiteral("action_bg1"));
        action_bg2 = new QAction(MainWindow);
        action_bg2->setObjectName(QStringLiteral("action_bg2"));
        action_bg3 = new QAction(MainWindow);
        action_bg3->setObjectName(QStringLiteral("action_bg3"));
        action_about = new QAction(MainWindow);
        action_about->setObjectName(QStringLiteral("action_about"));
        QIcon icon11;
        icon11.addFile(QStringLiteral(":/new/prefix1/images1/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_about->setIcon(icon11);
        action_Qt = new QAction(MainWindow);
        action_Qt->setObjectName(QStringLiteral("action_Qt"));
        action_open = new QAction(MainWindow);
        action_open->setObjectName(QStringLiteral("action_open"));
        QIcon icon12;
        icon12.addFile(QStringLiteral(":/new/prefix1/images1/open.png"), QSize(), QIcon::Normal, QIcon::Off);
        action_open->setIcon(icon12);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        mdiArea = new QMdiArea(centralWidget);
        mdiArea->setObjectName(QStringLiteral("mdiArea"));

        gridLayout_2->addWidget(mdiArea, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 534, 28));
        menu = new QMenu(menuBar);
        menu->setObjectName(QStringLiteral("menu"));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QStringLiteral("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QStringLiteral("menu_E"));
        menu_3 = new QMenu(menu_E);
        menu_3->setObjectName(QStringLiteral("menu_3"));
        menu_4 = new QMenu(menu_E);
        menu_4->setObjectName(QStringLiteral("menu_4"));
        menu_W = new QMenu(menuBar);
        menu_W->setObjectName(QStringLiteral("menu_W"));
        menu_5 = new QMenu(menu_W);
        menu_5->setObjectName(QStringLiteral("menu_5"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QStringLiteral("menu_H"));
        MainWindow->setMenuBar(menuBar);

        mainToolBar->addAction(action_new);
        mainToolBar->addAction(action_open);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_save);
        mainToolBar->addAction(action_saveAdd);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_undo);
        mainToolBar->addAction(action_redo);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_cut);
        mainToolBar->addAction(action_copy);
        mainToolBar->addAction(action_paste);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_prive);
        mainToolBar->addAction(action_next);
        mainToolBar->addSeparator();
        mainToolBar->addAction(action_exit);
        menuBar->addAction(menu->menuAction());
        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_W->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu->addAction(action_new);
        menu->addAction(action_open);
        menu->addSeparator();
        menu->addAction(action_save);
        menu->addAction(action_saveAdd);
        menu->addSeparator();
        menu->addAction(action_print);
        menu->addSeparator();
        menu->addAction(action_exit);
        menu_F->addAction(action_search);
        menu_F->addAction(action_replace);
        menu_E->addAction(action_undo);
        menu_E->addAction(action_redo);
        menu_E->addSeparator();
        menu_E->addAction(action_cut);
        menu_E->addAction(action_copy);
        menu_E->addAction(action_paste);
        menu_E->addSeparator();
        menu_E->addAction(action_del);
        menu_E->addAction(action_allSelect);
        menu_E->addSeparator();
        menu_E->addAction(menu_4->menuAction());
        menu_E->addAction(menu_3->menuAction());
        menu_E->addAction(action_changeLine);
        menu_3->addAction(action16);
        menu_3->addAction(action30);
        menu_3->addAction(action60);
        menu_3->addAction(action72);
        menu_4->addAction(actionGB18030);
        menu_4->addAction(actionUTF_8);
        menu_W->addAction(action_close);
        menu_W->addAction(action_closeAll);
        menu_W->addSeparator();
        menu_W->addAction(action_pingpu);
        menu_W->addAction(action_cengdie);
        menu_W->addSeparator();
        menu_W->addAction(action_prive);
        menu_W->addAction(action_next);
        menu_W->addSeparator();
        menu_W->addAction(menu_5->menuAction());
        menu_5->addAction(action_bg1);
        menu_5->addAction(action_bg2);
        menu_5->addAction(action_bg3);
        menu_H->addAction(action_about);
        menu_H->addAction(action_Qt);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        action_new->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\346\226\207\344\273\266(&N)", 0));
        action_new->setShortcut(QApplication::translate("MainWindow", "Ctrl+N", 0));
        action_save->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230(&S)", 0));
        action_save->setShortcut(QApplication::translate("MainWindow", "Ctrl+S", 0));
        action_saveAdd->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272(&A)", 0));
        action_saveAdd->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        action_print->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260(&P)", 0));
        action_exit->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272(&E)", 0));
        action_exit->setShortcut(QApplication::translate("MainWindow", "Esc", 0));
        action_search->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276(&N)", 0));
        action_search->setShortcut(QApplication::translate("MainWindow", "Ctrl+F", 0));
        action_replace->setText(QApplication::translate("MainWindow", "\346\233\277\346\215\242(&R)", 0));
        action_replace->setShortcut(QApplication::translate("MainWindow", "Ctrl+R", 0));
        action_undo->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200(&U)", 0));
        action_redo->setText(QApplication::translate("MainWindow", "\346\201\242\345\244\215(&R)", 0));
        action_cut->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207(&T)", 0));
        action_cut->setShortcut(QApplication::translate("MainWindow", "Ctrl+X", 0));
        action_copy->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266(&C)", 0));
        action_copy->setShortcut(QApplication::translate("MainWindow", "Ctrl+C", 0));
        action_paste->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264(&P)", 0));
        action_paste->setShortcut(QApplication::translate("MainWindow", "Ctrl+V", 0));
        action_del->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244(&D)", 0));
        action_allSelect->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211(&S)", 0));
        action_allSelect->setShortcut(QApplication::translate("MainWindow", "Ctrl+A", 0));
        action_changeLine->setText(QApplication::translate("MainWindow", "\350\207\252\345\212\250\346\215\242\350\241\214", 0));
        action16->setText(QApplication::translate("MainWindow", "16", 0));
        action30->setText(QApplication::translate("MainWindow", "30", 0));
        action60->setText(QApplication::translate("MainWindow", "60", 0));
        action72->setText(QApplication::translate("MainWindow", "72", 0));
        actionGB18030->setText(QApplication::translate("MainWindow", "GB18030", 0));
        actionUTF_8->setText(QApplication::translate("MainWindow", "UTF-8", 0));
        action_close->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255(&L)", 0));
        action_closeAll->setText(QApplication::translate("MainWindow", "\345\205\250\351\203\250\345\205\263\351\227\255(&A)", 0));
        action_pingpu->setText(QApplication::translate("MainWindow", "\345\271\263\351\223\272(&C)", 0));
        action_cengdie->setText(QApplication::translate("MainWindow", "\345\261\202\345\217\240(&T)", 0));
        action_prive->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\344\270\252(&P)", 0));
        action_next->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\344\270\252(&N)", 0));
        action_bg1->setText(QApplication::translate("MainWindow", "white", 0));
        action_bg2->setText(QApplication::translate("MainWindow", "black", 0));
        action_bg3->setText(QApplication::translate("MainWindow", "blue", 0));
        action_about->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216(&A)", 0));
        action_Qt->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216Qt(&Q)", 0));
        action_open->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\346\226\207\344\273\266(&O)", 0));
        action_open->setShortcut(QApplication::translate("MainWindow", "Ctrl+O", 0));
        menu->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266(&F)", 0));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\220\234\347\264\242(&S)", 0));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221(&E)", 0));
        menu_3->setTitle(QApplication::translate("MainWindow", "\345\255\227\344\275\223\345\244\247\345\260\217", 0));
        menu_4->setTitle(QApplication::translate("MainWindow", "\347\274\226\347\240\201(&O)", 0));
        menu_W->setTitle(QApplication::translate("MainWindow", "\347\252\227\345\217\243(&W)", 0));
        menu_5->setTitle(QApplication::translate("MainWindow", "\346\224\271\345\217\230\350\203\214\346\231\257", 0));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251(&H)", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
