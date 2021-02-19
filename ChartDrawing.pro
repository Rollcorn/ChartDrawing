TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG += qt
QT += widgets
QT += gui

SOURCES += \
        chartarea.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
    chartarea.h \
    mainwindow.h
