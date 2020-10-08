#include "HX711.h"
#define calibration_factor 2280.f // scale factor
const int LOADCELL_DOUT_PIN = 6;
const int LOADCELL_SCK_PIN = 7;
HX711 scale;

void scale_init()
{
  Serial.println("HX711 scale TEST");  
  scale.begin(LOADCELL_DOUT_PIN, LOADCELL_SCK_PIN);
  
  scale.set_scale(calibration_factor);
  scale.tare(); //active scale
}

void scale_read()
{
  Serial.print("Reading: ");
  Serial.print(scale.get_units(5), 1);
  Serial.print(" kg");
  Serial.print(" calibration: ");
  Serial.print(calibration_factor);
}

void scale_set(int x)
{
  scale.set_scale(x);
  scale.tare(); //active scale
}
