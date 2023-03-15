#include <Arduino.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

LiquidCrystal_I2C lcd(0x27,16,2);  // set the LCD address to 0x27 for a 16 chars and 2 line display

// :)
byte smileyFace[] = {
  B00000,
  B11011,
  B11011,
  B00000,
  B10001,
  B10001,
  B11111,
  B00000
};
 
 void setup()
{
  lcd.init();
  lcd.clear();
  lcd.backlight();
  lcd.setCursor(0,0);
  lcd.print("Hello World");
  lcd.createChar(0,smileyFace);
  lcd.setCursor(13,0);
  lcd.write(0);

}

void loop() {
  // put your main code here, to run repeatedly:
}
