#include <LiquidCrystal.h>
LiquidCrystal lcd(8, 9, 4, 5, 6, 7);
#define RED 44
#define GREEN 45
#define BLUE 46
int POT1 = A8;
int POT2 = A9;
int POT3 = A10;
void setup() {
  lcd.begin(16, 2);
  pinMode(RED, OUTPUT);
  pinMode(GREEN, OUTPUT);
  pinMode(BLUE, OUTPUT);
  digitalWrite(RED, 0);
  digitalWrite(GREEN, 0);
  digitalWrite(BLUE, 0);
}
void loop() {
  POT1 = analogRead(A8);
  POT1 = map(POT1, 0, 1023, 0, 255);
  analogWrite(RED, POT1);
  POT1 = map(POT1, 0, 255, 0, 100);
  lcd.setCursor(0, 0);
  lcd.print("R:");
  lcd.print(POT1);
  POT2 = analogRead(A9);
  POT2 = map(POT2, 0, 1023, 0, 255);
  analogWrite(GREEN, POT2);
  POT2 = map(POT2, 0, 255, 0, 100);
  lcd.setCursor(0, 1);
  lcd.print("G:");
  lcd.print(POT2);
  POT3 = analogRead(A10);
  POT3 = map(POT3, 0, 1023, 0, 255);
  analogWrite(BLUE, POT3);
  POT3 = map(POT3, 0, 255, 0, 100);
  lcd.setCursor(8, 0);
  lcd.print("B:");
  lcd.print(POT3);
    delay(250);
  lcd.clear();
}
