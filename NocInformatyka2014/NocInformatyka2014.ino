/* Noc Informatyka 2014 program

Power usage:
Led turned on: 21.4 mA
Led turned off: 18.5 mA
*/

int led = 0;           // the pin that the LED is attached to
int brightness = 0;    // how bright the LED is
int fadeAmount = 1;    // how many points to fade the LED by
int showBrightness = 0;

void setup() {
  pinMode(led, OUTPUT);
}

void loop()  {
  // set the brightness of pin 0:
  showBrightness = brightness;
  if(showBrightness > 80)
    showBrightness = 80;

  if(showBrightness < 0)
    showBrightness = 0;
  analogWrite(led, showBrightness);

  // change the brightness for next time through the loop:
  brightness = brightness + fadeAmount;

  // reverse the direction of the fading at the ends of the fade:
  if (brightness == -50 || brightness == 128) {
    fadeAmount = -fadeAmount;
  }
  // wait for 30 milliseconds to see the dimming effect
  delay(100);
}

