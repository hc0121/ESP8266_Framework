#include "Arduino.h"
#ifndef WIFI_SET
#define WIFI_SET

const char* ssid = "yydn"; // 設定欲連接無線網路名稱
const char* password = "00001111"; // 設定欲連接無線網路密碼

void WIFI()
{
    WiFi.begin(ssid, password);
    Serial.println("Connecting");
    while(WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
}; // end switch
#endif
