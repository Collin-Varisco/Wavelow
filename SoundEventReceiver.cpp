#include "MusicPlayer.h"
class SoundEventReceiver : public irrklang::ISoundStopEventReceiver{
	public:
		virtual void OnSoundStopped(irrklang::ISound* sound,
				irrklang::E_STOP_EVENT_CAUSE reason, void* userData)
		{
			if (reason == irrklang::ESEC_SOUND_FINISHED_PLAYING)
			{
			}
		}
};
