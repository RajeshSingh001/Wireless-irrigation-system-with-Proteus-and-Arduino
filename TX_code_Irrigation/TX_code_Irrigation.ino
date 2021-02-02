int motor_relay = 13;
void setup()
{
  Serial.begin(9600);
  pinMode(motor_relay, OUTPUT);
}

void loop()
{
  int sensor_LM35 = analogRead(A0);
  int temp = sensor_LM35 / 2;
  int Soil_sensor = analogRead(A1);
  if ((Soil_sensor <= 512) && (temp >= 35))
  {
    digitalWrite(motor_relay, HIGH);
    Serial.print('\r');
    Serial.print(temp);
    Serial.print('|');
    Serial.print(Soil_sensor);
    Serial.print('\n');
    delay(30);
  }
  else
  {
    digitalWrite(motor_relay, LOW);
    Serial.print('\r');
    Serial.print(temp);
    Serial.print('|');
    Serial.print(Soil_sensor);
    Serial.print('\n');
    delay(30);
  }
}
