#ifndef Phmorse_H
#define Phmorse_H

#include "Arduino.h"

class Phmorse
{
  public:
    Phmorse();
    char * convertCharToMorse(char * theChar); 
  private:
    //variables used only within the class scope, not exposed, cannot be set or called from outside the class
    char * _morseTable[124]={
      "A",  ".-",
      "B",  "-...",
      "C",  "-.-.",
      "D",  "-..",
      "E",  ".",
      "F",  "..-.",
      "G",  "--.",
      "H",  "....",
      "I",  "..",
      "J",  ".---",
      "K",  "-.-",
      "L",  ".-..",
      "M",  "--",
      "N",  "-.",
      "O",  "---",
      "P",  ".--.",
      "Q",  "--.-",
      "R",  ".-.",
      "S",  "...",
      "T",  "-",
      "U",  "..-",
      "V",  "...-",
      "W",  ".--",
      "X",  "-..-",
      "Y",  "-.--",
      "Z",  "--..",
      "1",  ".----",
      "2",  "..---",
      "3",  "...--",
      "4",  "....-",
      "5",  ".....",
      "6",  "-....",
      "7",  "--...",
      "8",  "---..",
      "9",  "----.",
      "0",  "-----",
      ".",  ".-.-.-",  // period
      ":",  "---...",  // colon
      ",",  "--..--",  // comma
      ";",  "-.-.-",   // semicolon
      "?",  "..--..",  // question
      "=",  "-...-",   // equals
      "'",  ".----.",  // apostrophe
      "/",  "-..-.",   // slash
      "!",  "-.-.--",  // exclamation
      "-",  "-....-",  // dash
      "_",  "..--.-",  // underline
      "\"", ".-..-.",  // quotation marks
      "(",  "-.--.",   // parenthesis (open)
      ")",  "-.--.-",  // parenthesis (close)
      "()", "-.--.-",  // parentheses
      "$",  "...-..-", // dollar
      "&",  ".-...",   // ampersand
      "@",  ".--.-.",  // at
      "+",  ".-.-.",   // plus
      "Á",  ".--.-",   // A with acute accent
      "Ä",  ".-.-",    // A with diaeresis
      "É",  "..-..",   // E with acute accent
      "Ñ",  "--.--",   // N with tilde
      "Ö",  "---.",    // O with diaeresis
      "Ü",  "..--",    // U with diaeresis
      " ",  "......." // word interval
    };
    int _x;
    int _thePos;
 };
#endif
