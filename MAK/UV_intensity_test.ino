int ReadUVintensityPin = A0;

void UVintensity_init() {
  pinMode(ReadUVintensityPin, INPUT);
}

void UVintensity_read() {
  int uvLevel = averageAnalogRead(ReadUVintensityPin);
 
  float outputVoltage = 5.0 * uvLevel/1024.0; //전압을 아날로그 신호 범위로 변환
  float uvIntensity = mapfloat(outputVoltage, 0.99, 2.9, 0.0, 15.0); //UV 강도로 변환
 
  Serial.print("UVAnalogOutput: ");
  Serial.print(uvLevel);
 
  Serial.print(" OutputVoltage: ");
  Serial.print(outputVoltage);
 
  Serial.print(" UV Intensity: ");
  Serial.print(uvIntensity);
  Serial.print(" mW/cm^2");
 
  Serial.println(); 
  delay(100);
}
 
 
int averageAnalogRead(int pinToRead)
{
  byte numberOfReadings = 8;
  unsigned int runningValue = 0; 
 
  for(int x = 0 ; x < numberOfReadings ; x++)
  runningValue += analogRead(pinToRead);
  runningValue /= numberOfReadings;
 
  return(runningValue);  
 
}
 
float mapfloat(float x, float in_min, float in_max, float out_min, float out_max)
{
  return (x - in_min) * (out_max - out_min) / (in_max - in_min) + out_min;
}
