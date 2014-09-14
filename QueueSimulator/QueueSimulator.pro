#-------------------------------------------------
#
# Project created by QtCreator 2014-09-13T16:49:43
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QueueSimulator
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    simrunner.cpp \
    customer.cpp

HEADERS  += mainwindow.h \
    simrunner.h \
    customer.h

FORMS    += mainwindow.ui
