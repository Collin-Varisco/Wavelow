#include "wave.h"
#include "MusicPlayer.h"
#include <QTimer>
#include <QDebug>
#include <fstream>

wave::wave(QFrame *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	musicPlayer = new MusicPlayer();
	ui.SongDisplay->setAlignment(Qt::AlignCenter);
	recentPlaylists(); // load in saved playlists if possible.
	connect(ui.recentButton, SIGNAL(clicked()), this, SLOT(displayPlaylists()));
	connect(ui.exitButton, SIGNAL(clicked()), this, SLOT(quit()));
	connect(ui.openFolderButton, SIGNAL(clicked()), this, SLOT(addMusic()));
	connect(ui.playButton, SIGNAL(clicked()), this, SLOT(playSong()));
	connect(ui.previousButton, SIGNAL(clicked()), this, SLOT(previousSong()));
	connect(ui.nextButton, SIGNAL(clicked()), this, SLOT(nextSong()));
	connect(ui.SpeedSlider, SIGNAL(valueChanged(int)), this, SLOT(slideSpeed(int)));
	connect(ui.volumeSlider, SIGNAL(valueChanged(int)), this, SLOT(slideVolume(int)));
	connect(ui.songSlider, SIGNAL(sliderReleased()), this, SLOT(slideSong()));
	connect(ui.shuffleButton, SIGNAL(clicked()), this, SLOT(shuffleSongs()));
	connect(ui.nextPage, SIGNAL(clicked()), this, SLOT(nextPage()));
	connect(ui.previousPage, SIGNAL(clicked()), this, SLOT(previousPage()));

	// Selection buttons
	actualValue = 0.75f;
	connect(ui.song_0, SIGNAL(clicked()), this, SLOT(selection_zero()));
	connect(ui.song_1, SIGNAL(clicked()), this, SLOT(selection_one()));
	connect(ui.song_2, SIGNAL(clicked()), this, SLOT(selection_two()));
	connect(ui.song_3, SIGNAL(clicked()), this, SLOT(selection_three()));
	connect(ui.song_4, SIGNAL(clicked()), this, SLOT(selection_four()));
	connect(ui.song_5, SIGNAL(clicked()), this, SLOT(selection_five()));
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
	recentSelection = false;
	QFileDialog dialog;
	dialog.setFileMode(QFileDialog::Directory);
	if(dialog.exec()){
		musicPlayer->directoryName = dialog.directory().absolutePath();
		QDir dirAll(musicPlayer->directoryName);

		musicPlayer->songs = dirAll.entryList(QStringList() << "*.mp3" << "*.MP3" << "*.wav" << "*.WAV", QDir::Files);
		musicPlayer->currentSong = musicPlayer->songs.at(0);
		ui.SongDisplay->setText(formatSongTitle(musicPlayer->songs.at(0)));
		if(musicPlayer->paused == false){
		    musicPlayer->restart_Engine();
		}
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
	// Attempt to add playlist if it isn't in saved file
	addPlaylist(musicPlayer->directoryName);
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
		ui.SongDisplay->setText(formatSongTitle(musicPlayer->songs.at(musicPlayer->songIndex)));
	}
}

