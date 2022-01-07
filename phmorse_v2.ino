#include "PHmorse.h"
Phmorse myMorse;
int morseLength;
char * theMorseCode;
void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
}
 
void loop() {
  theMorseCode = myMorse.convertCharToMorse("F");
  Serial.print("Morse Code=");Serial.println(theMorseCode);
  morseLength = strlen(theMorseCode);
  for(int x=0;x<morseLength;x++){
    Serial.println(theMorseCode[x]);
    //place code that for example blinks a led short when . and long when -
    }
  while(1);
}
