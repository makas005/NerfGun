#include <Arduino.h>

//Input:
//Endlageschalter
//Einen Umschalter: Semi/Auto
//Einen Taster: Feuer

//Output:
//Motorregler

static const int kMotorDriverPin = 2; //Pin PD2
static const int kEndPositionDetectorPin = 3; //Pin PD3
static const int kFireModeSwitchPin = 4; //Pin PD4
static const int kFireSwitchPin = 5; //Pin PD5

void setup() {
  pinMode(kMotorDriverPin,OUTPUT);
  pinMode(kEndPositionDetectorPin, INPUT_PULLUP);
  pinMode(kFireModeSwitchPin, INPUT_PULLUP);
  pinMode(kFireSwitchPin, INPUT_PULLUP);
}

void loop() {
  if(digitalRead(kFireSwitchPin))
    digitalWrite(kMotorDriverPin, HIGH);
  else
    digitalWrite(kMotorDriverPin, LOW);
}