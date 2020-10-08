void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  peltier_init();
  temp_init();
}

void loop() {
  // put your main code here, to run repeatedly:
  if (temp_read()>=30)
  {
    peltier_cold();
  }
  else
    peltier_stop();
}
