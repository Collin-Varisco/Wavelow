QT += core gui
greaterThan(QT_MAJOR_VERSION, 4) QT += widgets
FORMS = src/stretchplay_new.ui
HEADERS = src/ui_stretchplay_new.h src/MusicPlayer.h src/wave.h
SOURCES = src/main.cpp src/MusicPlayer.cpp src/wave.cpp
TARGET = wavelow

unix {
    macx {
        LIBS += /usr/local/lib/libirrklang.dylib
    } 
    else {
        LIBS += ~/.local/bin/ikpFlac.so
        LIBS += ~/.local/bin/ikpMP3.so
        LIBS += ~/.local/bin/libIrrKlang.so
    }
}


win32 {
	LIBS += $$PWD/libs/irrKlang-64bit-1.6.0/bin/winx64-visualStudio/ikpFlac.dll
	LIBS += $$PWD/libs/irrKlang-64bit-1.6.0/bin/winx64-visualStudio/ikpMP3.dll
	LIBS += -L$$PWD/libs/irrKlang-64bit-1.6.0/bin/winx64-visualStudio/ -lIrrKlang

}

INCLUDEPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
DEPENDPATH += $$PWD/libs/irrKlang-64bit-1.6.0/include
