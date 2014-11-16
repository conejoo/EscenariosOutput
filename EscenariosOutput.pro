#-------------------------------------------------
#
# Project created by QtCreator 2014-11-16T19:17:22
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = EscenariosOutput
TEMPLATE = app

QMAKE_CXXFLAGS += -std=c++0x -U__STRICT_ANSI__

SOURCES += main.cpp\
        mainwindow.cpp \
    resultsfile.cpp

HEADERS  += mainwindow.h \
    resultsfile.h \
    Utils.h

FORMS    += mainwindow.ui
