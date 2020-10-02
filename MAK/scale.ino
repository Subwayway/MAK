#include "HX711.h"
#define calibration_factor -7050.0 // scale factor
#define DOUT  3
#define CLK  2
HX711 scale(DOUT, CLK);

void scale_init()
{
  Serial.println("HX711 scale TEST");  
  scale.set_scale(calibration_factor);
  scale.tare(); //active scale
}

void scale_read()
{
  Serial.print("Reading: ");
  Serial.print(scale.get_units(), 1);
  Serial.print(" kg");
  Serial.print(" calibration: ");
  Serial.print(calibration_factor);
}

void scale_set(int x)
{
  scale.set_scale(x);
  scale.tare(); //active scale
}
