#include <LiquidCrystal.h>
LiquidCrystal lcd(2, 3, 4, 5, 6, 7);

int i = 0;
char personid[12];
int count = 0;

void setup() {
  pinMode(A0, OUTPUT);
  pinMode(A5, INPUT);
  pinMode(13, OUTPUT);
  digitalWrite(A0, HIGH);
  Serial.begin(9600);
  lcd.begin(16, 2);
  lcd.setCursor(0, 0);
  lcd.print("RFID MOBILE     ");
  lcd.setCursor(0, 1);
  lcd.print("CHARGING        ");
  delay(3000);
  lcd.clear();

}

void loop() {
  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("SCAN THE CARD   ");
  lcd.setCursor(0, 1);
  lcd.print("CHARGE UR PHONE ");
  if (Serial.available() > 0)
  {
    for (i = 0; i < 12; i++)
      personid[i] = Serial.read();
    personid[i] = '\0';
    if (strncmp(personid, "0B00269BBC0A", 12) == 0)
    {
      digitalWrite(A0, LOW);
      for (i = 60; i >= 0; i--)
      {
        if (analogRead(A5) > 0)
          digitalWrite(13, HIGH);
        else
          digitalWrite(13, LOW);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("MANISHA       ");
        lcd.setCursor(0, 1);
        lcd.print(i);
        delay(1000);
      }
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("TIME OUT        ");
      digitalWrite(A0, HIGH);
      delay(2000);

    }
    else if (strncmp(personid, "0B0026912A96", 12) == 0)
    {
      digitalWrite(A0, LOW);
      for (i = 60; i >= 0; i--)
      {
        if (analogRead(A5) > 0)
          digitalWrite(13, HIGH);
        else
          digitalWrite(13, LOW);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("THAFEEM          ");
        lcd.setCursor(0, 1);
        lcd.print(i);
        delay(1000);
      }
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("TIME OUT        ");
      digitalWrite(A0, HIGH);
      delay(2000);

    }
    else if (strncmp(personid, "0B002690CE73", 12) == 0)
    {

      digitalWrite(A0, LOW);
      for (i = 60; i >= 0; i--)
      {
        if (analogRead(A5) > 0)
          digitalWrite(13, HIGH);
        else
          digitalWrite(13, LOW);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("JASHWANTH       ");
        lcd.setCursor(0, 1);
        lcd.print(i);
        delay(1000);
      }
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("TIME OUT        ");
      digitalWrite(A0, HIGH);
      delay(2000);
    }
    else if (strncmp(personid, "0B0026C857B2", 12) == 0)
    {

      digitalWrite(A0, LOW);
      for (i = 60; i >= 0; i--)
      {
        if (analogRead(A5) > 0)
          digitalWrite(13, HIGH);
        else
          digitalWrite(13, LOW);
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("NAGARAJU        ");
        lcd.setCursor(0, 1);
        lcd.print(i);
        delay(1000);
      }
      lcd.clear();
      lcd.setCursor(0, 0);
      lcd.print("TIME OUT        ");
      digitalWrite(A0, HIGH);
      delay(2000);
    }

  }
  if (analogRead(A5) > 0)
    digitalWrite(13, HIGH);
  else
    digitalWrite(13, LOW);
  delay(100);
