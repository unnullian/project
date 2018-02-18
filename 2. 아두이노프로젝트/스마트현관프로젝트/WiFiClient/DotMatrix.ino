//We always have to include the library
#include "LedControlMS.h"
#define NBR_MTX 4
LedControl lc=LedControl(14,0,2, NBR_MTX);

unsigned long delaytime=1000;

//lc, 무슨문자를, 몇번째LED에, 
void setMyLed(LedControl lc ,int loc, char ch, bool flag) {
  if(loc == 2) {
      if(flag == true) {
          lc.setLed(loc, 2, 7, true);
          lc.setLed(loc, 5, 7, true);
      } else if(flag == false) {
        lc.setLed(loc, 2, 7, false);
        lc.setLed(loc, 5, 7, false);
      }
    }
  switch(ch) {
    
    case '1' :
      lc.setLed(loc, 1, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 1, 3, true);lc.setLed(loc, 2, 3, true);lc.setLed(loc, 3, 3, true);
      lc.setLed(loc, 4, 3, true);lc.setLed(loc, 5, 3, true);lc.setLed(loc, 6, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 7, 4, true);
      break;
    case '2' :
      lc.setLed(loc, 0, 1, true);lc.setLed(loc, 3, 1, true);lc.setLed(loc, 4, 1, true);
      lc.setLed(loc, 5, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 7, 1, true);
      lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);
      lc.setLed(loc, 3, 4, true);lc.setLed(loc, 7, 4, true);
      break;

     case '3' :
      lc.setLed(loc, 0, 1, true);lc.setLed(loc, 3, 1, true);lc.setLed(loc, 7, 1, true);
      lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
      lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      break;
      
     case '4' :
     lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);lc.setLed(loc, 4, 1, true);
     lc.setLed(loc, 4, 2, true);
     lc.setLed(loc, 4, 3, true);
     lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
     lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
     break;

     case '5' :
      lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);lc.setLed(loc, 7, 1, true);
      lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 3, 4, true);lc.setLed(loc, 4, 4, true);
      lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      break;

     case '6' :
      lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);
      lc.setLed(loc, 4, 1, true);lc.setLed(loc, 5, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 7, 1, true);
      lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 3, 4, true);lc.setLed(loc, 4, 4, true);
      lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
       break;

     case '7' :
       lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);
       lc.setLed(loc, 0, 2, true);
       lc.setLed(loc, 0, 3, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
       lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
       break;

     case '8' :
       lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);
       lc.setLed(loc, 4, 1, true);lc.setLed(loc, 5, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 7, 1, true);
       lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
       lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
       lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      break;

     case '9' :
       lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);
       lc.setLed(loc, 7, 1, true);
       lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
       lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
       lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      break;

     case '0' :
       lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);
       lc.setLed(loc, 4, 1, true);lc.setLed(loc, 5, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 7, 1, true);
       lc.setLed(loc, 0, 2, true);lc.setLed(loc, 7, 2, true);
       lc.setLed(loc, 0, 3, true);lc.setLed(loc, 7, 3, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
       lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      break;

    
  }
}
