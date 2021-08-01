#!/bin/bash
make clean
rm Makefile .qmake.stash
rm -rf wavelow.app 
rm wavelow
rm ~/.local/bin/playlists.txt
rm ~/.local/bin/wavelow
rm ~/.local/bin/libIrrKlang.so ~/.local/bin/ikpMP3.so ~/.local/bin/ikpFlac.so
sudo rm -rf /Applications/wavelow.app
