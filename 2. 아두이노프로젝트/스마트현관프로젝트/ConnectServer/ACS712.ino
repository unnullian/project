#include <MCP3008.h>


// define pin connections
#define CS_PIN 15
#define CLOCK_PIN 14
#define MOSI_PIN 13
#define MISO_PIN 12

// put pins inside MCP3008 constructor
MCP3008 adc(CLOCK_PIN, MOSI_PIN, MISO_PIN, CS_PIN);

int mVperAmp = 100; // 아날로그 입력 mV당 전류 값
                   // 5A 짜리는 185
                   // 20A 짜리는 100
                   // 30A 짜리는 66
int RawValue= 0;   // 아날로그 값 저장 변수
int ACSoffset = 2500; // 기준 값 0A일때 아날로그 값은 2500 이다.
double Voltage = 0;   // 계산된 아날로그 값
double Amps = 0;      // 실제 측정된 전류 값

float getAmps(int channel) {
  //아날로그 값 읽기
 RawValue = adc.readADC(channel);
 //아날로그 값 0 ~ 1024을 전앖 0(0V) ~ 5000(5V)으로 변경(계산을 쉽게 하기 위해)
 Voltage = (RawValue / 1024.0) * 5000; // Gets you mV
 //전류값 계산
 //측정된 전압을 0A기준으로 뺀다음 mV당 전류값으로 나누면 끝!
 Amps = ((Voltage - ACSoffset) / mVperAmp);

 /*
 //값 출력
 // 아날로그 값
 Serial.print("Raw Value = " ); // shows pre-scaled value 
 Serial.print(RawValue); 

 // 아날로그 값을 전압으로 변경된 값
 Serial.print("\t mV = "); // shows the voltage measured 
 Serial.print(Voltage,3); // the '3' after voltage allows you to display 3 digits after decimal point

 //측정된 전류 값
 Serial.print("\t Amps = "); // shows the voltage measured 
 Serial.println(Amps,3); // the '3' after voltage allows you to display 3 digits after decimal point
 //2.5초 후 다시 읽기
 delay(2500);
 */ 
 return Amps;
}

