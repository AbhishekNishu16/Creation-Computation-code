#include <Servo.h>


Servo servo1;

int angle = 0;    

int ledPins[]= {2,3,11,12};
boolean ledStates[]= {true,true,true,true};
int a;

int shape;
int ledTotal = sizeof(ledPins) / sizeof(int);

int sensor1Pin=A0;
int sensor1Val;



void setup() {
  for(int i=0;i<ledTotal;i++){
  pinMode(ledPins[i],OUTPUT);
  Serial.begin(9600);
  }
  servo1.attach(9);
servo1.write(0);


}

void loop() {
for(angle = 0; angle < 180; angle += 1)    // command to move from 0 degrees to 180 degrees 
  {                                  
    servo1.write(angle);                 //command to rotate the servo to the specified angle
         90                  
  } 
 
 
  
  for(angle = 180; angle>=1; angle-=5)     // command to move from 180 degrees to 0 degrees 
  {                                
    servo1.write(angle);              //command to rotate the servo to the specified angle
               
  } 
 

  int value= analogRead(sensor1Pin);
  int val=map(value,0,1023,0,255);
  int sensorValue=analogRead(A0);
  float voltage= sensorValue*(5/1023.0);
   


for(int i=0;i<ledTotal;i++)
  {
a=255+val;
analogWrite(ledPins[i],a);
Serial.println(a);



  }
    
}

  
 
