int ledPins[]= {2,3,10,11,12};
boolean ledStates[]= {true,true,true,true,true};
int a;

int ledTotal = sizeof(ledPins) / sizeof(int);

int sensor1Pin=A0;
int sensor1Val;


void setup() {
  for(int i=0;i<ledTotal;i++){
  pinMode(ledPins[i],OUTPUT);
  Serial.begin(9600);
  }
}

void loop() {

  int value= analogRead(sensor1Pin);
  int val=map(value,0,1023,0,255);
  int sensorValue=analogRead(A0);
  float voltage= sensorValue*(5/1023.0);
   
for(int i=0;i<ledTotal;i++)
  {
a=255+val;
analogWrite(ledPins[i],a);
Serial.println(a);
delay(30);
}


}

  
 
