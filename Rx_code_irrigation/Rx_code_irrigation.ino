#include <LiquidCrystal.h>
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);
void setup() 
{
Serial.begin(9600);
lcd.begin(20,4); 
}
void loop() 
{
 if (Serial.available()<1)  return;
  char R=Serial.read();
  if (R!='\r')                 return;
  int temp=Serial.parseInt();
  int Soil_sensor=Serial.parseInt();

  lcd.setCursor(0,0);
  lcd.print("TEMP:");
  lcd.setCursor(0,1);
  lcd.print(temp);
  lcd.setCursor(0,2);
  lcd.print("Soil_Level:");
  lcd.setCursor(0,3);
  lcd.print(Soil_sensor);
  }
