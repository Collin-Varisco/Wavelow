#include <irrKlang.h>
#include "MusicPlayer.h"
#include "MusicPlayer.cpp"
#include <QDebug>
using namespace irrklang;

class MySoundEndReceiver : public ISoundStopEventReceiver
{
public:
    virtual void OnSoundStopped (ISound* sound, E_STOP_EVENT_CAUSE reason, void* userData)
    {
        if (reason == irrklang::ESEC_SOUND_FINISHED_PLAYING)
		{
            MusicPlayer m = static_cast<MusicPlayer*>(userData);
            

		}
        qDebug() << "Caught";

        // called when the sound has ended playing
    }
};
