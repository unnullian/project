/*
 *  This sketch sends data via HTTP GET requests to data.sparkfun.com service.
 *
 *  You need to get streamId and privateKey at data.sparkfun.com and paste them
 *  below. Or just customize this script to talk to other HTTP servers.
 *
 */

#include <ESP8266WiFi.h>

const char* ssid     = "s512";
const char* password = "01020008167";

const char* host = "192.168.1.8";
const char* streamId   = "....................";
const char* privateKey = "....................";

int value = 0;

void updateAMPS(String location, String name1, float amp1, int flag1, String name2, float amp2, int flag2) {
  WiFiClient client;
  String a[3];
  int i=0;
  String temp;
  String wfEn;
  String reh;
  String tmp_str;
  delay(5000);
  ++value;
  // 만약 인체감지가 된다면 api를 불러온다.
  Serial.print("connecting to ");
  Serial.println(host);
  
  // Use WiFiClient class to create TCP connections
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }
  
  // We now create a URI for the request
  String url = "/sendData.php?location=" + String(location) + 
                              "&name1=" + String(name1) +
                              "&Amp1=" + String(amp1) + 
                              "&flag1=" + String(flag1) + 
                              "&name2=" + String(name2) + 
                              "&Amp2=" + String(amp2) + 
                              "&flag2=" + String(flag2);
  
  Serial.print("Requesting URL: ");
  Serial.println(url);
  
  // This will send the request to the server
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");
  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 5000) {
      Serial.println(">>> Client Timeout !");
      client.stop();
      return;
    }
  }
  
  Serial.println();
  Serial.println("closing connection");

}