void wave::previousSong(){
	resetTick();
	if(songsLoaded){
		musicPlayer->previous();
		ui.SongDisplay->setText(formatSongTitle(musicPlayer->songs.at(musicPlayer->songIndex)));
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
	float rem;
	if(item == 0){
		rem = playlistNames.size();
	} else {
		rem = item % 6;
	}
	qDebug() << "Remainder Songs: " << remainderSongs;
	qDebug() << "Current Page: " << displayPage;
	qDebug() << "Full pages: " << fullPages;
	if(displayPage < fullPages){
		ui.song_0->setText(formatSongTitle(musicPlayer->songs.at(item + 0)));
		ui.song_1->setText(formatSongTitle(musicPlayer->songs.at(item + 1)));
		ui.song_2->setText(formatSongTitle(musicPlayer->songs.at(item + 2)));
		ui.song_3->setText(formatSongTitle(musicPlayer->songs.at(item + 3)));
		ui.song_4->setText(formatSongTitle(musicPlayer->songs.at(item + 4)));
		ui.song_5->setText(formatSongTitle(musicPlayer->songs.at(item + 5)));
	}
	else {
		clearDisplay();
		if(remainderSongs > 0)
			ui.song_0->setText(formatSongTitle(musicPlayer->songs.at(item + 0)));
		if(remainderSongs > 1)
			ui.song_1->setText(formatSongTitle(musicPlayer->songs.at(item + 1)));
		if(remainderSongs > 2)
			ui.song_2->setText(formatSongTitle(musicPlayer->songs.at(item + 2)));
		if(remainderSongs > 3)
			ui.song_3->setText(formatSongTitle(musicPlayer->songs.at(item + 3)));
		if(remainderSongs > 4)
			ui.song_4->setText(formatSongTitle(musicPlayer->songs.at(item + 4)));
		if(remainderSongs > 5)
			ui.song_5->setText(formatSongTitle(musicPlayer->songs.at(item + 5)));
	}
}

QString wave::formatSongTitle(QString title){
	std::string titleStr = title.toUtf8().constData();
	std::string mp3 = ".mp3";
	std::string wav = ".wav";
	std::string audio = "(Audio)";
	std::string dash = "- ";
	std::string::size_type pos = titleStr.find(dash);
	if(pos != std::string::npos)
		titleStr.erase(0, pos+dash.length());
	std::string::size_type i = titleStr.find(mp3);
	if (i != std::string::npos)
		titleStr.erase(i, mp3.length());
	std::string::size_type a = titleStr.find(audio);
	if(a != std::string::npos)
		titleStr.erase(a, audio.length());
	std::string::size_type w = titleStr.find(wav);
	if(w != std::string::npos)
		titleStr.erase(w, wav.length());
	QString finalSongTitle = QString::fromStdString(titleStr);
	return finalSongTitle;
}

void wave::clearDisplay(){
	ui.song_0->setText("");
	ui.song_1->setText("");
	ui.song_2->setText("");
	ui.song_3->setText("");
	ui.song_4->setText("");
	ui.song_5->setText("");
}


void wave::nextPage(){
	if(displayPage != fullPages){
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

// Runs every second
void wave::autoPlay(){
	if(songsLoaded == true){
		if(musicPlayer->checkIfSoundEnded() == true){
			resetTick();
			musicPlayer->next();
			ui.SongDisplay->setText(formatSongTitle(musicPlayer->currentSong));
		}
		float sliderValue = (1 - actualValue);
		int songLength = musicPlayer->getLength();
		int newMaxLength = (int)((sliderValue*songLength)+songLength);
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

void wave::slideSong(){
	musicPlayer->displayPlayTime();
	int newTime = ui.songSlider->value() * 1000 * actualValue;
	musicPlayer->setPosition(newTime);
}


// Checks to see if their is a file containing paths to all recently opened playlists.
// If there is, display them on selection screen
// Playlist file is "playlists.txt"
void wave::recentPlaylists(){
    musicPlayer->restart_Engine();
    pt = qApp->applicationDirPath().toStdString() + "/playlists.txt";
    playlistNames.clear();
    playlistPaths.clear();
	QStringList workingDirFiles;
	QDir workingDir(qApp->applicationDirPath());
	workingDirFiles = workingDir.entryList(QStringList(), QDir::Files);
	for(QString i : workingDirFiles){
		if(i == "playlists.txt"){
			qDebug() << "found playlist file.";
			foundFile = true;
		}
	}
	QString readline;
	QFile playFile(QString::fromStdString(pt));
	if(playFile.open(QIODevice::ReadWrite)){
		QTextStream in(&playFile);
		while(!in.atEnd())
		{
			readline = in.readLine();
			std::string line = readline.toUtf8().constData();	
			// if on windows : line = in.readLine().toLocal8Bit().constData();
			QString qs = QString::fromStdString(line);
			playlistPaths << qs;
			std::string slash = "/";
			size_t pos = 0;
			while((pos = line.find(slash)) != std::string::npos){
				line.erase(0, line.find(slash) + slash.length());
			}	
			qs = QString::fromStdString(line);
			playlistNames << qs;
		}	
	}
}

void wave::addPlaylist(QString path){
	std::string line;
	bool found_Path = false;
	QFile playFile(QString::fromStdString(pt));
	QTextStream in(&playFile);
	while(!in.atEnd())
	{
		QString qStr = in.readLine();
		if(qStr == path){
			found_Path = true;
		}
	}
	playFile.close();

	if(found_Path == false) {
		// Append path string to end of file.
		QFile pFile(QString::fromStdString(pt));
		if( pFile.open(QIODevice::ReadWrite) ) {
			QTextStream out(&pFile);
			out << path.toUtf8().constData() << "\n";
			qDebug() << "Written to text file.";
			// Windows conversion
			// playlistFile << path.toUtf8().constData();
		}
		pFile.close();
	}
}

// load playlist that is clicked on selection screen
void wave::loadPlaylist(int index){
	musicPlayer->restart_Engine();
	musicPlayer->directoryName = playlistPaths.at(index);
	QDir dirAll(playlistPaths.at(index));
	musicPlayer->songs = dirAll.entryList(QStringList() << "*.mp3" << "*.MP3" << "*.wav" << "*.WAV", QDir::Files);
	musicPlayer->currentSong = musicPlayer->songs.at(0);
	ui.SongDisplay->setText(formatSongTitle(musicPlayer->songs.at(0)));
	musicPlayer->initializeSound();
	musicPlayer->changeVolume();
	songsLoaded = true;

	qDebug() << "Initializing pages";
	qDebug() << "TOTAL: " << musicPlayer->songs.size();
	int remainder = musicPlayer->songs.size() % 6;
	if(remainder == 0){
		fullPages = musicPlayer->songs.size() / 6;
		remainderSongs = 0;
	}
	else {
		fullPages = (musicPlayer->songs.size() / 6);
		remainderSongs = remainder;
	}
	qDebug() << "Finished Initializing pages";
	displaySongs();
	qDebug() << "Remaining: " << remainderSongs;
	recentSelection = false;
}

void wave::displayPlaylists(){
    musicPlayer->restart_Engine();
    recentPlaylists();
	displayPage = 0;
	clearDisplay();
	recentSelection = true;
	musicPlayer->restart_Engine();
	int item = displayPage * 6;
	float rem;
	if(item == 0){
		rem = playlistNames.size();
	} else {
		rem = item % 6;
	}
	if(rem > 0)
		ui.song_0->setText(playlistNames.at(item + 0));
	if(rem > 1)
		ui.song_1->setText(playlistNames.at(item + 1));
	if(rem > 2)
		ui.song_2->setText(playlistNames.at(item + 2));
	if(rem > 3)
		ui.song_3->setText(playlistNames.at(item + 3));
	if(rem > 4)
		ui.song_4->setText(playlistNames.at(item + 4));
	if(rem > 5)
		ui.song_5->setText(playlistNames.at(item + 5));
}


void wave::selection_zero(){
	int index = (6*displayPage) + 0;
	if(recentSelection == false){
		resetTick();
		musicPlayer->playClickedSong(index);
		ui.SongDisplay->setText(formatSongTitle(musicPlayer->currentSong));
	}
	else
	{
		loadPlaylist(index);
	}
}

void wave::selection_one(){
	int index = (6*displayPage) + 1;
	if(recentSelection == false){
		resetTick();
		musicPlayer->playClickedSong(index);
		ui.SongDisplay->setText(formatSongTitle(musicPlayer->currentSong));
	}
	else
	{
		loadPlaylist(index);
	}
}

void wave::selection_two(){
	int index = (6*displayPage) + 2;
	if(recentSelection == false){
		resetTick();
		musicPlayer->playClickedSong(index);
		ui.SongDisplay->setText(formatSongTitle(musicPlayer->currentSong));
	}
	else
	{
		loadPlaylist(index);
	}
}


void wave::selection_three(){
	int index = (6*displayPage) + 3;
	if(recentSelection == false){
		resetTick();
		musicPlayer->playClickedSong(index);
		ui.SongDisplay->setText(formatSongTitle(musicPlayer->currentSong));
	}
	else
	{
		loadPlaylist(index);
	}
}


void wave::selection_four(){
	int index = (6*displayPage) + 4;
	if(recentSelection == false){
		resetTick();
		musicPlayer->playClickedSong(index);
		ui.SongDisplay->setText(formatSongTitle(musicPlayer->currentSong));
	}
	else
	{
		loadPlaylist(index);
	}
}


void wave::selection_five(){
	int index = (6*displayPage) + 5;
	if(recentSelection == false){
		resetTick();
		musicPlayer->playClickedSong(index);
		ui.SongDisplay->setText(formatSongTitle(musicPlayer->currentSong));
	}
	else
	{
		loadPlaylist(index);
	}
}
