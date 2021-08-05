#!/bin/bash
mkdir ~/.local
mkdir ~/.local/bin
mkdir ~/.local/bin/wavelow
sudo cp libs/linux-gcc-64/ikpMP3.so /usr/lib
cp libs/linux-gcc-64/ikpMP3.so ~/.local/bin/wavelow
sudo cp libs/linux-gcc-64/libIrrKlang.so /usr/lib
cp libs/linux-gcc-64/libIrrKlang.so ~/.local/bin/wavelow
qmake
make
cp wavelow ~/.local/bin/wavelow
touch ~/.local/bin/wavelow/playlists.txt
sudo cp src/launch-scripts/linux/wavelow /usr/local/bin
sudo chmod +x /usr/local/bin/wavelow
