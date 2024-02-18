#include "WirelessAttacks.h"


Wireless_Attacks attacks;
void setup() {
  // put your setup code here, to run once:
  attacks.init();
}
void loop() {
  if(Serial.available())
  {
    char command = Serial.read();
    if(command == '1'){Serial.println("Starting Test Attack"); attacks.TEST_1();}
    else if(command == '2'){Serial.println("Launching Remote Shutdown"); attacks.RemoteShutdown();}
  }
}




