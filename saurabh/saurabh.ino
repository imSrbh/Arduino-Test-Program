
#include <dht.h>
#define dht_apin A0 // Analog Pin sensor is connected to 
dht DHT;
void setup(){
  Serial.begin(9600);
  delay(500);//Delay to let system boot
  Serial.println("IIIT NAYA RAIPUR Humidity & temperature Monitoring System\n\n");
  delay(1000);
}
void loop(){
DHT.read11(dht_apin);
Serial.print("humidity = ");
Serial.print(DHT.humidity);
Serial.print("%  ");
Serial.print("temperature = ");
Serial.print(DHT.temperature); 
Serial.println("C  ");
 delay(500);//Wait 5 seconds before accessing sensor again.
 if (DHT.temperature<=22)
  {
  digitalWrite(7, HIGH);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  }
  else if (DHT.temperature<=35)
  {
  digitalWrite(8, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(9, LOW);
  digitalWrite(10, LOW);
  }
  else if (DHT.temperature <=40)
  {
  digitalWrite(9, HIGH);
  digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(10, LOW);
  } 
  else
  {
  digitalWrite(10, HIGH);
   digitalWrite(7, LOW);
  digitalWrite(8, LOW);
  digitalWrite(9, LOW);
  }
}
