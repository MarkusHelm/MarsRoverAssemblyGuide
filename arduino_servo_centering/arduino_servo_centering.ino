#include <Servo.h>

/*
  How to connect your servo:

  1. Connect the red wire (VCC) of the servo to the 5V pin on the Arduino.
  2. Connect the black wire (GND) of the servo to one of the GND pins on the Arduino.
  3. Connect the white wire (signal) of the servo to pin 9 on the Arduino.

  Make sure you have a stable power source, as the servo may draw more current than the Arduino can provide through its 5V pin alone.
*/

Servo myservo;

void setup()
{
    // Attach the servo to pin 9 on the Arduino
    myservo.attach(9);

    // Set the servo to its center position (90 degrees)
    myservo.write(90);
}

void loop()
{
    // Nothing needs to be done in the loop
}