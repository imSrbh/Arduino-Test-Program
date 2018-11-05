#include "DHT.h"
#define DHTPIN A0
#define DHTTYPE DHT11
DHT dht(DHTPIN,DHTTYPE);

void setup() {
Serial.begin(9600);
delay(500);
Serial.println("IIIT NAYA RAIPUR Humidity & Temperature Monitoring System\n");
delay(1000);
dht.begin();
}

void loop() {
int temp = dht.readTemperature();
int humidity = dht.readHumidity();
Serial.print("Temperature = ");
Serial.print(temp);
Serial.print("'C \t");
Serial.print("Humidity = ");
Serial.print(humidity);
Serial.print("% \n");
  delay(1000);
   if (temp<=22)
  {
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  }
  else if (temp>22)
  {
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  }
  else if (temp >=30)
  {
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  
  digitalWrite(8, LOW);
  } 
   
}






