int ledPin = 13; // LED 연결핀
int inputPin = 5; // 센서 시그널핀
int pirState = LOW; // PIR 초기상태
int val = 0; // Signal 입력값
 
void setup() {
    pinMode(ledPin, OUTPUT); // LED Output 설정
    pinMode(inputPin, INPUT); // 센서 Input 설정
 
    Serial.begin(115200);
}
 
void loop(){
    val = digitalRead(inputPin); // 센서값 읽기
    Serial.println(val);
    if (val == HIGH) { // 인체감지시
        Serial.println("Motion detected!");
    } else if(val == LOW){         
            Serial.println("Motion ended!");
    }
}
