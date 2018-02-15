//We always have to include the library
#include "LedControlMS.h"

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

      case 'g' : //맑음 표시
        lc.setLed(loc, 4, 0, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 4, 2, true);
        lc.setLed(loc, 0, 3, true);lc.setLed(loc, 2, 3, true);lc.setLed(loc, 5, 3, true);
        lc.setLed(loc, 2, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 7, 4, true);
        lc.setLed(loc, 3, 5, true);lc.setLed(loc, 4, 5, true);
        lc.setLed(loc, 1, 6, true);lc.setLed(loc, 6, 6, true);
        lc.setLed(loc, 3, 7, true);
        break;

       case 'h' : //웃는 표시 => 맑음
        lc.setLed(loc, 1, 1, true);lc.setLed(loc, 0, 2, true);lc.setLed(loc, 1, 3, true);
        lc.setLed(loc, 1, 5, true);lc.setLed(loc, 0, 6, true);lc.setLed(loc, 1, 7, true);
        lc.setLed(loc, 4, 2, true);lc.setLed(loc, 5, 3, true);
        lc.setLed(loc, 5, 4, true);lc.setLed(loc, 5, 5, true);
        lc.setLed(loc, 4, 6, true);
        break;

       case 'd' : //웃는 표시 => 맑음
        lc.setLed(loc, 0, 7, true);lc.setLed(loc, 1, 6, true);lc.setLed(loc, 2, 7, true);
        
        break;

       case '-' : //영하
        lc.setLed(loc, 4, 5, true);lc.setLed(loc, 4, 6, true);lc.setLed(loc, 4, 7, true);
        
        break;
  }
}

  void setMyLedTemp(LedControl lc ,int loc, char ch, bool flag) {

  switch(ch) {
    
    case '1' :
      lc.setLed(loc, 1, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 1, 3, true);lc.setLed(loc, 2, 3, true);lc.setLed(loc, 3, 3, true);
      lc.setLed(loc, 4, 3, true);lc.setLed(loc, 5, 3, true);lc.setLed(loc, 6, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 7, 7, true);
      break;
    case '2' :
      lc.setLed(loc, 0, 1, true);lc.setLed(loc, 3, 1, true);lc.setLed(loc, 4, 1, true);
      lc.setLed(loc, 5, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 7, 1, true);
      lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);
      lc.setLed(loc, 3, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 7, 7, true);
      break;

     case '3' :
      lc.setLed(loc, 0, 1, true);lc.setLed(loc, 3, 1, true);lc.setLed(loc, 7, 1, true);
      lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
      lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 7, 7, true);
      break;
      
     case '4' :
     lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);lc.setLed(loc, 4, 1, true);
     lc.setLed(loc, 4, 2, true);
     lc.setLed(loc, 4, 3, true);
     lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
     lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
     lc.setLed(loc, 7, 7, true);
     break;

     case '5' :
      lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);lc.setLed(loc, 7, 1, true);
      lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 3, 4, true);lc.setLed(loc, 4, 4, true);
      lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 7, 7, true);
      break;

     case '6' :
      lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);
      lc.setLed(loc, 4, 1, true);lc.setLed(loc, 5, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 7, 1, true);
      lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 3, 4, true);lc.setLed(loc, 4, 4, true);
      lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
       lc.setLed(loc, 7, 7, true);
       break;

     case '7' :
       lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);
       lc.setLed(loc, 0, 2, true);
       lc.setLed(loc, 0, 3, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
       lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
       lc.setLed(loc, 7, 7, true);
       break;

     case '8' :
       lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);
       lc.setLed(loc, 4, 1, true);lc.setLed(loc, 5, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 7, 1, true);
       lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
       lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
       lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 7, 7, true);
      break;

     case '9' :
       lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);
       lc.setLed(loc, 7, 1, true);
       lc.setLed(loc, 0, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
       lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
       lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 7, 7, true);
      break;

     case '0' :
       lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);
       lc.setLed(loc, 4, 1, true);lc.setLed(loc, 5, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 7, 1, true);
       lc.setLed(loc, 0, 2, true);lc.setLed(loc, 7, 2, true);
       lc.setLed(loc, 0, 3, true);lc.setLed(loc, 7, 3, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
       lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
        lc.setLed(loc, 7, 7, true);
      break;

      case 'g' : //맑음 표시
        lc.setLed(loc, 4, 0, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 6, 1, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 4, 2, true);
        lc.setLed(loc, 0, 3, true);lc.setLed(loc, 2, 3, true);lc.setLed(loc, 5, 3, true);
        lc.setLed(loc, 2, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 7, 4, true);
        lc.setLed(loc, 3, 5, true);lc.setLed(loc, 4, 5, true);
        lc.setLed(loc, 1, 6, true);lc.setLed(loc, 6, 6, true);
        lc.setLed(loc, 3, 7, true);
        break;

       case 'h' : //웃는 표시 => 맑음
        lc.setLed(loc, 1, 1, true);lc.setLed(loc, 0, 2, true);lc.setLed(loc, 1, 3, true);
        lc.setLed(loc, 1, 5, true);lc.setLed(loc, 0, 6, true);lc.setLed(loc, 1, 7, true);
        lc.setLed(loc, 4, 2, true);lc.setLed(loc, 5, 3, true);
        lc.setLed(loc, 5, 4, true);lc.setLed(loc, 5, 5, true);
        lc.setLed(loc, 4, 6, true);
        break;

       case 'd' : //웃는 표시 => 맑음
        lc.setLed(loc, 0, 7, true);lc.setLed(loc, 1, 6, true);lc.setLed(loc, 2, 7, true);
        
        break;

       case '-' : //영하
        lc.setLed(loc, 4, 5, true);lc.setLed(loc, 4, 6, true);lc.setLed(loc, 4, 7, true);
        
        break;
        
  }
  
}
