#define peltier_a  9
#define peltier_b  10

#define fan 4

void peltier_init()
{
  pinMode(peltier_a, OUTPUT);
  pinMode(peltier_b, OUTPUT);
  
  pinMode(fan, OUTPUT);
}

void peltier_hot()
{
  digitalWrite(peltier_a, LOW);
  digitalWrite(peltier_b, HIGH);

  digitalWrite(fan, LOW);
}

void peltier_cold()
{
  digitalWrite(peltier_a, HIGH);
  digitalWrite(peltier_b, LOW);
  
  digitalWrite(fan, LOW);
}

void peltier_stop()
{
  digitalWrite(peltier_a, LOW);
  digitalWrite(peltier_b, LOW);
  
  digitalWrite(fan, HIGH);
}
