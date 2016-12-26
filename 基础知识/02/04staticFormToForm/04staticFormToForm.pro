#-------------------------------------------------
#
# Project created by QtCreator 2016-09-30T14:43:53
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = 04staticFormToForm
TEMPLATE = app


SOURCES += main.cpp\
        oneform.cpp \
    twoform.cpp \
    threeform.cpp \
    common.cpp

HEADERS  += oneform.h \
    twoform.h \
    threeform.h \
    common.h

FORMS    += oneform.ui \
    twoform.ui \
    threeform.ui
