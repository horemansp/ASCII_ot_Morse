#include "Phmorse.h"

Phmorse :: Phmorse() //constructor
{}
    

char * Phmorse :: convertCharToMorse(char * theChar){
    Serial.print("Starting lookup for ");Serial.println(theChar);
    for(int _x=0;_x<124;_x=_x+2){
      if (_morseTable[_x] == theChar){
        //Serial.print("Pos X=");Serial.println(_x);
        _thePos = _x + 1;
        break;
        }
      }
    return _morseTable[_thePos];
  }


 
