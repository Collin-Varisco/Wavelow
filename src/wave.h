#include <QMainWindow>
#include <QWidget>
#include <QFrame>
#include "MusicPlayer.h"
#include "ui_stretchplay_new.h"
#include <QTimer>
using namespace irrklang;
QT_BEGIN_NAMESPACE

class wave : public QMainWindow
{
	Q_OBJECT
	public:
		wave(QFrame *parent = 0);
		~wave();
		bool songsLoaded = false;
		float actualValue;
		void resetTick();
		void displaySongs();
		int displayPage = 0;
		QTimer *songTimer;
		bool firstPlay = true;
		bool firstDisplay = true;
		int fullPages = 0;
		int remainderSongs = 0;
	private:
		Ui::PlaybackDisplay ui;
		MusicPlayer* musicPlayer;

	public slots:
		void slideSong();
		void quit();
		void nextPage();
		void previousPage();
		void tick();
		void addMusic();
		void playSong();
		void nextSong();
		void previousSong();
		void slideSpeed(int val);
		void slideVolume(int val);
		void autoPlay();
		void shuffleSongs();

		// Song selection methods
		void song_zero();
		void song_one();
		void song_two();
		void song_three();
		void song_four();
		void song_five();
};
