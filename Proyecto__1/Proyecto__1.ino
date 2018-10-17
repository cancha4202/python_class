//Oscar Vargas
//Cristian Bravo
//Harold Chamorro

char opcion ='0';
const int LedRojo = 2;
const int LedAma = 4;
const int LedVerde = 7;
const int Motor = 13;



void setup() 
{
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedRojo,OUTPUT);
  pinMode(LedAma,OUTPUT);
  pinMode(LedVerde,OUTPUT);
  pinMode(Motor,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while(Serial.available()=='0')
  char opcion = Serial.read();

  if (opcion=='1')
  {
    digitalWrite(LedRojo,HIGH);
    Serial.println("Led rojo encendido");
    if(opcion=='1')
    {
      digitalWrite(LedRojo,LOW);
      Serial.println("Led rojo apagado");
      
  if(opcion=='2')
  {
    digitalWrite(Motor,HIGH);
    Serial.println("Motor encendido");
    if(opcion=='2')
    {
      digitalWrite(Motor,LOW);
      Serial.println("Motor apagado");
  if(opcion=='3')
  {
    Serial.println("ENCENDIDO TODO");
    digitalWrite(LedRojo,HIGH);
    digitalWrite(LedAma,HIGH);
    digitalWrite(LedVerde,HIGH);
    digitalWrite(Motor,HIGH);
    if(opcion=='3')
    {
      digitalWrite(LedRojo,LOW);
      digitalWrite(LedAma,LOW);
      digitalWrite(LedVerde,LOW);
      digitalWrite(Motor,LOW);
      Serial.println("APAGADO TODO");
   
   Serial.println("Ocurrio un error al ingresar el dato");
}
  }
    }
  }
    }
  }
}







