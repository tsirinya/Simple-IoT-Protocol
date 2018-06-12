#ifndef mylibrary_h
#define mylibrary_h

#include "Arduino.h"

class mylobrary{

public:
    String setLEDblink(int pin, float timeon float timeoff); // Time ON,OFF if [[NSUserDefaults standardUserDefaults] set
    String chkmylib();

Private:
      int _pin;
      float _timeon, _timeoff;
      String _response;
};

#endif
