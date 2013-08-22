#-------------------------------------------------
#
# Project created by QtCreator 2013-08-22T10:03:54
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = HelloWorld
TEMPLATE = app


SOURCES += src/main.cpp\
        src/mainwindow.cpp \
    src/adder.cpp \
    src/subtractor.cpp

HEADERS  += src/mainwindow.h \
    src/adder.h \
    src/subtractor.h

FORMS    += src/mainwindow.ui
