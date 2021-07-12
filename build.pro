QT += core gui
greaterThan(QT_MAJOR_VERSION, 4) QT += widgets
FORMS = stretchplay_new.ui
HEADERS = ui_stretchplay_new.h MusicPlayer.h wave.h
SOURCES = main.cpp MusicPlayer.cpp wave.cpp
TARGET = stretchplay

LIBS += -L$$PWD/libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ -lIrrKlang
INCLUDEPATH += -I/usr/lib
INCLUDEPATH += $$PWD/libs/irrKlang-64bit-1.6.0/plugins/ikpMP3
INCLUDEPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
DEPENDPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
