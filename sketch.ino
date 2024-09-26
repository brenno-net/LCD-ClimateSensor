/*
[Project: LCD-ClimateSensor] 
Functionalities: Temperature and humidity sensor monitor

Idea: A simple project to learn the basics of Arduino sensors and LCD display. Useful as a reference 
      for future personal and academic projects.

Author: Brenno Pereira dos Santos
GitHub: brenno-net (https://github.com/brenno-net)

*/

#include <LiquidCrystal_I2C.h>

// I2C lcd adress
  LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  //initialize display
  lcd.init();
  lcd.backlight();

}

void loop() {

  //print message, then wait for 0,5 second and print next message
  lcd.clear();
 lcd.print("LCD running.");
 delay(500);
  lcd.clear();
  lcd.print("LCD running..");
  delay(500);
   lcd.clear();
   lcd.print("LCD running...");
   delay(500);
}