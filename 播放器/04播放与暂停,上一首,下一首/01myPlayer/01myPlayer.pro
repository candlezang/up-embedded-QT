#-------------------------------------------------
#
# Project created by QtCreator 2016-10-17T10:15:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 01myPlayer
TEMPLATE = app


SOURCES += main.cpp\
        widget.cpp \
    myprocess.cpp

HEADERS  += widget.h \
    myprocess.h

FORMS    += widget.ui

RESOURCES += \
    res.qrc
