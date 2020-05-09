#include <Arduino.h>

const int LED_RED = 1;
const int LED_YELLOW = 2;
const int LED_GREEN = 3;

void setup() {
  // put your setup code here, to run once:
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(LED_RED, HIGH);
  delay(5000);
  digitalWrite(LED_YELLOW, HIGH);
  delay(1000);
  digitalWrite(LED_RED, LOW);
  digitalWrite(LED_YELLOW, LOW);
  digitalWrite(LED_GREEN, HIGH);
  delay(5000);
  digitalWrite(LED_YELLOW, HIGH);
  delay(1000);
  digitalWrite(LED_GREEN, LOW);
  digitalWrite(LED_YELLOW, LOW);
}