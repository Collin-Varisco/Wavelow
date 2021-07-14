#ifndef MUSICPLAYER_H_
#define MUSICPLAYER_H_



#include <QDebug>
#include <QStringList>
#include <QDir>
#include <QList>
#include <QHash>
#include <QListView>
#include <QFileInfo>
#include <QStringListModel>
#include <stdlib.h>
#include <QFileDialog>
#include <irrKlang.h>
#include <vector>
#include <iostream>

using namespace irrklang;



class MusicPlayer {

private:
    // Player functionality
    ISoundEngine* engine;
    ISound* sound;

    // Audio

public:
    MusicPlayer();
    virtual ~MusicPlayer();
    int getLength();
    void song_shuffle();
    // Song/Directory information
    QString directoryName;
    QStringList songs;
    QString currentSong;
    float playSpeed = 0.75f;
    float volume = 1.0f;
    std::vector<int> shuffledIndex;
    bool shuffle = false;
    bool paused = false;
    bool firstPlay = true;
    int songIndex = 0;
    void changePlaybackSpeed();

    void displayPlayTime();
    void changeVolume();
    void initializeSound();
    void playClickedSong(int index);
    void setPosition(int time);
    void getShuffleIndex();
    void play();
    void pause();
    void next();
    void previous();
    bool isPaused();
    QString getCurrentDirectory();
    bool checkIfSoundEnded();
    QString getFolderName();
    QStringList getSongs();
};

#endif
