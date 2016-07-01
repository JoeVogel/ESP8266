#include <ESP8266WiFi.h>

const char *ssid      = "ESPap";
const char *passwd    = "1234567890";

void setup()
{
  Serial.begin(115200);//ESP 07
}

void loop()
{
  ConnectWiFi();
  ESP.deepSleep(2000000, WAKE_RF_DEFAULT);
}

void ConnectWiFi()
{
  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, passwd);

  for (int i = 0; i < 10; i++)
  {
    if (WiFi.status() != WL_CONNECTED) {
      Serial.print(".");
      delay(200);
    }

  }
  
  Serial.println("CONNECTED");
} 
