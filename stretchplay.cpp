#include "stretchplay.h"
#include "MusicPlayer.h"
#include <QTimer>
StretchPlay::StretchPlay(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);

    musicPlayer = new MusicPlayer();

    connect(ui.FileDialogButton, SIGNAL(clicked()), this, SLOT(addMusic()));
    connect(ui.playButton, SIGNAL(clicked()), this, SLOT(playSong()));
    connect(ui.playButton_2, SIGNAL(clicked()), this, SLOT(previousSong()));
    connect(ui.playButton_3, SIGNAL(clicked()), this, SLOT(nextSong()));
    connect(ui.SpeedSlider, SIGNAL(valueChanged(int)), this, SLOT(slideSpeed(int)));
    connect(ui.shuffleCheck, SIGNAL(clicked()), this, SLOT(shuffleSongs()));
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(autoPlay()));
    timer->start(1000);

}



StretchPlay::~StretchPlay()
{

}


MusicPlayer* StretchPlay::getMusicPlayer(){
    return musicPlayer;
}

void StretchPlay::addMusic(){
    QFileDialog dialog;
    dialog.setFileMode(QFileDialog::DirectoryOnly);
    dialog.setOption(QFileDialog::ShowDirsOnly, false);
    dialog.exec();
    musicPlayer->directoryName = dialog.directory().absolutePath();
    QDir directory(musicPlayer->directoryName);
    musicPlayer->songs = directory.entryList(QStringList() << "*.mp3" << ".MP3" << ".wav" << "*.WAV", QDir::Files);
    musicPlayer->currentSong = musicPlayer->songs.at(0);
    ui.CurrentSongDisplay->setText(musicPlayer->songs.at(0));
    musicPlayer->play();
    songsLoaded = true;
}

void StretchPlay::displaySong(){
}

void StretchPlay::playSong(){
    musicPlayer->play();
}

void StretchPlay::nextSong(){
    musicPlayer->next();
    ui.CurrentSongDisplay->setText(musicPlayer->songs.at(musicPlayer->songIndex));
}

void StretchPlay::previousSong(){
    musicPlayer->previous();
    ui.CurrentSongDisplay->setText(musicPlayer->songs.at(musicPlayer->songIndex)); 
}

void StretchPlay::slideSpeed(int val){
    float actualValue = (float)val / 100;
    musicPlayer->playSpeed = actualValue;
    musicPlayer->changePlaybackSpeed();
    std::string displaySpeed = "Speed: " + std::to_string(val) + "%";
    QString finalDisplaySpeed = QString::fromStdString(displaySpeed);
    ui.label_2->setText(finalDisplaySpeed);
}


void StretchPlay::autoPlay(){
    if(songsLoaded == true){
        if(musicPlayer->checkIfSoundEnded() == true){
            musicPlayer->next();
            ui.CurrentSongDisplay->setText(musicPlayer->currentSong);
        }
    }
}

void StretchPlay::shuffleSongs(){
    if(songsLoaded == true){
        musicPlayer->song_shuffle();
    }
}