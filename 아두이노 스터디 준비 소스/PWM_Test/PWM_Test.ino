int motor = 6;

void setup() {
  Serial.begin(9600);
  pinMode(motor, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  //analogWrite(11, 255); // 0~255 (0V ~ 5V)
  digitalWrite(motor, true);

}
