char opc = '0';
const int LedRojo = 7;
const int LedVerde = 2;
const int LedAma = 4;
const int Motor = 12;



void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(LedRojo,OUTPUT);
  pinMode(LedVerde,OUTPUT);
  pinMode(LedAma,OUTPUT);
  pinMode(Motor,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  while (Serial.available()== 0);
  char opc = Serial.read(); 
  
  if (opc == '1')
  {
    digitalWrite(LedRojo,HIGH);
    if (opc == '1')
    {
      digitalWrite(LedRojo,LOW);
    }
  }
  if (opc == '2')
  {
    digitalWrite(Motor,HIGH);
    if (opc == '2')
    {
      digitalWrite(Motor,LOW);
    }
  }
  if (opc == '3')
  {
    Serial.println ("Se han encendido todos los componentes");
    digitalWrite(LedRojo,HIGH);
    digitalWrite(LedAma,HIGH);
    digitalWrite(Motor,HIGH);
    digitalWrite(LedVerde,HIGH);
    if (opc == '3')
    {
      Serial.println ("Se han encendido todos los componentes");
      digitalWrite(LedRojo,LOW); 
      digitalWrite(LedVerde,LOW);
      digitalWrite(LedAma,LOW);
      digitalWrite(Motor,LOW);
    }
  }else{
    Serial.println("Error.");
  }
}
