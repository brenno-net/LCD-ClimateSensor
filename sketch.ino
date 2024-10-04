/*
[Project: LCD-ClimateSensor] 
Functionalities: Temperature and humidity sensor monitor

Idea: A simple project to learn the basics of Arduino sensors and LCD display. Useful as a reference 
      for future personal and academic projects.

Author: Brenno Pereira dos Santos
GitHub: brenno-net (https://github.com/brenno-net)

*/

// at first, sorry for any bad english that probably will appear on the comments :/


#include <LiquidCrystal_I2C.h>   //LCD I2C library
#include <DHT.h>                 // DHT sensor library

#define DHTPIN 7 // data pin for dht sensor
#define DHTTYPE DHT22 // define sensor type as DHT22

// Initialize DHT sensor
DHT dht(DHTPIN, DHTTYPE);

// I2C lcd adress
  LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  //initialize display
  lcd.init();
  lcd.backlight();

  dht.begin(); //start sensor

  // print initial message
  lcd.setCursor(0,0);
  lcd.print("DHT22 sensor");
  lcd.setCursor(0,1);
  lcd.print("Starting...");
   delay(2000); // wait for 2 seconds

}

void loop() {

  //clear lcd for new info
  lcd.clear();

  //set variables and read temp and humi from sensor
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // verifica se houve erro na leitura
  if (isnan(humidity) || isnan(temperature)) {
    lcd.setCursor(0,0);
    lcd.print("Error reading!");
    lcd.setCursor(0,1);
    lcd.print("DHT22 sensor");
    return;
  }

  // print temp on LCD
  lcd.setCursor(0, 0);
  lcd.print("[Temp]: ");
  lcd.print(temperature);
  lcd.print(" C°"); // não sei ainda como fazer aparecer simbolos e parece que é um saco pelo que vi

  // print humid on LCD
  lcd.setCursor(0, 1);
  lcd.print(" [Hum]: ");
  lcd.print(humidity);
  lcd.print(" %");

   delay(2000); // wait 2 seconds for update

}
