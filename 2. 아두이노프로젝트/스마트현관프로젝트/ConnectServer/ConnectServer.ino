/*
 *  This sketch sends data via HTTP GET requests to data.sparkfun.com service.
 *
 *  You need to get streamId and privateKey at data.sparkfun.com and paste them
 *  below. Or just customize this script to talk to other HTTP servers.
 *
 */

#include <ESP8266WiFi.h>
#include <ArduinoJson.h>

const char* ssid     = "s512";
const char* password = "01020008167";

const char* host = "192.168.1.8";
const char* streamId   = "....................";
const char* privateKey = "....................";

int value = 0;

void updateAMPS(String location, String name1, float amp1, String name2, float amp2) {
  WiFiClient client;
  String a[3];
  int i=0;
  String temp;
  String wfEn;
  String reh;
  String tmp_str;
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
                              "&name2=" + String(name2) + 
                              "&Amp2=" + String(amp2);
  
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


void checkRelay() {
  WiFiClient client;
  const int httpPort = 80;
  if (!client.connect(host, httpPort)) {
    Serial.println("connection failed");
    return;
  }
  String url = "/getMultitap_json.php";
   Serial.print("Requesting URL: ");
  Serial.println(url);
  
  // This will send the request to the server
  client.print(String("GET ") + url + " HTTP/1.1\r\n" +
               "Host: " + host + "\r\n" + 
               "Connection: close\r\n\r\n");
  unsigned long timeout = millis();
  while (client.available() == 0) {
    if (millis() - timeout > 1000) {
      Serial.println(">>> Client Timeout !");
      client.stop();
      return;
    }
  }
  String line;
  int num=0;
  // Read all the lines of the reply from server and print them to Serial
  while(client.available()){
     line += client.readStringUntil('}');
     line += '}';
     delay(200);
     
    
    
 
    
  }
  Serial.print(line);

  for (int i=0 ; i<300; i++) {
    Serial.print(line.charAt(i));
  }
  for (int i=0; i<30; i++) {
    Serial.print(line.charAt(245 + i));
  }
Serial.println();
  Serial.println("다시시작");
for (int i=0; i<30; i++)
  Serial.print(line.charAt(271+i));

/*
const size_t capacity = JSON_OBJECT_SIZE(3) + JSON_ARRAY_SIZE(2) + 60;
  DynamicJsonBuffer jsonBuffer(capacity);
  JsonObject& root = jsonBuffer.parseObject(line);
  if (!root.success()) {
    Serial.println(F("Parsing failed!"));
    return;
  }
  */
  //제이슨으로 플래그값 받아오기
//  String flag1 = root["webnautes"][0]["flag1"];
 // String flag2 = root["webnautes"][0]["flag2"];
char flag1 = line.charAt(245);
char flag2 = line.charAt(271);
Serial.println(flag1);Serial.println(flag1);Serial.println(flag1);Serial.println(flag1);Serial.println(flag1);
Serial.println(flag2);Serial.println(flag2);Serial.println(flag2);Serial.println(flag2);Serial.println(flag2);
  if(flag1=='0') {
    //릴레이 끈다
    digitalWrite(16, LOW);
  } else {
    //릴레이 켠다
    digitalWrite(16, HIGH);
  }

  if (flag2=='0') {
    //릴레이 끈다
    digitalWrite(5, LOW);
  } else {
    //릴레이 켠다
    digitalWrite(5, HIGH);
  }
  Serial.println("closing connection");
  
}

