
#include <iostream>
#include <string>
#include <SFML/Window/Keyboard.hpp>
#include <SFML/Audio.hpp>
#include "keySound.h"

using namespace std;

int main(void) {
  keySound k;

  k.buildAndPlay();
  return 0;
}
