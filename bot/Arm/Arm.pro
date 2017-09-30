#-------------------------------------------------
#
# Project created by QtCreator 2017-09-28T13:07:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Arm
TEMPLATE = app


SOURCES += main.cpp\
        mymainwindow.cpp \
    serialwidget.cpp \
    controlwidget.cpp \
    ballcontrol.cpp \
    barcontrol.cpp \
    opencvwidget.cpp

HEADERS  += mymainwindow.h \
    serialwidget.h \
    controlwidget.h \
    ballcontrol.h \
    barcontrol.h \
    opencvwidget.h

FORMS    += mymainwindow.ui \
    serialwidget.ui \
    controlwidget.ui \
    ballcontrol.ui \
    barcontrol.ui \
    opencvwidget.ui

RC_FILE += 7.rc
