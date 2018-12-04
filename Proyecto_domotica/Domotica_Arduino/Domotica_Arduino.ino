char Valor;
#include <Servo.h>

Servo ServoPP;
Servo ServoPG;

#include <LiquidCrystal.h>
          LiquidCrystal lcd(7,6,5,4,3,2);


float tempC;
int SensorTC = 0;

float tempG;
int SensorTG = 0;

int i = 0;

const int LuzCocina = 0;
int LuzCoc = 0;

const int LuzSala = 1;
int LuzSal = 0;

const int LuzGaraje = 2;
int LuzGar = 0;

const int LuzBano = 3;
int LuzBa = 0;

const int LuzAlcoba = 4;
int LuzAl = 0;

const int LuzLavadero = 9;
int LuzLav = 0;

#define Fogonz 10
#define Fogonx 11
#define Fogonc 12
#define Fogonv 13
int Fog1 = 0;
int Fog2 = 0;
int Fog3 = 0;
int Fog4 = 0;

const int Extractor = 14;
int Ext = 0;

const int Ventilador = 15;
int Vent = 0;

const int LedRojo = 16;
const int LedAma = 17;
const int LedVerde = 18;

int SrPP = 0;
int SrPG = 0;
int angPP = 0;
int angPG = 0;

void setup()
{
  Serial.begin(9600);

  
  pinMode(LuzCocina, OUTPUT);
  pinMode(LuzBano, OUTPUT);
  pinMode(LuzLavadero, OUTPUT);
  pinMode(LuzAlcoba, OUTPUT);
  pinMode(LuzSala, OUTPUT);
  pinMode(LuzGaraje, OUTPUT);
  pinMode(Extractor, OUTPUT);
  pinMode(Ventilador, OUTPUT);
  pinMode(Fogonz, OUTPUT);
  pinMode(Fogonx, OUTPUT);
  pinMode(Fogonc, OUTPUT);
  pinMode(Fogonv, OUTPUT);
  
  pinMode(LedRojo,OUTPUT);
  pinMode(LedAma,OUTPUT);
  pinMode(LedVerde,OUTPUT);

  ServoPG.attach(19);
  ServoPP.attach(20);
  
  lcd.begin(16,2);
}
 
