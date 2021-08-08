/*
  Analog Input

  Demonstrates analog input by reading an analog sensor on analog pin 0 and
  turning on and off a light emitting diode(LED) connected to digital pin 13.
  The amount of time the LED will be on and off depends on the value obtained
  by analogRead().

  The circuit:
  - potentiometer
    center pin of the potentiometer to the analog input 0
    one side pin (either one) to ground
    the other side pin to +5V
  - LED
    anode (long leg) attached to digital output 13
    cathode (short leg) attached to ground

  - Note: because most Arduinos have a built-in LED attached to pin 13 on the
    board, the LED is optional.

  created by David Cuartielles
  modified 30 Aug 2011
  By Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogInput
*/

#include <analogWrite.h>

int sensorPin = 35;    // select the input pin for the potentiometer
int outputPin = 34;
#define LED_BUILTIN 2      // select the pin for the LED
int sensorValue = 0;  // variable to store the value coming from the sensor

void setup() {
  // declare the ledPin as an OUTPUT:
  Serial.begin(115200);
  pinMode(LED_BUILTIN, OUTPUT);
  pinMode(outputPin, OUTPUT);
}

void loop() {
  sensorValue = analogRead(sensorPin);
  analogWrite(LED_BUILTIN, sensorValue);
  analogWrite(outputPin, sensorValue);
  // read the value from the sensor:
  Serial.print(sensorValue);
  if(sensorValue > 2000) {
  Serial.println(" --> BEAT");
  delay(70);
  } else {
  Serial.println();
  }
  
  // turn the ledPin on
 delay(10);
  }
