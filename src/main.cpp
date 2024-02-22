#include "WirelessAttacks.h"

Wireless_Attacks attacks;

void setup() {
  attacks.init();
  delay(3000);
  attacks.CreepyMessage(); 
}
void loop() {
  attacks.Handle();  
}