void loop()
{


  
int iF1 = 0;
int iF2 = 0;
int iF3 = 0;
int iF4 = 0;

  lcd.setCursor(0,1);
  lcd.print ("Funcionando");
  
    if(Serial.available()>0)
    { Valor=Serial.read();
      Serial.print(Valor);
      tempG = analogRead(SensorTG);
      tempC = analogRead(SensorTC);

      if (Valor=='0'){
        if (LuzSal==0){
          digitalWrite(LuzSala,HIGH);
          lcd.setCursor (0,0);
          lcd.print ("Luz Sala");
          lcd.setCursor (0,1);
          lcd.print ("Encendida");
          LuzSal=1;
          }else{
            digitalWrite(LuzSala,LOW);
            lcd.setCursor (0,0);
            lcd.print ("Luz Sala");
            lcd.setCursor (0,1);
            lcd.print ("Apagada");
            LuzSal=0;
          }else if (Valor='1'){
            if (LuzCoc==0){
              digitalWrite(LuzCocina,HIGH);
              lcd.setCursor(0,0);
              lcd.print("Luz Cocina");
              lcd.setCursor(0,1);
              lcd.print("Encendida");
              LuzCoc=1;
            }else{
              digitalWrite(LuzCocina,LOW);
              lcd.setCursor(0,0);
              lcd.print("Luz Cocina");
              lcd.setCursor(0,1);
              lcd.print ("Apagada");
              LuzCoc=0;
            }else if (Valor=='2'){
              if (LuzGar == 0){
                digitalWrite(LuzGaraje,HIGH);
                lcd.setCursor(0,0);
                lcd.print("Luz Garaje");
                lcd.setCursor(0,1);
                lcd.print("Encendida");
                LuzGar=1;
              }else{
                digitalWrite(LuzGaraje,LOW);
                lcd.setCursor(0,0);
                lcd.print("Luz Garaje");
                lcd.setCursor(0,1);
                lcd.print("Apagada");
              }else if (valor=='3'){
                if(LuzBa==0){
                  digitalWrite(LuzBano,HIGH);
                  lcd.setCursor(0,0);
                  lcd.print("Luz de Baño");
                  lcd.setCursor(0,1);
                  lcd.print("Encendida");
                  LuzBa=1;
                }else{
                  digitalWrite(LuzBano,LOW)
                  lcd.setCursor(0,0);
                  lcd.print("Luz de Baño");
                  lcd.setCursor(0,1);
                  lcd.print("Encendida");
                  LuzBa=0;
                }else if (Valor == '4'){
                  if(LuzAl == 0){
                    digitalWrite(LuzAlcoba,HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("Luz de Alcoba");
                    lcd.setCursor(0,1);
                    lcd.print("Encendida");
                    LuzAl=0;
                  }else{
                    digitalWrite(LuzAlcoba,HIGH);
                    lcd.setCursor(0,0);
                    lcd.print("Luz de Alcoba");
                    lcd.setCursor(0,1);
                    lcd.print("Apagada");
                    LuzAl=1;
                  }else if(Valor == '5'){
                    if(LuzLav == 0){
                      digitalWrite(LuzLavadero,HIGH);
                      lcd.setCursor(0,0);
                      lcd.print("Luz de Lavadero");
                      lcd.setCursor(0,1);
                      lcd.print("Encendida");
                      LuzLav=0;
                    }else{
                      digitalWrite(LuzLavadero,HIGH);
                      lcd.setCursor(0,0);
                      lcd.print("Luz de Lavadero");
                      lcd.setCursor(0,1);
                      lcd.print("Apagada");
                      LuzLav=1;
                    }else if(Valor == '6'){
                      if(Fog1==0){
                        for  (iF1=1;iF1<255; iF1++){
                        analogWrite(Fogonz, iF1);
                        delay(100);}
                        lcd.setCursor(0,0);
                        lcd.print("Fogon 1");
                        lcd.setCursor(0,1);
                        lcd.print("Encendido");
                        Fog1=1;
                      }else{
                        for(iF1=255;iF1>0; iF1--){
                        analogWrite(Fogonz, iF1);
                        delay(100);}
                        lcd.setCursor(0,0);
                        lcd.print("Fogon 1");
                        lcd.setCursor(0,1);
                        lcd.print("Apagado");
                        Fog1=0;
                      }else if (Valor=='7'){
                        if(Fog2==0){
                          for  (iF2=1;iF2<255; iF2++){
                          analogWrite(Fogonx, iF2);
                          delay(100);}
                          lcd.setCursor(0,0);
                          lcd.print("Fogon 1");
                          lcd.setCursor(0,1);
                          lcd.print("Encendido");
                          Fog2=1;
                        }else{
                          for(iF2=255;iF2>0; iF2--){
                          analogWrite(Fogonx, iF2);
                          delay(100);}
                          lcd.setCursor(0,0);
                          lcd.print("Fogon 2");
                          lcd.setCursor(0,1);
                          lcd.print("Apagado");
                          Fog2=0;
                        }else if(Valor=='8'){
                          if(Fog3==0){
                            for(iF3=1;iF3<255; iF3++){
                            analogWrite(Fogonc, iF3);
                            delay(100);}
                            lcd.setCursor(0,0);
                            lcd.print("Fogon 3");
                            lcd.setCursor(0,1);
                            lcd.print("Encendido");
                            Fog3=1;
                          }else{
                            for(iF3=255;iF3>0; iF3--){
                            analogWrite(Fogonc, iF3);
                            delay(100);}
                            lcd.setCursor(0,0);
                            lcd.print("Fogon 3");
                            lcd.setCursor(0,1);
                            lcd.print("Apagado");
                            Fog3=0;
                          }else if(Valor=='9'){
                            if(Fog4==0){
                              for(iF4=1;iF4<255; iF4++){
                              analogWrite(Fogonv, iF4);
                              delay(100);}
                              lcd.setCursor(0,0);
                              lcd.print("Fogon 4");
                              lcd.setCursor(0,1);
                              lcd.print("Encendido");
                              Fog4=1;
                            }else{
                              for(iF4=255;iF4>0; iF4--){
                              analogWrite(Fogonv, iF4);
                              delay(100);}
                              lcd.setCursor(0,0);
                              lcd.print("Fogon 4");
                              lcd.setCursor(0,1);
                              lcd.print("Apagado");
                              Fog4=0;
                            }else if(Valor=="10"){
                              tempG = analogRead(SensorTG);
                              tempG = (5.0 * TempG * 100)/1024.0;
                              lcd.setCursor(0,0);
                              lcd.print("Temp Garaje");
                              lcd.setCursor(0,1);
                              lcd.print(TempG);
                              }else if(Valor=="11"){
                                tempC = analogRead(SensorTC);
                                tempC = (5.0 * TempC * 100)/1024.0;
                                lcd.setCursor(0,0);
                                lcd.print("Temp Cocina");
                                lcd.setCursor(0,1);
                                lcd.print(TempC);
                                }else if(TempC >= 27){
                                  digitalWrite(Extractor,HIGH);
                                }else{
                                  if(TempC < 27){
                                    digitalWrite(Extractor,LOW);
                                  }else if(TempG >= 27){
                                    digitalWrite(Ventilador,HIGH);
                                  }else{
                                    if(TempG <27){
                                      digitalWrite(Ventilador,LOW);
                                    }else if(Valor == "12"){
                                          digitalWrite (LedRojo,HIGH);
                                          delay(4000);
                                          digitalWrite (LedRojo,LOW);
                                          digitalWrite (LedAma,HIGH);
                                          delay(2000);
                                          digitalWrite (LedAma,LOW);
                                          digitalWrite (LedVerde,HIGH);
                                          delay (4000);
                                          digitalWrite (LedVerde,LOW);
                                          digitalWrite (LedAma,HIGH);
                                          delay(2000);
                                          digitalWrite (LedAma,LOW);
                                          digitalWrite (LedRojo,HIGH);
                                          }else if(Valor == "13"){
                                            if (SrPP == 0){
                                              for(angPP = 0; angPP <= 90; angPP = angPP + 1){
                                                ServoPP.write(angPP);
                                                delay(15);
                                                SrPP = 1
                                              }else{
                                                for(angPP = 90; angPP = 0; angPP = angPP - 1){
                                                  ServoPP.write(angPP)
                                                  delay(15);
                                                  SrPP = 0}}
                                                }else if(Valor == "14"){
                                                  if (SrPG == 0){
                                                    for(angPG = 0 ; angPG = 90; angPG = angPG + 1){
                                                      ServoPG.write(angPG);
                                                      delay(15);
                                                      SrPG = 1}
                                                    }else{
                                                      for(angPG = 90 ; angPG = 0; angPG = angPG - 1){
                                                        ServoPG.write(angPG);
                                                        delay(15);
                                                        SrPG = 0
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                  }
                                }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
      }
    }
}
