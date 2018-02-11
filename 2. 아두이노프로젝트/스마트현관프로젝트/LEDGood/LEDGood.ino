//We always have to include the library
#include "LedControlMS.h"

/*
 Now we need a LedControl to work with.
 ***** These pin numbers will probably not work with your hardware *****
 pin 12 is connected to the DataIn 
 pin 11 is connected to the CLK 
 pin 10 is connected to LOAD 
 We have only a single MAX72XX.
 */
#define NBR_MTX 4
LedControl lc=LedControl(14,0,2, NBR_MTX);

String digits= "1234567890";
int digitCounter=0;
/* we always wait a bit between updates of the display */
unsigned long delaytime=1000;

//lc, 무슨문자를, 몇번째LED에, 
void setMyLed(LedControl lc ,int loc, char ch) {
  if(loc == 2) {
        lc.setLed(loc, 2, 7, true);
        lc.setLed(loc, 5, 7, true);
    }
  switch(ch) {
    
    case '1' :
      lc.setLed(loc, 1, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 7, 5, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
      lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
      break;
    case '2' :
      lc.setLed(loc, 1, 2, true);lc.setLed(loc, 5, 2, true);lc.setLed(loc, 6, 2, true);lc.setLed(loc, 7, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 4, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 4, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 1, 5, true);lc.setLed(loc, 2, 5, true);lc.setLed(loc, 3, 5, true);lc.setLed(loc, 7, 5, true);
      break;

     case '3' :
      lc.setLed(loc, 1, 2, true);lc.setLed(loc, 6, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 3, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 1, 5, true);lc.setLed(loc, 2, 5, true);lc.setLed(loc, 4, 5, true);lc.setLed(loc, 5, 5, true);lc.setLed(loc, 6, 5, true);
      break;
      
     case '4' :
     lc.setLed(loc, 0, 1, true);lc.setLed(loc, 1, 1, true);lc.setLed(loc, 2, 1, true);lc.setLed(loc, 3, 1, true);lc.setLed(loc, 4, 1, true);
     lc.setLed(loc, 4, 2, true);
     lc.setLed(loc, 4, 3, true);
     lc.setLed(loc, 0, 4, true);lc.setLed(loc, 1, 4, true);lc.setLed(loc, 2, 4, true);lc.setLed(loc, 3, 4, true);
     lc.setLed(loc, 4, 4, true);lc.setLed(loc, 5, 4, true);lc.setLed(loc, 6, 4, true);lc.setLed(loc, 7, 4, true);
     lc.setLed(loc, 4, 5, true);
     lc.setLed(loc, 4, 6, true);
     break;

     case '5' :
      lc.setLed(loc, 0, 2, true);lc.setLed(loc, 1, 2, true);lc.setLed(loc, 2, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 6, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 3, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 0, 5, true);lc.setLed(loc, 4, 5, true);lc.setLed(loc, 5, 5, true);lc.setLed(loc, 6, 5, true);
      break;

     case '6' :
       lc.setLed(loc, 1, 2, true);lc.setLed(loc, 2, 2, true);lc.setLed(loc, 3, 2, true);
       lc.setLed(loc, 4, 2, true);lc.setLed(loc, 5, 2, true);lc.setLed(loc, 6, 2, true);
       lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 7, 2, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 3, 4, true);lc.setLed(loc, 7, 4, true);
       lc.setLed(loc, 1, 5, true);lc.setLed(loc, 4, 5, true);lc.setLed(loc, 5, 5, true);lc.setLed(loc, 6, 5, true);
       break;

     case '7' :
       lc.setLed(loc, 0, 2, true);lc.setLed(loc, 1, 2, true);lc.setLed(loc, 2, 2, true);
       lc.setLed(loc, 0, 3, true);
       lc.setLed(loc, 0, 4, true);
       lc.setLed(loc, 0, 5, true);lc.setLed(loc, 1, 5, true);lc.setLed(loc, 2, 5, true);lc.setLed(loc, 3, 5, true);
       lc.setLed(loc, 4, 5, true);lc.setLed(loc, 5, 5, true);lc.setLed(loc, 6, 5, true);lc.setLed(loc, 7, 5, true);
       break;

     case '8' :
      lc.setLed(loc, 1, 2, true);lc.setLed(loc, 1, 2, true);lc.setLed(loc, 2, 2, true);lc.setLed(loc, 4, 2, true);lc.setLed(loc, 6, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 3, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 3, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 1, 5, true);lc.setLed(loc, 2, 5, true);lc.setLed(loc, 4, 5, true);lc.setLed(loc, 5, 5, true);lc.setLed(loc, 6, 5, true);
      break;

     case '9' :
      lc.setLed(loc, 1, 2, true);lc.setLed(loc, 2, 2, true);lc.setLed(loc, 3, 2, true);lc.setLed(loc, 6, 2, true);
      lc.setLed(loc, 0, 3, true);lc.setLed(loc, 4, 3, true);lc.setLed(loc, 7, 3, true);
      lc.setLed(loc, 0, 4, true);lc.setLed(loc, 4, 4, true);lc.setLed(loc, 7, 4, true);
      lc.setLed(loc, 1, 5, true);lc.setLed(loc, 2, 5, true);lc.setLed(loc, 3, 5, true);
      lc.setLed(loc, 4, 5, true);lc.setLed(loc, 5, 5, true);lc.setLed(loc, 6, 5, true);
      break;

     case '0' :
       lc.setLed(loc, 1, 2, true);lc.setLed(loc, 2, 2, true);lc.setLed(loc, 3, 2, true);
       lc.setLed(loc, 4, 2, true);lc.setLed(loc, 5, 2, true);lc.setLed(loc, 6, 2, true);
       lc.setLed(loc, 0, 3, true);lc.setLed(loc, 7, 3, true);
       lc.setLed(loc, 0, 4, true);lc.setLed(loc, 7, 4, true);
       lc.setLed(loc, 1, 5, true);lc.setLed(loc, 2, 5, true);lc.setLed(loc, 3, 5, true);
       lc.setLed(loc, 4, 5, true);lc.setLed(loc, 5, 5, true);lc.setLed(loc, 6, 5, true);
      break;

    
  }
}

void setup() {

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
  setMyLed(lc ,3, '1');
  setMyLed(lc ,2, '3');
  setMyLed(lc ,1, '5');
  setMyLed(lc ,0, '2');
  
  

  delay(10000000);

/*
  for (int row = 0; row < 32; row++) {
    for (int col = 0; col < 8; col++) {
      lc.setLed(row / 8, row % 8, col, true) ;
      delay(delaytime) ;
    }
  }
*/


  lc.clearDisplay(0) ;
  lc.clearDisplay(1) ;
  lc.clearDisplay(2) ;
  lc.clearDisplay(3) ;
  delay(delaytime);





}
