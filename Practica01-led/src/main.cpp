#include <Arduino.h>

const int LED = 4;   // pin P4 (GPIO4)

void setup() {
  pinMode(LED, OUTPUT);
}

void loop() {
  digitalWrite(LED, HIGH);  // enciende
  delay(500);
  digitalWrite(LED, LOW);   // apaga
  delay(500);
}
