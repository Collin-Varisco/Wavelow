/********************************************************************************
** Form generated from reading UI file 'stretchplay.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRETCHPLAY_H
#define UI_STRETCHPLAY_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QToolButton>
#include <phonon/volumeslider.h>

QT_BEGIN_NAMESPACE

class Ui_PlaybackDisplay
{
public:
    QLabel *CurrentSongDisplay;
    QSlider *SpeedSlider;
    QLabel *label_2;
    Phonon::VolumeSlider *volumeSlider;
    QPushButton *playButton;
    QToolButton *FileDialogButton;
    QLabel *OpenMusicLabel;
    QCheckBox *shuffleCheck;
    QPushButton *playButton_2;
    QPushButton *playButton_3;

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
        label_2 = new QLabel(PlaybackDisplay);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(30, 440, 151, 22));
        volumeSlider = new Phonon::VolumeSlider(PlaybackDisplay);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setGeometry(QRect(500, 420, 110, 16));
        volumeSlider->setStyleSheet(QString::fromUtf8("background-color: #efefef;"));
        volumeSlider->setIconSize(QSize(10, 10));
        playButton = new QPushButton(PlaybackDisplay);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(290, 400, 50, 50));
        playButton->setStyleSheet(QString::fromUtf8("color: Black;\n"
"background-color: White;"));
        FileDialogButton = new QToolButton(PlaybackDisplay);
        FileDialogButton->setObjectName(QString::fromUtf8("FileDialogButton"));
        FileDialogButton->setGeometry(QRect(140, 360, 33, 29));
        OpenMusicLabel = new QLabel(PlaybackDisplay);
        OpenMusicLabel->setObjectName(QString::fromUtf8("OpenMusicLabel"));
        OpenMusicLabel->setGeometry(QRect(30, 360, 101, 31));
        shuffleCheck = new QCheckBox(PlaybackDisplay);
        shuffleCheck->setObjectName(QString::fromUtf8("shuffleCheck"));
        shuffleCheck->setGeometry(QRect(30, 320, 107, 28));
        shuffleCheck->setStyleSheet(QString::fromUtf8("background-color: #efefef;"));
        playButton_2 = new QPushButton(PlaybackDisplay);
        playButton_2->setObjectName(QString::fromUtf8("playButton_2"));
        playButton_2->setGeometry(QRect(220, 400, 50, 50));
        playButton_2->setStyleSheet(QString::fromUtf8("color: Black;\n"
"background-color: White;"));
        playButton_3 = new QPushButton(PlaybackDisplay);
        playButton_3->setObjectName(QString::fromUtf8("playButton_3"));
        playButton_3->setGeometry(QRect(360, 400, 50, 50));
        playButton_3->setStyleSheet(QString::fromUtf8("color: Black;\n"
"background-color: White;"));

        retranslateUi(PlaybackDisplay);

        QMetaObject::connectSlotsByName(PlaybackDisplay);
    } // setupUi

    void retranslateUi(QFrame *PlaybackDisplay)
    {
        PlaybackDisplay->setWindowTitle(QCoreApplication::translate("PlaybackDisplay", "Frame", nullptr));
        CurrentSongDisplay->setText(QCoreApplication::translate("PlaybackDisplay", "<html><head/><body><p align=\"center\"><span style=\" font-size:20pt;\">Currently Playing</span></p></body></html>", nullptr));
        label_2->setText(QCoreApplication::translate("PlaybackDisplay", "Playback:", nullptr));
        playButton->setText(QCoreApplication::translate("PlaybackDisplay", "\342\217\257", nullptr));
        FileDialogButton->setText(QCoreApplication::translate("PlaybackDisplay", "...", nullptr));
        OpenMusicLabel->setText(QCoreApplication::translate("PlaybackDisplay", "<html><head/><body><p><span style=\" text-decoration: underline;\">Open Music</span></p></body></html>", nullptr));
        shuffleCheck->setText(QCoreApplication::translate("PlaybackDisplay", "Shuffle", nullptr));
        playButton_2->setText(QCoreApplication::translate("PlaybackDisplay", "\342\227\200", nullptr));
        playButton_3->setText(QCoreApplication::translate("PlaybackDisplay", "\342\226\266", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaybackDisplay: public Ui_PlaybackDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRETCHPLAY_H
