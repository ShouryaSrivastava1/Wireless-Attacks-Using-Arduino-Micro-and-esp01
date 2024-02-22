#include "WirelessAttacks.h"

Wireless_Attacks attacks;

void setup() {
  attacks.init();
  delay(3000);
  attacks.MoveMouseToRandomLocations(); 
}
void loop() {
  attacks.Handle();  
}




