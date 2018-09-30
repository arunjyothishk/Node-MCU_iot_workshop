#include <Servo.h>

#include <CayenneMQTTESP8266.h>
#include <ESP8266WiFi.h>

char ssid[] = "Red";
char password[] = "enthalee";

char username[] = "27b8ffd0-96fc-11e7-94c8-a1bba3f5296f";
char mqtt_password[] = "8f0fe6b7bc0caae6cf8174c5032bda15e453d782";
char client_id[] = "0441b680-f6ad-11e7-939f-b354e6d68235";

Servo myservo;


void setup()
{
  myservo.attach(D2);

  Cayenne.begin(username,mqtt_password,client_id,ssid,password);
}

void loop()
{
  Cayenne.loop();
   
 }

CAYENNE_IN(1)
{

  myservo.write(getValue.asInt());
}
  

