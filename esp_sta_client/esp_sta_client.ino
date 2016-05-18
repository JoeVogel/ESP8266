#include <ESP8266WiFi.h>

const char *ssid      = "ESPap";
const char *passwd    = "1234567890";

void setup()
{

  //Serial.begin(9600);
  ConnectWiFi();
 
}

void loop()
{
  
}

void ConnectWiFi()
{
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, passwd);

  while (WiFi.status() != WL_CONNECTED) {
    //Serial.println("TRYING TO CONNECT");
    delay(100);
  }

  //Serial.println("CONNECTED");
} 
