/********************************************************************************
** Form generated from reading UI file 'stretchplayEXaLnQ.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

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
using namespace irrklang;
QT_BEGIN_NAMESPACE

class Ui_PlaybackDisplay : public QObject, public QGraphicsRectItem
{
    Q_OBJECT
public:
    ISoundEngine* engine = createIrrKlangDevice();
    ISound* music;
    QLabel *CurrentSongDisplay;
    QSlider *SpeedSlider;
    QLabel *label_2;
    QPushButton *playButton;
    QToolButton *FileDialogButton;
    QLabel *OpenMusicLabel;
    QCheckBox *shuffleCheck;
    QPushButton *previousButton;
    QPushButton *nextButton;

    QString folderName;
    QStringList songs;
    QString currentSong;
    int playIndex = 0;
    float playSpeed = 0.75f;
    bool shuffleMode = false;
    bool paused = false;
    bool started = false;
    void play(){
        if(started == false){
            std::string slash = "/";
            std::string songStr = folderName.toUtf8().constData() + slash + songs.at(playIndex).toUtf8().constData();
            const char *songPath = songStr.c_str();
            music = engine->play2D(songPath, true, false, true, ESM_AUTO_DETECT, true);
            music->setPlaybackSpeed(playSpeed);
            started = true;
        } else {
            if(paused == true){
                engine->setAllSoundsPaused(false);
                paused = false;
            } else {
                engine->setAllSoundsPaused(true);
                paused = true;
            }
        } 
    }

    void getMusicDirectory(){
	    QFileDialog dialog;
	    dialog.setFileMode(QFileDialog::DirectoryOnly);
	    dialog.setOption(QFileDialog::ShowDirsOnly, false);
	    dialog.exec();
	    folderName = dialog.directory().absolutePath();
	    QDir directory(folderName);
	    songs = directory.entryList(QStringList() << "*.mp3" << ".MP3" << ".wav" << "*.WAV", QDir::Files);
	    currentSong = songs.at(0); CurrentSongDisplay->setText(currentSong);
    }

    void nextSong(){
        if(shuffleMode == false){
            playIndex++;
            currentSong = songs.at(playIndex);
            CurrentSongDisplay->setText(currentSong);
            engine->removeAllSoundSources();
            std::string slash = "/";
            std::string songStr = folderName.toUtf8().constData() + slash + songs.at(playIndex).toUtf8().constData();
            const char *songPath = songStr.c_str();
            music = engine->play2D(songPath, true, false, true, ESM_AUTO_DETECT, true);
            music->setPlaybackSpeed(playSpeed);
        }
    }

    void previousSong(){
        if(playIndex == 0){
            return;
        }
        if(shuffleMode == false){
            playIndex--;
            currentSong = songs.at(playIndex);
            CurrentSongDisplay->setText(currentSong);
            engine->removeAllSoundSources();
            std::string slash = "/";
            std::string songStr = folderName.toUtf8().constData() + slash + songs.at(playIndex).toUtf8().constData();
            const char *songPath = songStr.c_str();
            music = engine->play2D(songPath, true, false, true, ESM_AUTO_DETECT, true);
            music->setPlaybackSpeed(playSpeed);
        }
    }


    void setupUi(QFrame *PlaybackDisplay)
    {
        if (PlaybackDisplay->objectName().isEmpty())
            PlaybackDisplay->setObjectName(QString::fromUtf8("PlaybackDisplay"));
        PlaybackDisplay->resize(640, 480);
        PlaybackDisplay->setStyleSheet(QString::fromUtf8("background-color: #efefef;\n"
"color: Black;"));
        CurrentSongDisplay = new QLabel(PlaybackDisplay);
        CurrentSongDisplay->setObjectName(QString::fromUtf8("CurrentSongDisplay"));
        CurrentSongDisplay->setGeometry(QRect(0, 20, 641, 51));
        SpeedSlider = new QSlider(PlaybackDisplay);
        SpeedSlider->setObjectName(QString::fromUtf8("SpeedSlider"));
        SpeedSlider->setGeometry(QRect(30, 420, 110, 16));
        SpeedSlider->setStyleSheet(QString::fromUtf8("background-color: #efefef;\n"
""));
        SpeedSlider->setMaximum(100);
        SpeedSlider->setValue(75);
        SpeedSlider->setOrientation(Qt::Horizontal);
        connect(SpeedSlider, SIGNAL(valueChanged(int)), this, SLOT(slideSpeed(int)));
        label_2 = new QLabel(PlaybackDisplay);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 440, 151, 22));
        playButton = new QPushButton(PlaybackDisplay);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(290, 400, 50, 50));
        playButton->setStyleSheet(QString::fromUtf8("color: Black;\n"
"background-color: White;"));
        connect(playButton, &QPushButton::released, this, &Ui_PlaybackDisplay::play);
        FileDialogButton = new QToolButton(PlaybackDisplay);
        FileDialogButton->setObjectName(QString::fromUtf8("FileDialogButton"));
        FileDialogButton->setGeometry(QRect(140, 360, 33, 29));
        connect(FileDialogButton, &QPushButton::released, this, &Ui_PlaybackDisplay::getMusicDirectory);
        OpenMusicLabel = new QLabel(PlaybackDisplay);
        OpenMusicLabel->setObjectName(QString::fromUtf8("OpenMusicLabel"));
        OpenMusicLabel->setGeometry(QRect(30, 360, 101, 31));
        shuffleCheck = new QCheckBox(PlaybackDisplay);
        shuffleCheck->setObjectName(QString::fromUtf8("shuffleCheck"));
        shuffleCheck->setGeometry(QRect(30, 320, 107, 28));
        shuffleCheck->setStyleSheet(QString::fromUtf8("background-color: #efefef;"));
        previousButton = new QPushButton(PlaybackDisplay);
        previousButton->setObjectName(QString::fromUtf8("playButton_2"));
        previousButton->setGeometry(QRect(220, 400, 50, 50));
        previousButton->setStyleSheet(QString::fromUtf8("color: Black;\n"
"background-color: White;"));
        connect(previousButton, &QPushButton::released, this, &Ui_PlaybackDisplay::previousSong);
        nextButton = new QPushButton(PlaybackDisplay);
        nextButton->setObjectName(QString::fromUtf8("playButton_3"));
        nextButton->setGeometry(QRect(360, 400, 50, 50));
        nextButton->setStyleSheet(QString::fromUtf8("color: Black;\n"
"background-color: White;"));
        connect(nextButton, &QPushButton::released, this, &Ui_PlaybackDisplay::nextSong);

        retranslateUi(PlaybackDisplay);

        QMetaObject::connectSlotsByName(PlaybackDisplay);
    } // setupUi

    void retranslateUi(QFrame *PlaybackDisplay)
    {
        PlaybackDisplay->setWindowTitle(QCoreApplication::translate("PlaybackDisplay", "Frame", nullptr));
        CurrentSongDisplay->setText(QCoreApplication::translate("PlaybackDisplay", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Currently Playing</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("PlaybackDisplay", "Speed: 75%", nullptr));
        playButton->setText(QCoreApplication::translate("PlaybackDisplay", "\342\217\257", nullptr));
        FileDialogButton->setText(QCoreApplication::translate("PlaybackDisplay", "...", nullptr));
        OpenMusicLabel->setText(QCoreApplication::translate("PlaybackDisplay", "<html><head/><body><p><span style=\" text-decoration: underline;\">Open Music</span></p></body></html>", nullptr));
        shuffleCheck->setText(QCoreApplication::translate("PlaybackDisplay", "Shuffle", nullptr));
        previousButton->setText(QCoreApplication::translate("PlaybackDisplay", "\342\227\200", nullptr));
        nextButton->setText(QCoreApplication::translate("PlaybackDisplay", "\342\226\266", nullptr));
    } // retranslateUi

public slots:
    void slideSpeed(int val){
        float actualValue = (float)val / 100;
        playSpeed = actualValue;
        if(started == true){
            music->setPlaybackSpeed(actualValue);
        }
        std::string displaySpeed = "Speed: " + std::to_string(val) + "%";
        QString finalDisplaySpeed = QString::fromStdString(displaySpeed);
        label_2->setText(finalDisplaySpeed);
    }
};

namespace Ui {
    class PlaybackDisplay: public Ui_PlaybackDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // STRETCHPLAYEXALNQ_H
