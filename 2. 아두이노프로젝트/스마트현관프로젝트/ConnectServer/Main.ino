void checkRelay();
void setMyLed(LedControl lc ,int loc, char ch, bool flag);
String getTime();
float getAmps(int channel);
void updateAMPS(String location, String name1, float amp1, String name2, float amp2);

void setup() {
  Serial.begin(115200);

// 릴레이 모듈 핀 셋팅
  pinMode(16, OUTPUT);
  pinMode(5, OUTPUT);
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
}



void loop() {
  Serial.print("1port => ");
  Serial.println(getAmps(0));
  Serial.print("2port => ");
  Serial.println(getAmps(1));
  
  updateAMPS("거실", "드라이기", getAmps(0), "고데기", getAmps(1));


  checkRelay();

  //인체감지가 되면 날씨정보를 불러와서 뽑아냄
}
