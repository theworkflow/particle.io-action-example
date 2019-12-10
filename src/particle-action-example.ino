/*
 * Project particle.io-action-example
 * Description: Example GitHub Action for Particle.io
 * Author: Jeremiah Harlan
 */

int LED = D7;

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);
  
  delay(2000);
  
  digitalWrite(LED, LOW);
  
  delay(2000);
}