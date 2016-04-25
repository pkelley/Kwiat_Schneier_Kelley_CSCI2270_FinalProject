#include <iostream>
#include <string>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Audio.hpp>
#include <SFML/Window/Event.hpp>
#include "keySound.h"

using namespace std;

keySound::keySound(){

}
keySound::~keySound(){

}
//public
void keySound::buildAndPlay(){
  keyS key[8];
  sf::Event event;

  for(int i=0;i<8;i++){//set path to specific file; will change
      if(i==0) key[i].path="loops/kick3.wav";
      if(i==1) key[i].path="loops/kick4.wav";
      if(i==2) key[i].path="loops/kick5.wav";
      if(i==3) key[i].path="loops/kick6.wav";
      if(i==4) key[i].path="loops/kick7.wav";
      if(i==5) key[i].path="loops/kick8.wav";
      if(i==6) key[i].path="loops/kick10.wav";
      if(i==7) key[i].path="loops/kick11.wav";
    key[i].buffer.loadFromFile(key[i].path);//load file into buffer
    key[i].loop.setBuffer(key[i].buffer);//load buffer into sound
    key[i].isPlay=false;//set sound to currently not playing
  }

  while(1){
    for (size_t i = 0; i < 8; i++) {//cycles through all assigned keys so you can use following code lines simultaneously for all of them
      if (kb.isKeyPressed(keySound::num2Key(i)) && key[i].isPlay==false){//checks if specific key is pressed and correlating sound is already playing
        key[i].isPlay=true;//set the bool to true so the play comand doesn't occur while the loop is playing
        key[i].loop.setPitch(1.0);//normalize sound before playing it
        if (kb.isKeyPressed(kb.LShift)||kb.isKeyPressed(kb.RShift)) {//modify pitch to add flavor when using shift & ctrl
          key[i].loop.setPitch(1.5);//change to higher pitch
          key[i].loop.play();
        } else if (kb.isKeyPressed(kb.LControl)||kb.isKeyPressed(kb.RControl)) {
          key[i].loop.setPitch(0.5);//decrease pitch
          key[i].loop.play();
        } else key[i].loop.play();
      }else if(key[i].loop.getStatus()!=2) key[i].isPlay=false;//set bool back to false so sound can be played again
    }
  }
}
void keySound::playSound(keyS key){
  sf::Keyboard kb;
  while(1){
    for (size_t i = 0; i < 8; i++) {//cycles through all assigned keys so you can use following code lines simultaneously for all of them
      if (kb.isKeyPressed(keySound::num2Key(i)) && key.isPlay==false){//checks if specific key is pressed and correlating sound is already playing
        key.isPlay=true;//set the bool to true so the play comand doesn't occur while the loop is playing
        key.loop.setPitch(1.0);//normalize sound before playing it
        if (kb.isKeyPressed(kb.LShift)||kb.isKeyPressed(kb.RShift)) {//modify pitch to add flavor when using shift & ctrl
          key.loop.setPitch(1.5);//change to higher pitch
          key.loop.play();
        } else if (kb.isKeyPressed(kb.LControl)||kb.isKeyPressed(kb.RControl)) {
          key.loop.setPitch(0.5);//decrease pitch
          key.loop.play();
        } else key.loop.play();//play the sound
      }else if(key.loop.getStatus()!=2) key.isPlay=false;//set bool back to false so sound can be played again
    }
  }
}

