int buttonPin=2;
int led=13;
int buttonstate=1;

void setup()
{ pinMode(led,OUTPUT);
 pinMode(buttonPin,INPUT);
}
 void loop()
 {
   buttonstate = digitalRead(buttonPin);
   if (buttonstate == LOW)
  {
    digitalWrite(led,HIGH);
  } else {
    digitalWrite(led,LOW);
  }
 }
