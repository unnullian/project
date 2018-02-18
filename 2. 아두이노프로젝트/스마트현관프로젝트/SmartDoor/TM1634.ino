#include <Arduino.h>
#include <TM1637Display.h>

// Module connection pins (Digital Pins)




void setTM1637(char num1, char num2) {
  switch(num1) {
    case '0':
      num1 = ZERO;
    break;
    case '1':
      num1 = ONE;
    break;
    case '2':
      num1 = TWO;
    break;
    case '3':
      num1 = THREE;
    break;
    case '4':
      num1 = FOUR;
    break;
    case '5':
      num1 = FIVE;
    break;
    case '6':
      num1 = SIX;
    break;
    case '7':
      num1 = SEVEN;
    break;
    case '8':
      num1 = EIGHT;
    break;
    case '9':
      num1 = NINE;
    break;
  }

    uint8_t data[] = { num1, 0x00, 0x39, 0x63 };
    display.setSegments(data);
}

