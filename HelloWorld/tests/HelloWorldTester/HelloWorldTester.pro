#-------------------------------------------------
#
# Project created by QtCreator 2013-08-22T10:44:07
#
#-------------------------------------------------

QT       += core
QT      += testlib

QT       -= gui

TARGET = HelloWorldTester
CONFIG   += console
CONFIG   += C++11
CONFIG   -= app_bundle

TEMPLATE = app

INCLUDEPATH += ../../src

HEADERS += ../../src/adder.h \
           ../../src/subtractor.h \
    testsubtractor.h
SOURCES += ../../src/adder.cpp \
           ../../src/subtractor.cpp \
    testsubtractor.cpp

SOURCES += main.cpp \
    testadder.cpp

HEADERS += \
    testadder.h
