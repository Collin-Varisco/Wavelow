QT += core gui
greaterThan(QT_MAJOR_VERSION, 4) QT += widgets
FORMS = src/stretchplay_new.ui
HEADERS = src/ui_stretchplay_new.h src/MusicPlayer.h src/wave.h
SOURCES = src/main.cpp src/MusicPlayer.cpp src/wave.cpp
TARGET = wavely

LIBS += -L$$PWD/libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ -lIrrKlang
INCLUDEPATH += -I/usr/lib
INCLUDEPATH += $$PWD/libs/irrKlang-64bit-1.6.0/plugins/ikpMP3
INCLUDEPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
DEPENDPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
