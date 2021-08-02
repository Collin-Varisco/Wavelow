#!/bin/bash
sudo cp libs/macosx-gcc/ikpMP3.dylib /usr/local/lib
sudo cp libs/macosx-gcc/libirrklang.dylib /usr/local/lib
qmake
make
mkdir wavelow.app/Contents/Frameworks
cp -R libs/macosx-gcc/ wavelow.app/Contents/Frameworks/
cp -R libs/macosx-gcc/ wavelow.app/Contents/MacOS/
install_name_tool -change /usr/local/lib/libirrklang.dylib @executable_path/../Frameworks/libirrklang.dylib wavelow.app/Contents/MacOS/wavelow
install_name_tool -change /usr/local/lib/libikpMP3.dylib @executable_path/../Frameworks/ikpMP3.dylib wavelow.app/Contents/MacOS/wavelow
touch wavelow.app/Contents/MacOS/playlists.txt
