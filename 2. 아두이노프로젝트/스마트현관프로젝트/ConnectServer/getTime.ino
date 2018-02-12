
String getTime() {
  WiFiClient client;
  while (!client.connect("google.com", 80)) {}
  client.print("HEAD / HTTP/1.1\r\n\r\n");
  while(!client.available()) {}
  
  while(client.available()){
    if (client.read() =='\n') {    
      if (client.read() =='D') {    
        if (client.read() =='a') {    
          if (client.read() =='t') {    
            if (client.read() =='e') {    
              if (client.read() ==':') {  
                client.read();
                String timeData = client.readStringUntil('\r');
                client.stop();
                return timeData;
              }
            }
          }
        }
      }
    }
  }
}
