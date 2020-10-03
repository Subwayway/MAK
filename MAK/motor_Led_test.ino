int motor = 2;
int UVLed = 3;
int switch_A = 5;
int switch_B = 6;

void MotorLed_init() {
  pinMode(motor, OUTPUT);
  pinMode(UVLed, OUTPUT);
  pinMode(switch_A, INPUT);
  pinMode(switch_B, INPUT);
}

void MotorLed_run() 
{
  while(true)
  {
    if(digitalRead(switch_A == HIGH))
    {
      digitalWrite(motor, HIGH);
      digitalWrite(UVLed, LOW);
    }
    if(digitalRead(switch_A == LOW))
    {
      digitalWrite(motor, LOW);
      digitalWrite(UVLed, HIGH);
    }

    if(digitalRead(switch_B == HIGH))
    {
      break;
    }
  }
}
