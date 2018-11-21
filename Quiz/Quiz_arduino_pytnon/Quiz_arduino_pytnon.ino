char operador;
int pinLed1 = 13, i=0;


void setup()
{
  pinMode(pinLed1,OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
    operador = Serial.read();
    Serial.println(operador);

  digitalWrite(pinLed1,HIGH);
  /*while(i < operador){
    digitalWrite(pinLed1,HIGH);
    delay(100);
    digitalWrite(pinLed1,LOW);
    i = i + 1;
    }*/
  }
}  
