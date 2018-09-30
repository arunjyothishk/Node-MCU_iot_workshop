#include <CayenneMQTTESP8266.h>
#include <ESP8266WiFi.h>
#include <Servo.h>
#define ldr A0
#define servo 9
Servo myservo;
 char ssid[]= "jyothu";
 char pass[]= "password";

  char username[]="jdfja";
  char password[] ="jafa;";
  char client_id[]="sajfdj";

  void setup(){


    pinMode(ldr,INPUT);
   pinMode (servo,OUTPUT);
   Serial.begin(9600);
   Cayenne.begin(username,password,client_id,ssid,pass);
   
  }
void loop(){


int val=analogRead(ldr);
int loc=map(val,0,1024,0,100);

Cayenne.loop();


Cayenne.virtualWrite(0,loc);

}
CAYENNE_IN(1){

myservo.write(getValue.asInt());

}

