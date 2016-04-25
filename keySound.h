#ifndef KEYSOUND_H
#define KEYSOUND_H

#include <string>
#include <vector>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Audio.hpp>

struct keyS{
	std::string path;//filepath of soundfile
  sf::SoundBuffer buffer;//sound buffer that loads file
  sf::Sound loop;//class that plays sound
  bool isPlay;//bool that determines is sound is playing

	keyS(){};
	keyS(std::string in_path)
	{
		path = in_path;
		isPlay = false;
	}

};

class keySound
{
	public:
		keySound();
		~keySound();
		void buildAndPlay();
		void playSound(keyS key);
		sf::Keyboard::Key num2Key(int num);
		//string readline(int num);
		//void deleteSound(std::string name);//may create in future, not sure though
		//void changeSound(std::string name);
	private:
		sf::Keyboard kb;
		keyS *key;
};

#endif // KEYSOUND_H
