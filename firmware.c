#include <stdlib.h>
#include <assert.h>
#include "AT91SAM7S256.h"
#include "pit.h"
#include "aic.h"
#include "display.h"
#include "aclock.h"
UBYTE hh=0;
UBYTE mm=0;
UBYTE ss=0;
ULONG count=0;
UWORD sshand = 90;
UBYTE mmhand = 90;
UBYTE hhhand = 90;
void pit_handler(void){
if(count == 3){
   count=0;
   if(ss < 60){ 
   	ss++;
   	sshand+=6;
   }else{
   	sshand=90;
   	ss = 0;
   	if(mm < 60){
   		mmhand += 6;
   		mm++;
   	}else{
   		mm = 0;
   		mmhand = 90;
   		if(hh < 24){
   			hhhand += 30;
   			hh++;
   		}else{
   			hhhand = 90;
   			hh = 0;
   		}
   	}
   }
   AclockDisplayHand(50, 32, 18, sshand-6, 1);
   AclockDisplayHand(50, 32, 20, sshand, 0);
   if(sshand==360)
   	sshand=0;
   printtime(hh, mm, ss);
   }else{
   count++;
   }
   PITAckInterrupt();
}

int main(void)
{

DisplayInit();
AclockDisplayFrame(50, 32, 20);
AclockDisplayFrameSymbol(50, 32, 20, 90);
AclockDisplayFrameSymbol(50, 32, 20, 180);
AclockDisplayFrameSymbol(50, 32, 20, 360);
AclockDisplayFrameSymbol(50, 32, 20, 270);
PITEnable();
PITInterruptEnable(1000000, pit_handler);
  while ( 1 ) {
    
  }
	
  PITDisable();
  //
  // cleanup here
  //

return 0;
}

/*int main(void) {
	DisplayInit();
	DisplayErase();
	AclockDisplayFrame(50, 32, 20);
	AclockDisplayHand(50, 32, 20, 18,0);
	DisplayNum(1,50,30,sizeof(ULONG));
   DisplayNum(1,60,30,sizeof(UWORD));
   DisplayNum(1,70,30,sizeof(UBYTE));
   DisplayNum(1,80,30,sizeof(SWORD));
   DisplayNum(1,90,30,sizeof(SLONG));
	DisplayUpdateSync();
	DisplayExit();
	return 0;
}*/
