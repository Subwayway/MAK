#include "MQ135.h"
#define ANALOGPIN A3   //  Define Analog PIN on Arduino Board
#define RZERO 206.85    //  Define RZERO Calibration Value

MQ135 gasSensor = MQ135(ANALOGPIN);

void Co2_init() {
  Serial.begin(9600);
  float rzero = gasSensor.getRZero();
  delay(3000);
  Serial.print("MQ135 RZERO Calibration Value : ");
  Serial.println(rzero);
}

void Co2_read() {
  float ppm = gasSensor.getPPM();
  delay(1000);
  digitalWrite(13,HIGH);
  Serial.print("CO2 ppm value : ");
  Serial.println(ppm);
}
