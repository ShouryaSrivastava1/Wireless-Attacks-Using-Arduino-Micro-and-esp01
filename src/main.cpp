#include "WirelessAttacks.h"


bool run = true;
Wireless_Attacks attacks;
void setup() {
  // put your setup code here, to run once:
  attacks.init();
  delay(3000);
  if(run) attacks.CreepyMessage();
}
void loop() {
  // if(Serial.available())
  // {
  //   char command = Serial.read();
  //   if(command == '1'){Serial.println("Starting Test Attack"); attacks.TEST_1();}
  //   else if(command == '2'){Serial.println("Launching Remote Shutdown"); attacks.RemoteShutdown();}
  //   else if(command == '3'){Serial.println("Closing Application"); attacks.CloseApplication();}
  // }

  
}




