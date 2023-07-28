#include <Arduino.h>
#include "Quadcopter.h"

// put function declarations here:

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);

  // Create a quadcopter named "My Quadcopter"
  Quadcopter quadcopter("My Quadcopter");

  // Make the quadcopter takeoff, fly, and land
  quadcopter.takeoff();
  quadcopter.fly();
  quadcopter.land();
}

void loop() {
  // put your main code here, to run repeatedly:
}

// put function definitions here:

