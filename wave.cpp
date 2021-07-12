#include "wave.h"
#include "MusicPlayer.h"
#include <QTimer>
#include <QDebug>
wave::wave(QFrame *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	musicPlayer = new MusicPlayer();
	connect( ui.openFolderButton, SIGNAL(clicked()), this, SLOT(addMusic()));
	connect( ui.playButton, SIGNAL(clicked()), this, SLOT(playSong()));
	connect( ui.previousButton, SIGNAL(clicked()), this, SLOT(previousSong()));
	connect(ui.nextButton, SIGNAL(clicked()), this, SLOT(nextSong()));
	connect(ui.SpeedSlider, SIGNAL(valueChanged(int)), this, SLOT(slideSpeed(int)));
	connect(ui.shuffleButton, SIGNAL(clicked()), this, SLOT(shuffleSongs()));
	connect(ui.nextPage, SIGNAL(clicked()), this, SLOT(nextPage()));
	connect(ui.previousPage, SIGNAL(clicked()), this, SLOT(previousPage()));

	// Selection buttons

	connect(ui.song_0, SIGNAL(clicked()), this, SLOT(song_zero()));
	connect(ui.song_1, SIGNAL(clicked()), this, SLOT(song_one()));
	connect(ui.song_2, SIGNAL(clicked()), this, SLOT(song_two()));
	connect(ui.song_3, SIGNAL(clicked()), this, SLOT(song_three()));
	connect(ui.song_4, SIGNAL(clicked()), this, SLOT(song_four()));
	connect(ui.song_5, SIGNAL(clicked()), this, SLOT(song_five()));
	QTimer *timer = new QTimer(this);
	connect(timer, SIGNAL(timeout()), this, SLOT(autoPlay()));
	timer->start(1000);


}

wave::~wave(){

}

void wave::addMusic(){
	QFileDialog dialog;
	dialog.setFileMode(QFileDialog::DirectoryOnly);
	dialog.setOption(QFileDialog::ShowDirsOnly, false);
	dialog.exec();
	musicPlayer->directoryName = dialog.directory().absolutePath();
	QDir directory(musicPlayer->directoryName);
	musicPlayer->songs = directory.entryList(QStringList() << "*.mp3" << ".MP3" << ".wav" << "*.WAV", QDir::Files);
	displaySongs();
	musicPlayer->currentSong = musicPlayer->songs.at(0);
	ui.SongDisplay->setText(musicPlayer->songs.at(0));
	songsLoaded = true;
	musicPlayer->play();
	qDebug() << "Reached end of addMusic()";
}


void wave::playSong(){
	if(songsLoaded){
		musicPlayer->play();
		musicPlayer->playSpeed = actualValue;
		musicPlayer->changePlaybackSpeed();
	}
}


void wave::nextSong(){
	resetTick();
	if(songsLoaded){
		musicPlayer->next();
		ui.songSlider->setMaximum(musicPlayer->getLength());
		ui.SongDisplay->setText(musicPlayer->songs.at(musicPlayer->songIndex));
	}
}

void wave::previousSong(){
	resetTick();
	if(songsLoaded){
		musicPlayer->previous();
		ui.songSlider->setMaximum(musicPlayer->getLength());
		ui.SongDisplay->setText(musicPlayer->songs.at(musicPlayer->songIndex));
	}
}

void wave::slideSpeed(int val){

	actualValue = (float)val / 100;
	if(songsLoaded){
		musicPlayer->playSpeed = actualValue;
		musicPlayer->changePlaybackSpeed();
	}
	std::string displaySpeed = "Speed: " + std::to_string(val) + "%";
	QString finalDisplaySpeed = QString::fromStdString(displaySpeed);
	ui.SpeedLabel->setText(finalDisplaySpeed);
}


void wave::displaySongs(){
	int item = displayPage * 6;
	ui.song_0->setText(musicPlayer->songs.at(item + 0));
	ui.song_1->setText(musicPlayer->songs.at(item + 1));
	ui.song_2->setText(musicPlayer->songs.at(item + 2));
	ui.song_3->setText(musicPlayer->songs.at(item + 3));
	ui.song_4->setText(musicPlayer->songs.at(item + 4));
	ui.song_5->setText(musicPlayer->songs.at(item + 5));
}

void wave::nextPage(){
	displayPage++;
	displaySongs();
}

void wave::previousPage(){
	displayPage--;
	displaySongs();
}

void wave::autoPlay(){

	qDebug() << "auto 1";
	if(songsLoaded == true && musicPlayer->isPaused() == false){

		qDebug() << "auto 2";

		float timeIncreasePercentage = (100 - ui.SpeedSlider->value()) + 100 / 100;
		qDebug() << timeIncreasePercentage;
		int newIncreasedTime = (int)(musicPlayer->getLength() * timeIncreasePercentage);
		ui.songSlider->setMaximum(newIncreasedTime);

		qDebug() << "auto 3";
		ui.songSlider->setValue(ui.songSlider->value()+1);
	}

	if(songsLoaded == true && musicPlayer->shuffle == true){
		if(musicPlayer->checkIfSoundEnded() == true){
			musicPlayer->next();
			ui.SongDisplay->setText(musicPlayer->currentSong);
		}
	}
}

void wave::shuffleSongs(){

	qDebug() << "shuffle";
	if(songsLoaded == true){
		musicPlayer->song_shuffle();
	}
}

void wave::resetTick(){
	if(songsLoaded == true){
		ui.songSlider->setValue(0);
	}
}

void wave::tick(){

}

void wave::song_zero(){
	int index = (6*displayPage) + 0;
	musicPlayer->playClickedSong(index);
}



void wave::song_one(){
	int index = (6*displayPage) + 1;
	musicPlayer->playClickedSong(index);
}

void wave::song_two(){
	int index = (6*displayPage) + 2;
	musicPlayer->playClickedSong(index);
}

void wave::song_three(){
	int index = (6*displayPage) + 3;
	musicPlayer->playClickedSong(index);
}

void wave::song_four(){
	int index = (6*displayPage) + 4;
	musicPlayer->playClickedSong(index);
}


void wave::song_five(){
	int index = (6*displayPage) + 5;
	musicPlayer->playClickedSong(index);
}
