#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)
#define CLK 4
#define DIO 5

// The amount of time (in milliseconds) between tests

TM1637Display display(CLK, DIO);

void setup()
{
}

void loop()
{
  int k;
  uint8_t data[] = { 0x6D, 0x7D, 0x27, 0x67 };
  display.setBrightness(0x0f);

  // All segments on
  display.setSegments(data);
  delay(TEST_DELAY);


  while(1);
}
