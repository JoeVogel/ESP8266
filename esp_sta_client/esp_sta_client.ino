#include <ESP8266WiFi.h>

const char *ssid      = "ESPap";
const char *passwd    = "1234567890";

int count;

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

  count = 0;

  while (WiFi.status() != WL_CONNECTED) 
  {
    Serial.print(".");
    count++;

    if (count > 20)
    {
      break;
    }

    delay(200);
  }

  if (WiFi.status() == WL_CONNECTED)
  {
    Serial.println("CONNECTED");
  }
  else
  {
    Serial.println("NOT CONNECTED"); 
  }

} 