#include "mylibrary.h"

#define hi "call my library OK"

String mylibrary: :setLEDblink(int pin, float timeon, float timeoff){

  _pin = pin;
  _timeon = timeon;
  _timeoff
}
pinMode(_pin, OUTPUT);

digitalWrite(_pin, OUTPUT);
delay(_timeon*1000);
digitalWrite(_pin, HIGH);
delay(_timeoff*1000);

_response = "blink from my library OK"

return _response;
}

String my library: :chkmyLib(){
  return hi;
}
