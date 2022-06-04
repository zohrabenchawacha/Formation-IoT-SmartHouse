// C++ code
//
int led=13;
int capt=3;
void setup()
{
  pinMode(led, OUTPUT);
  pinMode(capt, INPUT);

}

void loop()
{
  if (digitalRead(capt) == 1){
  digitalWrite(led,HIGH);
    }
  else 
      {digitalWrite(led,LOW);
        }
}
