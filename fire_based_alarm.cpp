

#define BLYNK_PRINT Serial

#include <ESP8266WiFi.h>

#include <BlynkSimpleEsp8266.h>

// You should get Auth Token in the Blynk App.
char auth[] = "";

// Your WiFi credentials.
// Set password to "" for open networks.
char ssid[] = "";//your wifi name
char pass[] = "";//your wifi password

int buzzer = D2;
int smokeA0 = A0;

// Your threshold value. You might need to change it.
int sensorThres = 300;//you can change the value as your wish

void setup() {
 Serial.begin(115200);
 delay(10);
 Blynk.begin(auth, ssid, pass);
 pinMode(buzzer, OUTPUT);
 pinMode(smokeA0, INPUT);
 
}

void loop() {
 int analogSensor = analogRead(smokeA0);

 Serial.print("Pin A0: ");
 Serial.println(analogSensor);
 // Checks if it has reached the threshold value
 if (analogSensor > sensorThres)
 {
   tone(buzzer, 1000, 200);
   Blynk.notify("Alert: Fire in the House");  
 }
 else
 {
   noTone(buzzer);
 }
 delay(100);
 Blynk.run();
}
