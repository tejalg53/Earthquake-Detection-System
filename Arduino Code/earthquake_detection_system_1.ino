#include <LiquidCrystal.h>

// LCD Pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

// Pin Definitions
const int sensorPin = 6;     // Pushbutton (SW-420 emulator)
const int buzzerPin = 8;
const int ledPin = 13;

void setup()
{
  pinMode(sensorPin, INPUT_PULLUP);
  pinMode(buzzerPin, OUTPUT);
  pinMode(ledPin, OUTPUT);

  digitalWrite(buzzerPin, LOW);
  digitalWrite(ledPin, LOW);

  lcd.begin(16, 2);

  lcd.setCursor(0, 0);
  lcd.print("Earthquake");
  lcd.setCursor(0, 1);
  lcd.print("Monitoring");

  delay(2000);
  lcd.clear();
}

void loop()
{
  int vibration = digitalRead(sensorPin);

  if (vibration == LOW)   // Button Pressed
  {
    digitalWrite(ledPin, HIGH);
    digitalWrite(buzzerPin, HIGH);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("VIBRATION");
    lcd.setCursor(0, 1);
    lcd.print("ALERT !");
  }
  else
  {
    digitalWrite(ledPin, LOW);
    digitalWrite(buzzerPin, LOW);

    lcd.clear();
    lcd.setCursor(0, 0);
    lcd.print("Status:");
    lcd.setCursor(0, 1);
    lcd.print("Normal");
  }

  delay(200);
} 