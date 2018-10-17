//LM35 : SENSOR DE TEMPERATURA

//DECLARA VARIABLES PARA GURADAR TEMP EN CELCIUS

float tempC;
const int ledRojo = 2;
const int ledAmar = 4;
//DECLARO VARIABLE PARA EL PIN A0

int pinSensorT = 0;

void setup()
{
  Serial.begin(9600);
  pinMode(ledRojo,OUTPUT);
  pinMode(ledAmar,OUTPUT);
}

void loop() 
{
  tempC = analogRead(pinSensorT);
  tempC = (5.0 * tempC * 100 )/1024.0;
  Serial.println(tempC);
  delay(1000);
  //>=30 rojo
  //<30 amarillo

    
  if(tempC >= 25)
  {
    digitalWrite(ledAmar,LOW);
    digitalWrite(ledRojo,HIGH);
    delay(500);
    digitalWrite(ledRojo,LOW);
  }
  if(tempC < 25)
  {
    digitalWrite(ledRojo,LOW);
    digitalWrite(ledAmar,HIGH);
        delay(500);
    digitalWrite(ledAmar,LOW);
  }
}
