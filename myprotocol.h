#ifndef myprotocol_h
#define myprotocol_h

#include "Arduino.h"
#include "ESP8266WiFi.h"
#include "ArduinoJson.h"

class myprotocol{

public:
    boo begin(cont char "ssid, cons char *passw);
    String sayhi();
    String WriteDashboard(float val);
    String getversion();

Private:
      Const char *_ssid, *_passw, *_libversion;
      String_str, _res, _val;
      bool _conn;
      
};

#endif
