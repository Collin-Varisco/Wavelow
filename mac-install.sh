#!/bin/sh
sudo cp libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libikpFLAC.dylib /usr/local/lib
sudo cp libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libikpMP3.dylib /usr/local/lib
sudo cp libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libirrklang.dylib /usr/local/lib
qmake
make
touch wavelow.app/Contents/MacOS/playlists.txt
#sudo cp -R wavelow.app /Applications
#sudo mkdir -p /Applications/wavelow.app/Contents/Frameworks
#sudo cp -f libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libikpFLAC.dylib /Applications/wavelow.app/Contents/Frameworks
#sudo cp -f libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libikpMP3.dylib /Applications/wavelow.app/Contents/Frameworks
#sudo cp -f libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libirrklang.dylib /Applications/wavelow.app/Contents/Frameworks
