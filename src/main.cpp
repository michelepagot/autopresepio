/**
* Blink
*
* Turns on an LED on for one second,
* then off for one second, repeatedly.
*/
#include "Arduino.h"
#include <SerialCommand.h>


SerialCommand sCmd;     // The demo SerialCommand object
void SET_range(void);

void setup()
{
 Serial.begin(9600);
 sCmd.addCommand("SET_RANGE",SET_range);
 // initialize LED digital pin as an output.
 pinMode(LED_BUILTIN, OUTPUT);
}

void loop()
{
 // turn the LED on (HIGH is the voltage level)
 digitalWrite(LED_BUILTIN, HIGH);

 // wait for a second
 delay(200);

 // turn the LED off by making the voltage LOW
 digitalWrite(LED_BUILTIN, LOW);

  // wait for a second
 delay(200);
}

void SET_range()
{
  Serial.println("");
}
