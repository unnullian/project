/*
 *  This sketch sends data via HTTP GET requests to data.sparkfun.com service.
 *
 *  You need to get streamId and privateKey at data.sparkfun.com and paste them
 *  below. Or just customize this script to talk to other HTTP servers.
 *
 */

#include <ESP8266WiFi.h>

//http://samples.openweathermap.org/data/2.5/weather?q=yongsan,uk&appid=30654141b21c02bcbb02674a131e4cde
//http://api.openweathermap.org/data/2.5/weather?q=yongsan&appid=30654141b21c02bcbb02674a131e4cde

const char* host = "api.openweathermap.org";
const char* streamId   = "....................";
const char* privateKey = "....................";

int value = 0;



void getWeather() {
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
  String url = "/data/2.5/weather?q=yongsan&appid=30654141b21c02bcbb02674a131e4cde";
  
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
  
  // Read all the lines of the reply from server and print them to Serial
  while(client.available()){
    String line = client.readStringUntil('\r');
  //  Serial.print(line); //모든 것을 보여줌

    delay(10);
    while(client.available()){
      String line = client.readStringUntil('\n');

      i= line.indexOf("</temp>");

      if(i>0){
        tmp_str="<temp>";
        temp = line.substring(line.indexOf(tmp_str)+tmp_str.length(),i);
        Serial.println(temp); 

      }
/*
      i= line.indexOf("</wfKor>");

      if(i>0){
        tmp_str="<wfKor>";
        wfEn = line.substring(line.indexOf(tmp_str)+tmp_str.length(),i);
        Serial.println(wfEn);  
      }

      i= line.indexOf("</reh>");

      if(i>0){
        tmp_str="<reh>";
        reh = line.substring(line.indexOf(tmp_str)+tmp_str.length(),i);
        Serial.println(reh);  
        break;
      }
      */
    }
    
  }
  
  Serial.println();
  Serial.println("closing connection");

}

