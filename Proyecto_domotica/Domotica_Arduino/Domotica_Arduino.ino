char Valor;
#include <Servo.h>


Servo ServoPP;
Servo ServoPG;


int angleC = 0;
int angleA = 90 ;
int i;
const int LuzCocina = 0;
const int LuzSala = 1;
const int LuzGaraje = 2;
const int LuzBano = 3;
const int LuzAlcoba = 4;
const int LuzLavadero = 9;
const int Fogon1 = 5;
const int Fogon2 = 6;
const int Fogon3 = 7;
const int Fogon4 = 8;
const int TempV = 10;
const int TempC = 11;
const int Extractor = 12;
const int Ventilador = 13;



void setup()
{
  Serial.begin(9600);
  
  pinMode(LuzCocina, OUTPUT);
  pinMode(LuzBano, OUTPUT);
  pinMode(LuzLavadero, OUTPUT);
  pinMode(LuzAlcoba, OUTPUT);
  pinMode(LuzSala, OUTPUT);
  pinMode(LuzGaraje, OUTPUT);
  pinMode(TempV, OUTPUT);
  pinMode(TempC, OUTPUT);
  pinMode(Extractor, OUTPUT);
  pinMode(Ventilador, OUTPUT);
  pinMode(Fogon1, OUTPUT);
  pinMode(Fogon2, OUTPUT);
  pinMode(Fogon3, OUTPUT);
  pinMode(Fogon4, OUTPUT);


  

}
 
void loop()
{
   if(Serial.available()>0)
   {
    Valor=Serial.read();
    Serial.print(Valor);
   }
    if (Valor == '0')
    {
      digitalWrite(LuzSala, HIGH);
    }
    else if (Valor == '0')
    {
      digitalWrite(LuzSala, LOW);
    
    }else if (Valor == '1'){
      digitalWrite(LuzBano, HIGH);
    
    }else if (Valor == '1'){
      digitalWrite(LuzBano, LOW);
    
    }else if (Valor == '2'){
      digitalWrite(LuzCocina, HIGH);
    
    }else if (Valor == '2'){
      digitalWrite(LuzCocina, LOW);
    
    }else if (Valor == '3'){
      digitalWrite(LuzGaraje, HIGH);
    
    }else if (Valor == '3'){
      digitalWrite(LuzGaraje, LOW);
    
    }else if (Valor == '4'){
      ServoPG.write (angleA);
      delay(6000);
    
    }else if (Valor == '4'){
      ServoPG.write (angleC);
      delay(6000);
    
    }else if (Valor == '5'){
      ServoPP.write (angleA);
      delay(6000);
    
    }else if (Valor == '5'){
      ServoPP.write (angleC);
      delay(6000);
    
    }else if (Valor == '6'){
      for  (i=1;i<255; i++){
      analogWrite(Fogon1,i);
      delay(5);
      }
      }else if (Valor == '6'){
      for  (i=255;i>0; i--){
      analogWrite(Fogon1,i);
      delay(5);
      }
      }else if (Valor == '7'){
      for  (i=1;i<255; i++){
      analogWrite(Fogon2,i);
      delay(5);
      }
      }else if (Valor == '7'){
      for  (i=255;i>0; i--){
      analogWrite(Fogon2,i);
      delay(5);
      }
      }else if (Valor == '8'){
      for  (i=1;i<255; i++){
      analogWrite(Fogon3,i);
      delay(5);
      }
      }else if (Valor == '8'){
      for  (i=255;i>0; i--){
      analogWrite(Fogon3,i);
      delay(5);
      }
      }else if (Valor == '9'){
      for  (i=1;i<255; i++){
      analogWrite(Fogon4,i);
      delay(5);
      }
      }else if (Valor == '9'){
      for  (i=255;i>0; i--){
      analogWrite(Fogon4,i);
      delay(5);
      }
      }
}
      
//    else if (Valor == "10")
//    {
      
//    }
    
