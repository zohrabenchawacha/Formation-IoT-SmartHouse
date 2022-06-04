// C++ code
//
int led=13;
int capt=3;
int led1=7;
int phores=A0;
void setup()
{
  pinMode(led,OUTPUT);
  pinMode(capt,INPUT);
  pinMode(led1,OUTPUT);
  pinMode(phores,OUTPUT);
  


}

void loop()
{
  if(analogRead(A0)<50){
    if (digitalRead(capt) == 1){
  digitalWrite(led,HIGH);
    }
  else 
      {digitalWrite(led,LOW);
        }
  }}
  
  
