#include "MusicPlayer.h"

MusicPlayer::MusicPlayer(){
    engine = createIrrKlangDevice();
    if(!engine){
        qDebug() << "Sound engine failed to initialize";
    } else {
        qDebug() << "Sound engine initialized";
    }
}

MusicPlayer::~MusicPlayer(){
    engine->drop();
}

void MusicPlayer::restart_Engine(){
    engine->drop();
    engine = createIrrKlangDevice();
}

void MusicPlayer::initializeSound(){
    QString slash = "/";
    QString path = directoryName + slash + currentSong;
    std::string pathString = path.toUtf8().constData();
    const char *m_dir = pathString.c_str();
    qDebug() << "right before initializing sound";
    sound = engine->play2D(m_dir, false, false, true);
    sound->setPlaybackSpeed(playSpeed);
    paused = false;
    qDebug() << "right after initializing sound";
}

void MusicPlayer::play(){
	    if(paused == false){
            sound->setIsPaused(true);
            paused = true;
	    } else if (paused == true){
            sound->setIsPaused(false);
            paused = false;
	    }
}

bool MusicPlayer::checkIfSoundEnded(){
    if(sound->isFinished() == true){
        return true;
    } else {
        return false;
    }
    return false;
}

void MusicPlayer::next(){
    paused = false;
    if(shuffle == false){
        songIndex++;
    } else {
        getShuffleIndex();
    }
    currentSong = songs.at(songIndex);
    QString slash = "/";
    QString path = directoryName + slash + currentSong;
    std::string pathString = path.toUtf8().constData();
    const char *m_dir = pathString.c_str();
    engine->stopAllSounds();
    sound = engine->play2D(m_dir, false, false, true);
    sound->setPlaybackSpeed(playSpeed);
}

void MusicPlayer::playClickedSong(int index){
	paused = false;
	songIndex = index;
	currentSong = songs.at(songIndex);
	QString slash = "/";
	QString path = directoryName + slash + currentSong;
	std::string pathString = path.toUtf8().constData();
	const char *m_dir = pathString.c_str();
	engine->stopAllSounds();
	sound = engine->play2D(m_dir, false, false, true);
	sound->setPlaybackSpeed(playSpeed);
}

void MusicPlayer::previous(){
    paused = false;
    songIndex--;
    currentSong = songs.at(songIndex);
    QString slash = "/";
    QString path = directoryName + slash + currentSong;
    std::string pathString = path.toUtf8().constData();
    const char *m_dir = pathString.c_str();
    engine->stopAllSounds();
    sound = engine->play2D(m_dir, false, false, true);
    sound->setPlaybackSpeed(playSpeed);
}

void MusicPlayer::changePlaybackSpeed(){
    sound->setPlaybackSpeed(playSpeed);
}

void MusicPlayer::changeVolume(){
    sound->setVolume(volume);
}

void MusicPlayer::getShuffleIndex(){
    bool unique = false;
    int randomSong = 0;
    while(unique != true){
        srand((unsigned int)time(NULL));
        randomSong = rand() % songs.size();
        if(std::count(shuffledIndex.begin(), shuffledIndex.end(), randomSong)){

        } else {
            unique = true;
            songIndex = randomSong;
            currentSong = songs.at(songIndex);
            shuffledIndex.push_back(songIndex);
        }
    }
}

void MusicPlayer::song_shuffle(){
    if(shuffle == false){
        shuffle = true;
    } else {
        shuffle = false;
    }
}

int MusicPlayer::getLength(){
	int songLength = sound->getPlayLength() / 1000;
	return songLength;
}

bool MusicPlayer::isPaused(){
	if(paused == true){
		return true;
	} else {
		return false;
	}
}

void MusicPlayer::displayPlayTime(){
	qDebug() << sound->getPlayPosition();
}

void MusicPlayer::setPosition(int time){
	sound->setPlayPosition(time);
}
