// DHT code from:
// Example testing sketch for various DHT humidity/temperature sensors
// Written by ladyada, public domain

#include "DHT.h"
#include <dht.h>

#define DHTPIN 2     // what pin we're connected to

// Uncomment whatever type you're using!
#define DHTTYPE DHT11   // DHT 11 
// #define DHTTYPE DHT22   // DHT 22  (AM2302)
//#define DHTTYPE DHT21   // DHT 21 (AM2301)
DHT dht(DHTPIN, DHTTYPE);

// LCD
// LCD RS=3, EN=4, DS4=5, DS5=6, DS6=7, DS7=8
#include <LiquidCrystal.h>
LiquidCrystal lcd( 3, 4, 5, 6, 7, 8);
dht sensor;
 dht DHT;

void setup() {
  Serial.begin(9600);
   Serial.print("Current humidity = ");
 Serial.print(sensor.humidity);
 Serial.print("% ");
 Serial.print("temperature = ");
 Serial.print(sensor.temperature);
  // set up the LCD's number of columns and rows: 
  lcd.begin(16,2);
  dht.begin();
}

void loop() {
  
  // Reading temperature or humidity takes about 250 milliseconds!
  // Sensor readings may also be up to 2 seconds 'old' (its a very slow sensor)
  int h = dht.readHumidity();
  int t = dht.readTemperature();

    // set the cursor to (0,0):
  lcd.setCursor(0, 0);
  // print from 0 to 9:
  
   lcd.print("Temp: ");
   lcd.print(t);
   lcd.print("C");
  // set the cursor to (16,1):
  lcd.setCursor(0,1);
  lcd.print("Humidity: ");
  lcd.print(h);
  lcd.print("%");
  sensor humidity;


    delay(200);
    
}

