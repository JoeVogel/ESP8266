#include <ESP8266WiFi.h>

const char *ssid      = "ESP";

void setup()
{
  //Serial.begin(9600);
  createWiFi();
}

void loop()
{
  //ESP.deepSleep(2000000, WAKE_RF_DEFAULT);
}

void createWiFi()
{
  WiFi.softAP(ssid);
} 
