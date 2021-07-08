QT += core gui
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets
HEADERS = mainwindow.h
SOURCES = main.cpp mainwindow.cpp
TARGET = slowdown

LIBS += -L$$PWD/libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ -lIrrKlang
INCLUDEPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
DEPENDPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
