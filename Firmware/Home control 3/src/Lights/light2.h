#ifndef light2_h
#define light2_h
#include <Arduino.h>
#define timeSeconds 10
const int L2 = 23;
const int pir2 = 35;
unsigned long lastTrigger2 = 0;
bool startTimer2 = false;
bool motion2 = false;

void IRAM_ATTR detectsMovement2(){
  digitalWrite(L2, HIGH);
  startTimer2 = true;
  lastTrigger2 = millis();
}
#endif