sf::Keyboard::Key keySound::num2Key(int num){
  switch (num) {
    case 0:return sf::Keyboard::A;
    case 1:return sf::Keyboard::B;
    case 2:return sf::Keyboard::C;
    case 3:return sf::Keyboard::D;
    case 4:return sf::Keyboard::E;
    case 5:return sf::Keyboard::F;
    case 6:return sf::Keyboard::G;
    case 7:return sf::Keyboard::H;
    case 8:return sf::Keyboard::I;
    case 9:return sf::Keyboard::J;
    case 10:return sf::Keyboard::K;
    case 11:return sf::Keyboard::L;
    case 12:return sf::Keyboard::M;
    case 13:return sf::Keyboard::N;
    case 14:return sf::Keyboard::O;
    case 15:return sf::Keyboard::P;
    case 16:return sf::Keyboard::Q;
    case 17:return sf::Keyboard::R;
    case 18:return sf::Keyboard::S;
    case 19:return sf::Keyboard::T;
    case 20:return sf::Keyboard::U;
    case 21:return sf::Keyboard::V;
    case 22:return sf::Keyboard::W;
    case 23:return sf::Keyboard::X;
    case 24:return sf::Keyboard::Y;
    case 25:return sf::Keyboard::Z;
    case 26:return sf::Keyboard::Num0;
    case 27:return sf::Keyboard::Num1;
    case 28:return sf::Keyboard::Num2;
    case 29:return sf::Keyboard::Num3;
    case 30:return sf::Keyboard::Num4;
    case 31:return sf::Keyboard::Num5;
    case 32:return sf::Keyboard::Num6;
    case 33:return sf::Keyboard::Num7;
    case 34:return sf::Keyboard::Num8;
    case 35:return sf::Keyboard::Num9;
    case 36:return sf::Keyboard::Escape;
    case 37:return sf::Keyboard::LControl;
    case 38:return sf::Keyboard::LShift;
    case 39:return sf::Keyboard::LAlt;
    case 40:return sf::Keyboard::LSystem;
    case 41:return sf::Keyboard::RControl;
    case 42:return sf::Keyboard::RShift;
    case 43:return sf::Keyboard::RAlt;
    case 44:return sf::Keyboard::RSystem;
    case 45:return sf::Keyboard::Menu;
    case 46:return sf::Keyboard::LBracket;
    case 47:return sf::Keyboard::RBracket;
    case 48:return sf::Keyboard::SemiColon;
    case 49:return sf::Keyboard::Comma;
    case 50:return sf::Keyboard::Period;
    case 51:return sf::Keyboard::Quote;
    case 52:return sf::Keyboard::Slash;
    case 53:return sf::Keyboard::BackSlash;
    case 54:return sf::Keyboard::Tilde;
    case 55:return sf::Keyboard::Equal;
    case 56:return sf::Keyboard::Dash;
    case 57:return sf::Keyboard::Space;
    case 58:return sf::Keyboard::Return;
    case 59:return sf::Keyboard::BackSpace;
    case 60:return sf::Keyboard::Tab;
    case 61:return sf::Keyboard::PageUp;
    case 62:return sf::Keyboard::PageDown;
    case 63:return sf::Keyboard::End;
    case 64:return sf::Keyboard::Home;
    case 65:return sf::Keyboard::Insert;
    case 66:return sf::Keyboard::Delete;
    case 67:return sf::Keyboard::Add;
    case 68:return sf::Keyboard::Subtract;
    case 69:return sf::Keyboard::Multiply;
    case 70:return sf::Keyboard::Divide;
    case 71:return sf::Keyboard::Left;
    case 72:return sf::Keyboard::Right;
    case 73:return sf::Keyboard::Up;
    case 74:return sf::Keyboard::Down;
    case 75:return sf::Keyboard::Numpad0;
    case 76:return sf::Keyboard::Numpad1;
    case 77:return sf::Keyboard::Numpad2;
    case 78:return sf::Keyboard::Numpad3;
    case 79:return sf::Keyboard::Numpad4;
    case 80:return sf::Keyboard::Numpad5;
    case 81:return sf::Keyboard::Numpad6;
    case 82:return sf::Keyboard::Numpad7;
    case 83:return sf::Keyboard::Numpad8;
    case 84:return sf::Keyboard::Numpad9;
    case 85:return sf::Keyboard::F1;
    case 86:return sf::Keyboard::F2;
    case 87:return sf::Keyboard::F3;
    case 88:return sf::Keyboard::F4;
    case 89:return sf::Keyboard::F5;
    case 90:return sf::Keyboard::F6;
    case 91:return sf::Keyboard::F7;
    case 92:return sf::Keyboard::F8;
    case 93:return sf::Keyboard::F9;
    case 94:return sf::Keyboard::F10;
    case 95:return sf::Keyboard::F11;
    case 96:return sf::Keyboard::F12;
    case 97:return sf::Keyboard::F13;
    case 98:return sf::Keyboard::F14;
    case 99:return sf::Keyboard::F15;
    case 100:return sf::Keyboard::Pause;
  }
}
