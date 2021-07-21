/********************************************************************************
** Form generated from reading UI file 'stretchplay_new.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STRETCHPLAY_NEW_H
#define UI_STRETCHPLAY_NEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_PlaybackDisplay
{
public:
    QLabel *SpeedLabel;
    QPushButton *playButton;
    QPushButton *previousButton;
    QPushButton *nextButton;
    QSlider *songSlider;
    QFrame *Menu;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QPushButton *openFolderButton;
    QFrame *line;
    QPushButton *recentButton;
    QFrame *line_2;
    QPushButton *exitButton;
    QPushButton *nextPage;
    QLabel *SongDisplay;
    QPushButton *previousPage;
    QGroupBox *verticalGroupBox;
    QVBoxLayout *verticalLayout_3;
    QPushButton *song_0;
    QFrame *line_4;
    QPushButton *song_1;
    QFrame *line_9;
    QPushButton *song_2;
    QFrame *line_7;
    QPushButton *song_3;
    QFrame *line_10;
    QPushButton *song_4;
    QFrame *line_6;
    QPushButton *song_5;
    QLabel *label;
    QSlider *SpeedSlider;
    QSlider *volumeSlider;
    QLabel *volumeLabel;
    QPushButton *shuffleButton;

    void setupUi(QWidget *PlaybackDisplay)
    {
        if (PlaybackDisplay->objectName().isEmpty())
            PlaybackDisplay->setObjectName(QString::fromUtf8("PlaybackDisplay"));
        PlaybackDisplay->resize(640, 486);
        PlaybackDisplay->setStyleSheet(QString::fromUtf8("background-color: black;\n"
"color: white;"));
        SpeedLabel = new QLabel(PlaybackDisplay);
        SpeedLabel->setObjectName(QString::fromUtf8("SpeedLabel"));
        SpeedLabel->setGeometry(QRect(40, 420, 111, 22));
        playButton = new QPushButton(PlaybackDisplay);
        playButton->setObjectName(QString::fromUtf8("playButton"));
        playButton->setGeometry(QRect(290, 430, 50, 50));
        playButton->setCursor(QCursor(Qt::PointingHandCursor));
        playButton->setStyleSheet(QString::fromUtf8("color: White;\n"
"background-color: black;\n"
"border: 1px solid White;"));
        previousButton = new QPushButton(PlaybackDisplay);
        previousButton->setObjectName(QString::fromUtf8("previousButton"));
        previousButton->setGeometry(QRect(220, 430, 50, 50));
        previousButton->setCursor(QCursor(Qt::PointingHandCursor));
        previousButton->setStyleSheet(QString::fromUtf8("color: White;\n"
"background-color: black;\n"
"border: 1px solid White;"));
        nextButton = new QPushButton(PlaybackDisplay);
        nextButton->setObjectName(QString::fromUtf8("nextButton"));
        nextButton->setGeometry(QRect(360, 430, 50, 50));
        nextButton->setCursor(QCursor(Qt::PointingHandCursor));
        nextButton->setStyleSheet(QString::fromUtf8("color: White;\n"
"background-color: black;\n"
"border: 1px solid White;"));
        songSlider = new QSlider(PlaybackDisplay);
        songSlider->setObjectName(QString::fromUtf8("songSlider"));
        songSlider->setGeometry(QRect(220, 400, 191, 20));
        songSlider->setCursor(QCursor(Qt::SizeHorCursor));
        songSlider->setStyleSheet(QString::fromUtf8("QSlider::groove::horizontal{ \n"
"		height: 6px; \n"
"	\n"
"\n"
"	     border-radius:6px;\n"
"		border: 1px solid white;\n"
" } \n"
"\n"
"\n"
"QSlider::handle:horizontal{ \n"
"		width:  10px; \n"
"		height: 10px; \n"
"		margin-top: -20px; \n"
"		margin-left: 0px; \n"
"		margin-bottom: -20px; \n"
"		margin-right: 0px; \n"
"		background: white;\n"
"		border: 1 px white;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal{\n"
"	   background:rgba(80,166,234,1);\n"
"}\n"
"\n"
"\n"
""));
        songSlider->setOrientation(Qt::Horizontal);
        Menu = new QFrame(PlaybackDisplay);
        Menu->setObjectName(QString::fromUtf8("Menu"));
        Menu->setGeometry(QRect(0, 35, 131, 155));
        Menu->setCursor(QCursor(Qt::PointingHandCursor));
        Menu->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        verticalLayout = new QVBoxLayout(Menu);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox = new QGroupBox(Menu);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        openFolderButton = new QPushButton(groupBox);
        openFolderButton->setObjectName(QString::fromUtf8("openFolderButton"));
        openFolderButton->setStyleSheet(QString::fromUtf8("border: none;"));

        verticalLayout_2->addWidget(openFolderButton);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        recentButton = new QPushButton(groupBox);
        recentButton->setObjectName(QString::fromUtf8("recentButton"));
        recentButton->setStyleSheet(QString::fromUtf8("border: none;"));

        verticalLayout_2->addWidget(recentButton);

        line_2 = new QFrame(groupBox);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line_2);

        exitButton = new QPushButton(groupBox);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setStyleSheet(QString::fromUtf8("border: none;"));

        verticalLayout_2->addWidget(exitButton);


        verticalLayout->addWidget(groupBox);

        nextPage = new QPushButton(PlaybackDisplay);
        nextPage->setObjectName(QString::fromUtf8("nextPage"));
        nextPage->setGeometry(QRect(590, 316, 41, 30));
        nextPage->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        SongDisplay = new QLabel(PlaybackDisplay);
        SongDisplay->setObjectName(QString::fromUtf8("SongDisplay"));
        SongDisplay->setGeometry(QRect(0, 360, 641, 22));
        previousPage = new QPushButton(PlaybackDisplay);
        previousPage->setObjectName(QString::fromUtf8("previousPage"));
        previousPage->setGeometry(QRect(90, 316, 41, 30));
        previousPage->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));
        verticalGroupBox = new QGroupBox(PlaybackDisplay);
        verticalGroupBox->setObjectName(QString::fromUtf8("verticalGroupBox"));
        verticalGroupBox->setGeometry(QRect(140, 35, 441, 311));
        verticalGroupBox->setStyleSheet(QString::fromUtf8("border: 1px solid white;\n"
"text-align: left;"));
        verticalLayout_3 = new QVBoxLayout(verticalGroupBox);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        song_0 = new QPushButton(verticalGroupBox);
        song_0->setObjectName(QString::fromUtf8("song_0"));
        song_0->setCursor(QCursor(Qt::PointingHandCursor));
        song_0->setStyleSheet(QString::fromUtf8("border: none;"));

        verticalLayout_3->addWidget(song_0);

        line_4 = new QFrame(verticalGroupBox);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_4);

        song_1 = new QPushButton(verticalGroupBox);
        song_1->setObjectName(QString::fromUtf8("song_1"));
        song_1->setCursor(QCursor(Qt::PointingHandCursor));
        song_1->setStyleSheet(QString::fromUtf8("border: none;"));

        verticalLayout_3->addWidget(song_1);

        line_9 = new QFrame(verticalGroupBox);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setFrameShape(QFrame::HLine);
        line_9->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_9);

        song_2 = new QPushButton(verticalGroupBox);
        song_2->setObjectName(QString::fromUtf8("song_2"));
        song_2->setCursor(QCursor(Qt::PointingHandCursor));
        song_2->setStyleSheet(QString::fromUtf8("border: none;"));

        verticalLayout_3->addWidget(song_2);

        line_7 = new QFrame(verticalGroupBox);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_7);

        song_3 = new QPushButton(verticalGroupBox);
        song_3->setObjectName(QString::fromUtf8("song_3"));
        song_3->setCursor(QCursor(Qt::PointingHandCursor));
        song_3->setStyleSheet(QString::fromUtf8("border: none;"));

        verticalLayout_3->addWidget(song_3);

        line_10 = new QFrame(verticalGroupBox);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_10);

        song_4 = new QPushButton(verticalGroupBox);
        song_4->setObjectName(QString::fromUtf8("song_4"));
        song_4->setCursor(QCursor(Qt::PointingHandCursor));
        song_4->setStyleSheet(QString::fromUtf8("border: none;"));

        verticalLayout_3->addWidget(song_4);

        line_6 = new QFrame(verticalGroupBox);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);

        verticalLayout_3->addWidget(line_6);

        song_5 = new QPushButton(verticalGroupBox);
        song_5->setObjectName(QString::fromUtf8("song_5"));
        song_5->setCursor(QCursor(Qt::PointingHandCursor));
        song_5->setStyleSheet(QString::fromUtf8("border: none;\n"
""));

        verticalLayout_3->addWidget(song_5);

        label = new QLabel(PlaybackDisplay);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 1, 641, 31));
        SpeedSlider = new QSlider(PlaybackDisplay);
        SpeedSlider->setObjectName(QString::fromUtf8("SpeedSlider"));
        SpeedSlider->setGeometry(QRect(35, 447, 121, 16));
        SpeedSlider->setCursor(QCursor(Qt::SizeHorCursor));
        SpeedSlider->setStyleSheet(QString::fromUtf8("QSlider::groove::horizontal{ \n"
"		height: 6px; \n"
"	\n"
"\n"
"	     border-radius:6px;\n"
"		border: 1px solid white;\n"
" } \n"
"\n"
"\n"
"QSlider::handle:horizontal{ \n"
"		width:  10px; \n"
"		height: 10px; \n"
"		margin-top: -20px; \n"
"		margin-left: 0px; \n"
"		margin-bottom: -20px; \n"
"		margin-right: 0px; \n"
"		background: white;\n"
"		border: 1 px white;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal{\n"
"	   background: White;\n"
"}\n"
"\n"
"\n"
""));
        SpeedSlider->setMaximum(100);
        SpeedSlider->setValue(75);
        SpeedSlider->setOrientation(Qt::Horizontal);
        volumeSlider = new QSlider(PlaybackDisplay);
        volumeSlider->setObjectName(QString::fromUtf8("volumeSlider"));
        volumeSlider->setGeometry(QRect(480, 447, 121, 16));
        volumeSlider->setCursor(QCursor(Qt::SizeHorCursor));
        volumeSlider->setStyleSheet(QString::fromUtf8("QSlider::groove::horizontal{ \n"
"		height: 6px; \n"
"	\n"
"\n"
"	     border-radius:6px;\n"
"		border: 1px solid white;\n"
" } \n"
"\n"
"\n"
"QSlider::handle:horizontal{ \n"
"		width:  10px; \n"
"		height: 10px; \n"
"		margin-top: -20px; \n"
"		margin-left: 0px; \n"
"		margin-bottom: -20px; \n"
"		margin-right: 0px; \n"
"		background: white;\n"
"		border: 1 px white;\n"
"}\n"
"\n"
"QSlider::sub-page:horizontal{\n"
"	   background: White;\n"
"}\n"
"\n"
"\n"
""));
        volumeSlider->setMaximum(100);
        volumeSlider->setValue(100);
        volumeSlider->setOrientation(Qt::Horizontal);
        volumeLabel = new QLabel(PlaybackDisplay);
        volumeLabel->setObjectName(QString::fromUtf8("volumeLabel"));
        volumeLabel->setGeometry(QRect(480, 420, 121, 22));
        shuffleButton = new QPushButton(PlaybackDisplay);
        shuffleButton->setObjectName(QString::fromUtf8("shuffleButton"));
        shuffleButton->setGeometry(QRect(50, 390, 81, 24));
        shuffleButton->setStyleSheet(QString::fromUtf8("border: 1px solid white;"));

        retranslateUi(PlaybackDisplay);

        QMetaObject::connectSlotsByName(PlaybackDisplay);
    } // setupUi

    void retranslateUi(QWidget *PlaybackDisplay)
    {
        PlaybackDisplay->setWindowTitle(QCoreApplication::translate("PlaybackDisplay", "Frame", nullptr));
        SpeedLabel->setText(QCoreApplication::translate("PlaybackDisplay", "<html><head/><body><p align=\"center\">Speed: 75%</p></body></html>", nullptr));
        playButton->setText(QCoreApplication::translate("PlaybackDisplay", "\342\217\257", nullptr));
        previousButton->setText(QCoreApplication::translate("PlaybackDisplay", "\342\227\200", nullptr));
        nextButton->setText(QCoreApplication::translate("PlaybackDisplay", "\342\226\266", nullptr));
        openFolderButton->setText(QCoreApplication::translate("PlaybackDisplay", "Open", nullptr));
        recentButton->setText(QCoreApplication::translate("PlaybackDisplay", "Recent", nullptr));
        exitButton->setText(QCoreApplication::translate("PlaybackDisplay", "Exit", nullptr));
        nextPage->setText(QCoreApplication::translate("PlaybackDisplay", ">", nullptr));
        SongDisplay->setText(QCoreApplication::translate("PlaybackDisplay", "<html><head/><body><p align=\"center\">Name of the song</p></body></html>", nullptr));
        previousPage->setText(QCoreApplication::translate("PlaybackDisplay", "<", nullptr));
        song_0->setText(QString());
        song_1->setText(QString());
        song_2->setText(QString());
        song_3->setText(QString());
        song_4->setText(QString());
        song_5->setText(QString());
        label->setText(QCoreApplication::translate("PlaybackDisplay", "<html><head/><body><p align=\"center\"><span style=\" font-weight:600; font-style:italic;\">Wavelow</span></p></body></html>", nullptr));
        volumeLabel->setText(QCoreApplication::translate("PlaybackDisplay", "<html><head/><body><p align=\"center\">Volume: 100%</p></body></html>", nullptr));
        shuffleButton->setText(QCoreApplication::translate("PlaybackDisplay", "Shuffle", nullptr));
    } // retranslateUi

};

namespace Ui {
    class PlaybackDisplay: public Ui_PlaybackDisplay {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STRETCHPLAY_NEW_H
