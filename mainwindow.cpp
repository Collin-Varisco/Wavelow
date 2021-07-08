#include "mainwindow.h"

ISoundEngine* engine = createIrrKlangDevice();
ISound* music;
QStringList songs;
int playIndex = 0;
QString folderName;
float playSpeed = 0.75f;
bool started = false;
MainWindow::MainWindow(QWidget *parent)
	: QMainWindow(parent)
{
	window = new QWidget;

	playButton = new QPushButton("Play");
	pauseButton = new QPushButton("Pause");

	selectionButton = new QPushButton("Selection");
	connect(selectionButton, &QPushButton::released, this, &MainWindow::getMusicDirectory);

	shuffleButton = new QPushButton("Shuffle");
	connect(shuffleButton, &QPushButton::released, this, &MainWindow::shuffleSong);

	slower = new QPushButton("Slower");
	connect(slower, &QPushButton::released, this, &MainWindow::slowDown);

	faster = new QPushButton("Faster");
	connect(faster, &QPushButton::released, this, &MainWindow::speedUp);

	layout = new QGridLayout(window);
	speed = new QLabel(QString::fromStdString(std::to_string(playSpeed)));

	layout->addWidget(selectionButton, 0, 0);
	layout->addWidget(shuffleButton, 0, 1);

	layout->addWidget(slower, 1, 0);
	layout->addWidget(faster, 1, 1);
	layout->addWidget(speed, 1, 2);

	layout->addWidget(playButton, 2, 0);
	layout->addWidget(pauseButton, 2, 1);
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
	started = true;
}

void MainWindow::getMusicDirectory(){
	folderName = QFileDialog::getExistingDirectory(this, tr("Open Directory"), "/home", QFileDialog::ShowDirsOnly | QFileDialog::DontResolveSymlinks);
	QDir directory(folderName);
	songs = directory.entryList(QStringList() << "*.mp3" << "*.MP3" << "*.wav" << "*.WAV", QDir::Files);
}

void MainWindow::speedUp(){
	playSpeed += 0.01f;
	speed->setText(QString::fromStdString(std::to_string(playSpeed)));
	if(started == true){
		music->setPlaybackSpeed(playSpeed);
	}
}

void MainWindow::slowDown(){
	playSpeed -= 0.01f;
	speed->setText(QString::fromStdString(std::to_string(playSpeed)));
	if(started == true){
		music->setPlaybackSpeed(playSpeed);
	}
}
