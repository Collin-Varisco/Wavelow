#!/bin/sh
workdir=$(dirname $(readlink -f $0))
cd
mkdir .local/bin
home=$(dirname $(readlink -f $0))
cd $workdir
cp $workdir/libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ikpFlac.so $home/.local/bin
cp $workdir/libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/ikpMP3.so $home/.local/bin
cp $workdir/libs/irrKlang-64bit-1.6.0/bin/linux-gcc-64/libIrrKlang.so $home/.local/bin
qmake
make
cp wavelow-bin $home/.local/bin
cp src/wavelow $home/.local/bin
chmod +x $home/.local/bin/wavelow
sudo ln -s $home/.local/bin/wavelow /usr/local/bin
