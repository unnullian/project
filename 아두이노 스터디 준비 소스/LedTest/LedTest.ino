const int sw = 2;
const int ledPin = 13;
int flag = 0;

void setup() {
  Serial.begin(9600);
  pinMode(sw, INPUT);
  pinMode(ledPin, OUTPUT);
}

void loop() {
  int result = digitalRead(sw);
  Serial.println(result);
  Serial.println("");

  if(result == 1) {
    
    if(flag == 0) {
      flag = 1;
      digitalWrite(ledPin, HIGH);
    }
  } else if (result == 0) {
    
    if(flag == 1) {
      flag = 0;
      digitalWrite(ledPin, LOW);
    }
  }
}
