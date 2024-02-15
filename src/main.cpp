#include "Attacks.h"

attacks Attacks;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  Attacks.init_keyboard();
}

void loop() {
  if (Serial.available())
  {
    char command = Serial.read();
    if (command == '1'){ Serial.println("Starting RickRoll Attack \n"); Attacks.RickRoll();}
    else if (command == '2'){ Serial.println("Starting Test Attack \n"); Attacks.Test();}
  }
}
