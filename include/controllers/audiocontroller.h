﻿/*
| --------------------------------------------------------------------------------------------------
|     Rodeo Project
|
|     marcin.goryca@gmail.com
|     http://marcingoryca.pl
|
|     License Information
|
|     The MIT License (MIT)
|     Copyright (c) 2010 - ... Marcin Goryca
|
|     Permission is hereby granted, free of charge,
|     to any person obtaining a copy of this software
|     and associated documentation files (the "Software"),
|     to deal in the Software without restriction,
|     including without limitation the rights to use,
|     copy, modify, merge, publish, distribute, sublicense,
|     and/or sell copies of the Software,
|     and to permit persons to whom the Software is furnished to do so,
|     subject to the following conditions:
|
|     The above copyright notice and this permission notice
|     shall be included in all copies or substantial portions of the Software.
|
|     THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND,
|     EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
|     FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.
|     IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM,
|     DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE,
|     ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS
|     IN THE SOFTWARE.
|---------------------------------------------------------------------------------------------------
*/

#ifndef RODEO_CONTROLLERS_AUDIOCONTROLLER_H_
#define RODEO_CONTROLLERS_AUDIOCONTROLLER_H_

#ifndef RODEO_MATH_VECTOR_H_
#include <vector>
#endif

#ifndef RODEO_CORE_SINGLETON_H_
#include "core\singleton.h"
#endif

#ifndef RODEO_AUDIO_SOUNDOBJECT_H_
#include "audio\soundobject.h"
#endif

namespace rodeo
{
	namespace controllers
	{
		class AudioController : public rodeo::core::Singleton<AudioController>
		{
		public:
			/*
			 |  -------------------------------------------------
			 |    Constructor
			 |  -------------------------------------------------
			 */
			AudioController()
				:_sound_object(NULL),
				_sound_container(0)
			{}

			//explicit AudioController(const char* filename){}

			/*
			 |  -------------------------------------------------
			 |    Destructor
			 |  -------------------------------------------------
			 */
			~AudioController()
			{
				clean();
			}

			/*
			 |  -------------------------------------------------
			 |    Gets sound object
			 |    Returns SoundObject pointer to the sound object
			 |  -------------------------------------------------
			 */
			rodeo::audio::SoundObject* getSoundObject() const
			{ 
				return _sound_object;
			}

			/*
			 |  -------------------------------------------------
			 |    Sets SoundObject object
			 |  -------------------------------------------------
			 */
			void setSoundObject(rodeo::audio::SoundObject* so)
			{ 
				_sound_object = so;
			}

			/*
			 |  --------------------------------------------------
			 |    Gets Container of the sound
			 |    Returns Vector object, container of SoundObject objects
			 |  --------------------------------------------------
			 */
			std::vector<rodeo::audio::SoundObject*> getSoundContainer() const
			{ 
				return _sound_container;
			}

			/*
			 |  -------------------------------------------------
			 |    Puts SoundObject into the container
			 |  -------------------------------------------------
			 */
			void putSound(rodeo::audio::SoundObject* so);
		protected:

		private:
			rodeo::audio::SoundObject* _sound_object;
			std::vector<rodeo::audio::SoundObject*> _sound_container;

			/*
			|  ---------------------------------------------------
			|    Copy Constructor
			|  ---------------------------------------------------
			*/
			AudioController(const AudioController& copy);

			/*
			|  ---------------------------------------------------
			|    Copy operator
			|  ---------------------------------------------------
			*/
			AudioController& operator=(const AudioController& copy);

			/*
			|  ---------------------------------------------------
			|    Cleans the memory
			|  ---------------------------------------------------
			*/
			void clean();
		};
	}
}
#endif
