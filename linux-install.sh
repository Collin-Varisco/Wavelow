#!/bin/sh
mkdir ~/.local
mkdir ~/.local/bin
cp libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ikpFlac.so ~/.local/bin
cp libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ikpMP3.so ~/.local/bin
cp libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/libIrrKlang.so ~/.local/bin
qmake
make
cp wavelow ~/.local/bin
sudo cp src/launch-scripts/linux/wavelow /usr/local/bin
sudo chmod +x /usr/local/bin/wavelow




