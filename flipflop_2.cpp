#define lred 8
#define lblue 1

void setup () 
{
  pinMode(lred,OUTPUT);
  
  pinMode(lblue,OUTPUT);
  
  digitalWrite(lred,LOW);
  
  digitalWrite(lblue,LOW);
}

void loop ()
{
  digitalWrite(lred,HIGH);
  delay(900);
  
  digitalWrite(lred,LOW);
  delay(900);
  
  digitalWrite(lblue,HIGH);
  delay(700);
  
  digitalWrite(lblue,LOW);
  delay(700);
  
  
}
