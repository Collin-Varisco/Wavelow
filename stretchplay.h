#ifndef STRETCHPLAYEXALNQ_H
#define STRETCHPLAYEXALNQ_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <QDebug>
#include <QObject>
#include <QGraphicsRectItem>
#include <QDir>
#include <QFileDialog>
#include <QString>
#include <QStringList>
#include <irrKlang.h>
#include <iostream>
#include <string>
#include "MusicPlayer.h"
#include <QWidget>
#include <QMainWindow>
#include "ui_stretchplay.h"
using namespace irrklang;
QT_BEGIN_NAMESPACE

class StretchPlay : public QMainWindow
{
    Q_OBJECT
public:
    StretchPlay(QWidget *parent = 0);
    ~StretchPlay();
    void displaySong();
    bool songsLoaded = false;
    public slots:
        MusicPlayer* getMusicPlayer();
        void addMusic();
        void playSong();
        void nextSong();
        void previousSong();
        void slideSpeed(int val);
        void autoPlay();
        void shuffleSongs();
    private:
        Ui::PlaybackDisplay ui;
        MusicPlayer* musicPlayer;
};
#endif // STRETCHPLAYEXALNQ_H
