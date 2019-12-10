/******************************************************/
//       THIS IS A GENERATED FILE - DO NOT EDIT       //
/******************************************************/

#include "application.h"
#line 1 "/Users/theworkflow/code/particle-action-example/src/particle-action-example.ino"
/*
 * Project particle.io-action-example
 * Description: Example GitHub Action for Particle.io
 * Author: Jeremiah Harlan
 */

void setup();
void loop();
#line 7 "/Users/theworkflow/code/particle-action-example/src/particle-action-example.ino"
int LED = D7; // Board LED

void setup() {
  pinMode(LED, OUTPUT); // set pin as output
}

void loop() {
  // Turn on device light
  digitalWrite(LED, HIGH);
  // Wait 2000 miliseconds (2 seconds)
  delay(2000);
  // Turn off the device light
  digitalWrite(LED, LOW);
  // Wait 2000 milisecondds (2 seconds)
  delay(2000);
}