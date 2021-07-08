#include "mainwindow.h"

ISoundEngine* engine = createIrrKlangDevice();
ISound* music;
QStringList songs;
int playIndex = 0;
QString folderName;
float playSpeed = 0.75f;

MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	window = new QWidget;

	playButton = new QPushButton("Play");
	pauseButton = new QPushButton("Pause");
	selectionButton = new QPushButton("Selection");
	connect(selectionButton, &QPushButton::released, this, &MainWindow::getMusicDirectory);
	QPushButton *shuffleButton = new QPushButton("Shuffle");
	connect(shuffleButton, &QPushButton::released, this, &MainWindow::shuffleSong);

	layout = new QGridLayout(window);
	layout->addWidget(playButton, 0, 0);
	layout->addWidget(pauseButton, 0, 1);
	layout->addWidget(selectionButton, 1, 0);
	layout->addWidget(shuffleButton, 1, 1);
	window->resize(480, 480);
	window->show();
}

void MainWindow::shuffleSong(){
	srand((unsigned int)time(NULL));
	int randomSong = rand() % songs.size();
	playIndex = randomSong;
	play();
}


void MainWindow::play(){
	engine->removeAllSoundSources();
	std::string slash = "/";
	std::string songStr = folderName.toUtf8().constData() + slash + songs.at(playIndex).toUtf8().constData();
	const char *songPath = songStr.c_str();
	music = engine->play2D(songPath, true, false, true, ESM_AUTO_DETECT, true);
	music->setPlaybackSpeed(playSpeed);
}

void MainWindow::getMusicDirectory(){
	folderName = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
	QDir directory(folderName);
	songs = directory.entryList(QStringList() << "*.mp3" << "*.MP3" << "*.wav" << "*.WAV", QDir::Files);
}
