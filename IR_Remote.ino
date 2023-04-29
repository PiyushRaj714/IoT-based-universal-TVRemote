//piyush raj  follow us on instagram: piyush_raj714
//
//Universal IR Remote Controller

#include <IRremote.h>
#include "LowPower.h"

IRsend irsend;

const int b1  = 2;
const int b2  = 4;
const int b3  = 5;
const int b4  = 6;
const int b5  = 7;
const int b6  = 8;
const int b7  = 9;
const int b8  = 10;
const int b9  = 11;
const int b10 = 12;

int timer;
int modeCounter = 0;

void wakeUp() {
  timer = 0;
}

void setup() {
  pinMode(b1, INPUT);
  pinMode(b2, INPUT);
  pinMode(b3, INPUT);
  pinMode(b4, INPUT);
  pinMode(b5, INPUT);
  pinMode(b6, INPUT);
  pinMode(b7, INPUT);
  pinMode(b8, INPUT);
  pinMode(b9, INPUT);
  pinMode(b10, INPUT);
}

void loop() {
  attachInterrupt(0, wakeUp, HIGH);
  while (timer < 10000) {
    if (digitalRead(b1) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }

    if (digitalRead(b2) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }

    if (digitalRead(b3) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }

    if (digitalRead(b4) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }

    if (digitalRead(b5) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }
    
    if (digitalRead(b6) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }
    
    if (digitalRead(b7) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }
    
    if (digitalRead(b8) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }
    
    if (digitalRead(b9) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }
    
    if (digitalRead(b10) == HIGH) {
      timer = 0;
      delay(50);
      irsend.sendNEC(0x0000, 32);     //Enter Remote Hex Value
    }
    delay(1);
    timer = timer + 1;

  }
  
  LowPower.powerDown(SLEEP_FOREVER, ADC_OFF, BOD_OFF);
}
