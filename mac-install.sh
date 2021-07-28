#!/bin/sh
mkdir ~/.local
mkdir ~/.local/bin
cp libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ikpFLAC.dylib ~/.local/bin
cp libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ikpMP3.dylib ~/.local/bin
cp libs/irrKlang-64bit-1.6.0/bin/macosx-gcc/libirrklang.dylib ~/.local/bin
qmake
make
cp wavelow ~/.local/bin
sudo cp src/mac/wavelow /usr/local/bin
sudo chmod +x /usr/local/bin/wavelow




