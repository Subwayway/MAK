#define peltier_a  9
#define peltier_b  10


void peltier_init()
{
  pinMode(peltier_a, OUTPUT);
  pinMode(peltier_b, OUTPUT);
}

void peltier_hot()
{
  digitalWrite(peltier_a, HIGH);
  digitalWrite(peltier_b, LOW);
}

void peltier_cold()
{
  digitalWrite(peltier_a, LOW);
  digitalWrite(peltier_b, HIGH);
}

void peltier_stop()
{
  digitalWrite(peltier_a, LOW);
  digitalWrite(peltier_b, LOW);
}
