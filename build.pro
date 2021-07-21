QT += core gui
greaterThan(QT_MAJOR_VERSION, 4) QT += widgets
FORMS = src/stretchplay_new.ui
HEADERS = src/ui_stretchplay_new.h src/MusicPlayer.h src/wave.h
SOURCES = src/main.cpp src/MusicPlayer.cpp src/wave.cpp
TARGET = wavelow

unix {
	LIBS += $$PWD/libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ikpFlac.so
	LIBS += $$PWD/libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ikpMP3.so
	LIBS += -L$$PWD/libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ -lIrrKlang
}

macx {
	LIBS += $$PWD/libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/ikpFLAC.dylib
	LIBS += $$PWD/libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/ikpMP3.dylib
	LIBS += -L$$PWD/libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/ -lIrrKlang
}

win32 {
	LIBS += $$PWD/libs/irrKlang-64bit-1.6.0/bin/winx64-visualStudio/ikpFlac.dll
	LIBS += $$PWD/libs/irrKlang-64bit-1.6.0/bin/winx64-visualStudio/ikpMP3.dll
	LIBS += -L$$PWD/libs/irrKlang-64bit-1.6.0/bin/winx64-visualStudio/ -lIrrKlang

}

INCLUDEPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
DEPENDPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
