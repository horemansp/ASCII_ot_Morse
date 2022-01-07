#include "Phmorse.h"

Phmorse :: Phmorse() //constructor
{}
    

char * Phmorse :: convertCharToMorse(char * theChar){
    for(int _x=0;_x<124;_x=_x+2){
      if (_morseTable[_x] == theChar){
        _thePos = _x + 1;
        break;
        }
      }
    return _morseTable[_thePos];
  }


 
