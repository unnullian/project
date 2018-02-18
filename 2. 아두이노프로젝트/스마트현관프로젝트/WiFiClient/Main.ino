
void setMyLed(LedControl lc ,int loc, char ch, bool flag);
String getTime();
float getAmps(int channel);
void updateAMPS(float amp1);

void setup() {
  Serial.begin(115200);
  delay(10);

  // AP 연결
  Serial.println();
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, password);
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.println("WiFi connected");  
  Serial.println("IP address: ");
  Serial.println(WiFi.localIP());



  
  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(0, false);

  /* Set the brightness to a medium values */
  lc.setIntensity(0, 8);

  /* and clear the display */
  lc.clearDisplay(0);


  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(1, false);

  /* Set the brightness to a medium values */
  lc.setIntensity(1, 8);

  /* and clear the display */
  lc.clearDisplay(1);

  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(2, false);

  /* Set the brightness to a medium values */
  lc.setIntensity(2, 8);

  /* and clear the display */
  lc.clearDisplay(2);



  /*
   The MAX72XX is in power-saving mode on startup,
   we have to do a wakeup call
   */
  lc.shutdown(3, false);

  /* Set the brightness to a medium values */
  lc.setIntensity(3, 8);

  /* and clear the display */
  lc.clearDisplay(3);



}



void loop() {
 
  Serial.println(getTime());
  String curTime=getTime().substring(0,25);
  Serial.println(curTime);
  String DayOfWeek = curTime.substring(0,3);
  String Day = curTime.substring(5,7);
  String Month = curTime.substring(8,11);
  String Year = curTime.substring(12,16);
  String rcv_hour = curTime.substring(17,19);
  int tmp = rcv_hour.toInt();
  tmp += 9; //구글의 시간대여서 +9시간 추가해줘야한다.
  String hour(tmp%24);
  String minu = curTime.substring(20,22);
  String second = curTime.substring(23,25);
  char hourCh[2], minCh[2], secCh[2];
  for (int i=0; i<2; i++) {
    hourCh[i] = hour.charAt(i);
    minCh[i] = minu.charAt(i);
    secCh[i] = second.charAt(i);
  }
  
  setMyLed(lc ,3, hourCh[0], true);
  setMyLed(lc ,2, hourCh[1], true);
  setMyLed(lc ,1, minCh[0], true);
  setMyLed(lc ,0, minCh[1], true);

  delay(delaytime);

  setMyLed(lc ,3, hourCh[0], false);
  setMyLed(lc ,2, hourCh[1], false);
  setMyLed(lc ,1, minCh[0], false);
  setMyLed(lc ,0, minCh[1], false);

  delay(delaytime);

  Serial.print("1port => ");
  Serial.println(getAmps(0));
  Serial.print("2port => ");
  Serial.println(getAmps(1));

  updateAMPS(getAmps(0));

  //인체감지가 되면 날씨정보를 불러와서 뽑아냄
}
