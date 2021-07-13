#include "wave.h"
#include "MusicPlayer.h"
#include <QTimer>
#include <QDebug>
wave::wave(QFrame *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	musicPlayer = new MusicPlayer();
	connect( ui.exitButton, SIGNAL(clicked()), this, SLOT(quit()));
	connect( ui.openFolderButton, SIGNAL(clicked()), this, SLOT(addMusic()));
	connect( ui.playButton, SIGNAL(clicked()), this, SLOT(playSong()));
	connect( ui.previousButton, SIGNAL(clicked()), this, SLOT(previousSong()));
	connect(ui.nextButton, SIGNAL(clicked()), this, SLOT(nextSong()));
	connect(ui.SpeedSlider, SIGNAL(valueChanged(int)), this, SLOT(slideSpeed(int)));
	connect(ui.volumeSlider, SIGNAL(valueChanged(int)), this, SLOT(slideVolume(int)));
	connect(ui.shuffleButton, SIGNAL(clicked()), this, SLOT(shuffleSongs()));
	connect(ui.nextPage, SIGNAL(clicked()), this, SLOT(nextPage()));
	connect(ui.previousPage, SIGNAL(clicked()), this, SLOT(previousPage()));

	// Selection buttons
	actualValue = 0.75f;
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

void wave::quit(){
	QApplication::quit();
}

void wave::addMusic(){
	QFileDialog dialog;
	dialog.setFileMode(QFileDialog::DirectoryOnly);
	if(dialog.exec()){
		musicPlayer->directoryName = dialog.directory().absolutePath();
		QDir dirAll(musicPlayer->directoryName);
		musicPlayer->songs = dirAll.entryList(QStringList() << "*.mp3" << "*.MP3" << "*.wav" << "*.WAV", QDir::Files);
		musicPlayer->currentSong = musicPlayer->songs.at(0);
		ui.SongDisplay->setText(musicPlayer->songs.at(0));
		musicPlayer->initializeSound();
		musicPlayer->changeVolume();
		songsLoaded = true;

		if(musicPlayer->songs.size() % 6 == 0){

			qDebug() << "Initializing pages";
			fullPages = musicPlayer->songs.size() / 6;
			remainderSongs = 0;
			qDebug() << "Finished Initializing pages";
		} else {
			qDebug() << "Initializing pages";
			fullPages = musicPlayer->songs.size() / 6;
			remainderSongs = musicPlayer->songs.size() % 6;
			qDebug() << "Finished Initializing pages";
		}

		displaySongs();
	}
	/*
	QString dirname = QFileDialog::getExistingDirectory(
        this,
        tr("Select a Directory"),
        QDir::currentPath() );
	if( !dirname.isNull() )
	{
		QDir directory(dirname);
		QStringList aList = directory.entryList(QStringList() << "*.mp3" << "*.MP3" << "*.wav" << "*.WAV", QDir::Files);
		// next three lines need to be initialized for musicPlayer play function to work
		musicPlayer->songs = aList;
		musicPlayer->directoryName = dirname;
		musicPlayer->currentSong = musicPlayer->songs.at(0);

		ui.SongDisplay->setText(musicPlayer->songs.at(0));
		songsLoaded = true;
		musicPlayer->playSpeed = actualValue;
		musicPlayer->play();
	}
	//musicPlayer->directoryName = dirname;
	//songsLoaded = true;
	*/
	/*
	QFileDialog dialog;
	dialog.setFileMode(QFileDialog::DirectoryOnly);
	dialog.setOption(QFileDialog::ShowDirsOnly, false);
	dialog.exec();
	musicPlayer->directoryName = dialog.directory().absolutePath();
	QDir directory(musicPlayer->directoryName);

	QString outFolder = QFileDialog::getExistingDirectory(0, ("Select Music Folder"), QDir::currentPath());
	QDir directory(outFolder);
	QStringList aList = directory.entryList(QStringList() << "*.mp3" << ".MP3" << ".wav" << ".WAV", QDir::Files);

	qDebug() << aList.at(2);
	*/
	/*
	musicPlayer->songs = directory.entryList(QStringList() << "*.mp3" << ".MP3" << ".wav" << "*.WAV", QDir::Files);

	ui.SongDisplay->setText(musicPlayer->songs.at(0));*/
	//songsLoaded = true;
	//musicPlayer->play();

	qDebug() << "Reached end of addMusic()";
}


void wave::playSong(){
	if(songsLoaded){
		firstPlay = false;
		musicPlayer->playSpeed = actualValue;
		musicPlayer->play();
	}
}


void wave::nextSong(){
	resetTick();
	if(songsLoaded){
		musicPlayer->next();
		ui.SongDisplay->setText(musicPlayer->songs.at(musicPlayer->songIndex));
	}
}

void wave::previousSong(){
	resetTick();
	if(songsLoaded){
		musicPlayer->previous();
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

void wave::slideVolume(int val){
	float newVolume = (float)val / 100;
	musicPlayer->volume = newVolume;
	if(songsLoaded){
		musicPlayer->changeVolume();
	}
	std::string displayVolume = "Volume: " + std::to_string(val) + "%";
	QString finalDisplayVolume = QString::fromStdString(displayVolume);
	ui.volumeLabel->setText(finalDisplayVolume);
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
	if(displayPage < fullPages-1){
		displayPage++;
		displaySongs();
	}
}

void wave::previousPage(){
	if(displayPage != 0){
		displayPage--;
		displaySongs();
	}
}

void wave::autoPlay(){
	if(songsLoaded == true){
		if(musicPlayer->checkIfSoundEnded() == true){
			resetTick();
			musicPlayer->next();
			ui.SongDisplay->setText(musicPlayer->currentSong);
		}

		qDebug() << "Check 1";
		float sliderValue = (1 - actualValue);
		qDebug() << "Slider value: " << sliderValue;
		int songLength = musicPlayer->getLength();
		qDebug() << "Song length: " << songLength;
		int newMaxLength = (int)((sliderValue*songLength)+songLength);
		qDebug() << "New Max Length: " << newMaxLength;
		ui.songSlider->setMaximum(newMaxLength);
		ui.songSlider->setValue(ui.songSlider->value()+1);
	}
}

void wave::shuffleSongs(){
	if(songsLoaded == true){
		musicPlayer->song_shuffle();
		if(musicPlayer->shuffle == true){
			ui.shuffleButton->setStyleSheet(QString("background-color: white; color: black; border: 1px solid black;"));
		} else {
			ui.shuffleButton->setStyleSheet(QString("background-color:black; color: white; border: 1px solid white;"));
		}
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
	resetTick();
	int index = (6*displayPage) + 0;
	musicPlayer->playClickedSong(index);
	ui.SongDisplay->setText(musicPlayer->currentSong);
}



void wave::song_one(){
	resetTick();
	int index = (6*displayPage) + 1;
	musicPlayer->playClickedSong(index);
	ui.SongDisplay->setText(musicPlayer->currentSong);

}

void wave::song_two(){
	resetTick();
	int index = (6*displayPage) + 2;
	musicPlayer->playClickedSong(index);
	ui.SongDisplay->setText(musicPlayer->currentSong);
}

void wave::song_three(){
	resetTick();
	int index = (6*displayPage) + 3;
	musicPlayer->playClickedSong(index);
	ui.SongDisplay->setText(musicPlayer->currentSong);
}

void wave::song_four(){
	resetTick();
	int index = (6*displayPage) + 4;
	musicPlayer->playClickedSong(index);
	ui.SongDisplay->setText(musicPlayer->currentSong);
}


void wave::song_five(){
	resetTick();
	int index = (6*displayPage) + 5;
	musicPlayer->playClickedSong(index);
	ui.SongDisplay->setText(musicPlayer->currentSong);
}
