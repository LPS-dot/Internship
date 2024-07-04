int led1=8;
int led2=7;
int led3=13;

void setup()
{
  pinMode(led1, OUTPUT);
  pinMode(led2, OUTPUT);
  pinMode(led3, OUTPUT);
}


void loop()
{
  digitalWrite(led1, HIGH);
  delay(3000); 
  digitalWrite(led1, LOW);
  delay(1000);
   digitalWrite(led2, HIGH);
  delay(3000); 
  digitalWrite(led2, LOW);
  delay(1000); 
   digitalWrite(led3, HIGH);
  delay(3000); 
  digitalWrite(led3, LOW);
  delay(1000); 
}