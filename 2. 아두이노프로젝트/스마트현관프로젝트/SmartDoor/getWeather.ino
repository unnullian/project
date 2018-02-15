#include <ArduinoJson.h>

//http://api.openweathermap.org/data/2.5/weather?q=yongsan&appid=30654141b21c02bcbb02674a131e4cde


myWeather getMyWeather() {
  WiFiClient client;
  host = "api.openweathermap.org";
    const int httpPort = 80;
    if (!client.connect(host, httpPort)) {
      Serial.println("connection failed");
      //return 0;
    }
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
        //return 0;
      }
    }
    String line;
    // Read all the lines of the reply from server and print them to Serial
    while(client.available()){
       line = client.readStringUntil('\r');
      Serial.print(line);
    }
  
  
  const size_t capacity = JSON_OBJECT_SIZE(3) + JSON_ARRAY_SIZE(2) + 60;
    DynamicJsonBuffer jsonBuffer(capacity);
    JsonObject& root = jsonBuffer.parseObject(line);
    if (!root.success()) {
      Serial.println(F("Parsing failed!"));
      //return 0;
    }
    //제이슨으로 플래그값 받아오기
    String temp = root["main"]["temp"];
    String weather = root["weather"][0]["main"];
    Serial.println("");Serial.println("");
    temp = String(temp.toFloat() - 273.15);
    Serial.print(temp);
    Serial.println(weather);

    myWeather mw;
    mw.temp = temp;
    mw.weather = weather;

    return mw;
}
