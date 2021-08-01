#!/bin/sh
qtVersion=$(ls /usr/local/Cellar/Qt)
qtPath=/usr/local/Cellar/Qt/$qtVersion
echo $qtPath
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
#sudo cp -R wavelow.app /Applications
#sudo mkdir -p /Applications/wavelow.app/Contents/Frameworks
#sudo cp -f libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libikpFLAC.dylib /Applications/wavelow.app/Contents/Frameworks
#sudo cp -f libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libikpMP3.dylib /Applications/wavelow.app/Contents/Frameworks
#sudo cp -f libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libirrklang.dylib /Applications/wavelow.app/Contents/Frameworks
