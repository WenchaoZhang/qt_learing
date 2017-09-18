#-------------------------------------------------
#
# Project created by QtCreator 2017-09-18T08:30:51
#
#-------------------------------------------------

QT       += core gui serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = serialAss
TEMPLATE = app


SOURCES += main.cpp\
        mydialog.cpp

HEADERS  += mydialog.h

FORMS    += mydialog.ui

RC_FILE += ha.rc
