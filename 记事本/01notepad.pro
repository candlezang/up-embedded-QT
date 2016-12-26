#-------------------------------------------------
#
# Project created by QtCreator 2016-10-10T09:58:39
#
#-------------------------------------------------

QT       += core gui printsupport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 01notepad
TEMPLATE = app


SOURCES += main.cpp\
        mynotepad.cpp \
    subtext.cpp \
    searchdialog.cpp \
    replacedialog.cpp

HEADERS  += mynotepad.h \
    subtext.h \
    searchdialog.h \
    replacedialog.h

FORMS    += mynotepad.ui \
    searchdialog.ui \
    replacedialog.ui

RESOURCES += \
    res.qrc
