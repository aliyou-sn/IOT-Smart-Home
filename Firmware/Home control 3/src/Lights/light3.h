#ifndef light3_h
#define light3_h
#include <Arduino.h>
#define timeSeconds 10
const int L3 = 32;
const int pir3 = 33;
unsigned long lastTrigger3 = 0;
bool startTimer3 = false;
bool motion3 = false;

void IRAM_ATTR detectsMovement3(){
  digitalWrite(L3, HIGH);
  startTimer3 = true;
  lastTrigger3 = millis();
}
#endif