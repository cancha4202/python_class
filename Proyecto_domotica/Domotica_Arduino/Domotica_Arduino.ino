char Valor;//definimos el valor que llega desde python
#include <Servo.h>//incluimos los servos

Servo ServoPP;//nombramos los servos
Servo ServoPG;

//incluimos a la pantalla LCD
#include <LiquidCrystal.h>
          LiquidCrystal lcd(7,6,5,4,3,2);


//definimos variables
float TempC;
float TempG;

  int SensorTG = 0;
  int SensorTC = 0;
  int td = 0;
  int LF = 0;
  int LuzCoc = 0;
  int LuzSal = 0;
  int LuzGar = 0;
  int LuzBa = 0;
  int LuzAl = 0;
  int LuzLav = 0;
  int Fog1 = 0;
  int Fog2 = 0;
  int Fog3 = 0;
  int Fog4 = 0;
  
  int SrPP = 0;
  int angPP = 0;
  
  int SrPG = 0;
  int angPG = 0;
  
  int LuzFuera = 72;
  int LuzCocina = 22;
  int LuzSala = 24;
  int LuzGaraje = 50;
  int LuzBano = 32;
  int LuzAlcoba = 28;
  int LuzLavadero = 34;
  int Fogonz = 31;
  int Fogonx = 33;
  int Fogonc = 35;
  int Fogonv = 37;
  
  int Extractor = 14;
  int Ventilador = 15;
  
  int LedRojo = 51;
  int LedAma = 47;
  int LedVerde = 49;
  
  void setup()
  {
  // comolocamos los pines ya estipulados en forma de salida
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
  pinMode(LuzFuera,OUTPUT);
  
  pinMode(LedRojo,OUTPUT);
  pinMode(LedAma,OUTPUT);
  pinMode(LedVerde,OUTPUT);
  
  //definimos los pines de los servos
  ServoPG.attach(10);
  ServoPP.attach(9);
  //definimos cuantas filas y cuantas columnas tiene la pantalla LCD
  lcd.begin(16,2);
  }
  
  void loop()
  {
  TempG = analogRead(SensorTG);//pedimos la temperatura dentro del garaje
  TempG = (5.0 * TempG * 100)/1024.0;//convertimos temperatura a celcius
  TempC = analogRead(SensorTC);//pedimos la temperatura dentro de la cocina
  TempC = (5.0 * TempC * 100)/1024.0;//convertimos temperatura a celcius
  
  if(TempG > 24){
    digitalWrite(Ventilador,HIGH);
  }else{
    if(TempG <= 24){
      digitalWrite(Ventilador,LOW);
    }
  }
  
  if(TempC > 30){
    digitalWrite(Extractor,HIGH);
  }else{
    if(TempC <= 30){
      digitalWrite(Extractor,LOW);
    }
  }
  
  //definimos variables para el nivel de luz de los fogones
  int iF1 = 0;
  int iF2 = 0;
  int iF3 = 0;
  int iF4 = 0;
  
  //probamos el funcionamiento de la pantalla LCD
  lcd.setCursor(0,1);
  lcd.print ("Funcionando");
  
    //lectura del numero enviado desde python de alfanumericos
  if(Serial.available()>0){
    Valor=Serial.read();
    //#Luz cocina #############################
    if(Valor == 'a' and LuzCoc == 0){
      digitalWrite(LuzCocina,HIGH);
      lcd.setCursor(0,0);
      lcd.print("Luz Cocina");
      lcd.setCursor(0,1);
      lcd.print("Encendido");
      LuzCoc = 1;
    }else{
      if(Valor == 'a' and LuzCoc == 1){
        digitalWrite(LuzCocina,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Cocina");
        lcd.setCursor(0,1);
        lcd.print("Encendido");
        LuzCoc = 0;
      }
    }
    //#Luz Sala ###############################
    if(Valor == 'b' and LuzSal == 0){
      digitalWrite(LuzSala,HIGH);
      lcd.setCursor(0,0);
      lcd.print("Luz Sala");
      lcd.setCursor(0,1);
      lcd.print("Encendida");
      LuzSal = 1;
    }else{
      if(Valor == 'b' and LuzSal == 1){
        digitalWrite(LuzSala,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Sala");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        LuzSal = 0;
      }
    }
    //#Luz Garaje ###############################
    if(Valor == 'c' and LuzGar == 0){
      digitalWrite(LuzGaraje,HIGH);
      lcd.setCursor(0,0);
      lcd.print("Luz Garaje");
      lcd.setCursor(0,1);
      lcd.print("Encendida");
      LuzGar = 1;
    }else{
      if(Valor == 'c' and LuzGar == 1){
        digitalWrite(LuzGaraje,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Garaje");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        LuzGar = 0;
      }
    }
    //#Luz Fuera ###############################
    if(Valor == 'd' and LF == 0){
      digitalWrite(LuzFuera,HIGH);
      lcd.setCursor(0,0);
      lcd.print("Luz Fuera");
      lcd.setCursor(0,1);
      lcd.print("Encendida");
      LF = 1;
    }else{
      if(Valor == 'd' and LF == 1){
        digitalWrite(LuzFuera,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Fuera");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        LF = 0;
      }
    }
    //#Luz Baño ###############################
    if(Valor == 'e' and LuzBa == 0){
      digitalWrite(LuzBano,HIGH);
      lcd.setCursor(0,0);
      lcd.print("Luz Baño");
      lcd.setCursor(0,1);
      lcd.print("Encendida");
      LuzBa = 1;
    }else{
      if(Valor == 'e' and LuzBa == 1){
        digitalWrite(LuzBano,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Baño");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        LuzBa = 0;
      }
    }
    //#Luz Alcoba ###############################
    if(Valor == 'f' and LuzAl == 0){
      digitalWrite(LuzAlcoba,HIGH);
      lcd.setCursor(0,0);
      lcd.print("Luz Alcoba");
      lcd.setCursor(0,1);
      lcd.print("Encendida");
      LuzAl = 1;
    }else{
      if(Valor == 'f' and LuzAl == 1){
        digitalWrite(LuzAlcoba,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Alcoba");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        LuzAl = 0;
      }
    }
    //#Fogón 1 ###############################
    if(Valor == 'g' and Fog1 == 0){
      for  (iF1=1;iF1<255; iF1++){
        analogWrite(Fogonz, iF1);
        delay(100);
        lcd.setCursor(0,0);
        lcd.print("Fogon 1");
        lcd.setCursor(0,1);
        lcd.print("Encendido");
        Fog1=1;}
    }else{
      if (Valor == 'g' and Fog1 == 1){
        for(iF1=255;iF1<1;iF1--){
          analogWrite(Fogonz, iF1);
          delay(100);
          lcd.setCursor(0,0);
          lcd.print("Fogon 1");
          lcd.setCursor(0,1);
          lcd.print("Apagado");}
      }
      }
    //#Fogón 2 ###############################
    if(Valor == 'h' and Fog2 == 0){
      for  (iF2=1;iF2<255; iF2++){
        analogWrite(Fogonx, iF2);
        delay(100);
        lcd.setCursor(0,0);
        lcd.print("Fogon 2");
        lcd.setCursor(0,1);
        lcd.print("Encendido");
        Fog2=1;}
    }else{
      if(Valor == 'h' and Fog2 == 1){
        for  (iF2=255;iF2<1; iF2--){
          analogWrite(Fogonx, iF2);
          delay(100);
          lcd.setCursor(0,0);
          lcd.print("Fogon 2");
          lcd.setCursor(0,1);
          lcd.print("Apagado");
          Fog2=0;}
    }
    }
    //#Fogón 3 ###############################
    if(Valor == 'i' and Fog3 == 0){
       for  (iF3=1;iF3<255; iF3++){
         analogWrite(Fogonc, iF3);
         delay(100);
         lcd.setCursor(0,0);
         lcd.print("Fogon 3");
         lcd.setCursor(0,1);
         lcd.print("Encendido");
         Fog3=1;}
     }else{
       if(Valor == 'i' and Fog3 == 1){
         for  (iF3=255;iF3<1; iF3--){
           analogWrite(Fogonc, iF3);
           delay(100);
           lcd.setCursor(0,0);
           lcd.print("Fogon 3");
           lcd.setCursor(0,1);
           lcd.print("Apagado");
           Fog3=0;}
       }
     }
     //#Fogón 4 ###############################
     if(Valor == 'j' and Fog4 == 0){
        for  (iF4=1;iF4<255; iF4++){
          analogWrite(Fogonv, iF4);
          delay(100);
          lcd.setCursor(0,0);
          lcd.print("Fogon 4");
          lcd.setCursor(0,1);
          lcd.print("Encendido");
          Fog4=1;}
      }else{
        if(Valor == 'j' and Fog4 == 1){
          for  (iF4=255;iF4<1; iF4--){
            analogWrite(Fogonv, iF4);
            delay(100);
            lcd.setCursor(0,0);
            lcd.print("Fogon 4");
            lcd.setCursor(0,1);
            lcd.print("Apagado");
            Fog4=0;}
        }
      }
      //#Luz Lavadero ###############################
      if(Valor == 'k' and LuzLav == 0){
        digitalWrite(LuzLavadero,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Luz Lavadero");
        lcd.setCursor(0,1);
        lcd.print("Encendido");
        LuzLav = 1;
      }else{
        if(Valor == 'k' and LuzLav == 1){
          digitalWrite(LuzLavadero,HIGH);
          lcd.setCursor(0,0);
          lcd.print("Luz Lavadero");
          lcd.setCursor(0,1);
          lcd.print("Encendido");
          LuzLav = 0;
        }
      }
      //#Puerta Principal ###############################
      if(Valor == 'l' and SrPP == 0){
        for(angPP = 0; angPP <= 90; angPP = angPP + 1){
          ServoPP.write(angPP);
          lcd.setCursor(0,0);
          lcd.print("Puerta Principal");
          lcd.setCursor(0,1);
          lcd.print("Abierta");
          SrPP = 1;}
        }else{
          if(Valor == 'l' and SrPP == 1){
            for(angPP = 90; angPP <= 0; angPP = angPP - 5){
              ServoPP.write(angPP);
              lcd.setCursor(0,0);
              lcd.print("Puerta Principal");
              lcd.setCursor(0,1);
              lcd.print("Cerrada");
              SrPP = 0;
            }
          }
      }
      //#Garaje ###############################
      if(Valor == 'm' and SrPG == 0){
        for(angPG = 0; angPG <= 90; angPG = angPG + 5){
          ServoPP.write(angPG);
          lcd.setCursor(0,0);
          lcd.print("Garaje");
          lcd.setCursor(0,1);
          lcd.print("Abierto");
          SrPG = 1;}
        }else{
          if(Valor == 'm' and SrPG == 1){
            for(angPG = 90; angPG <= 0; angPG = angPG - 1){
              ServoPG.write(angPG);
              lcd.setCursor(0,0);
              lcd.print("Garaje");
              lcd.setCursor(0,1);
              lcd.print("Cerrado");
              SrPG = 0;
            }
          }
      }
      //#Todo ###############################
      if(Valor == 'n' and td == 0){
          digitalWrite(Extractor,HIGH);
          digitalWrite(Ventilador,HIGH);
          digitalWrite(LuzSala,HIGH);
          digitalWrite(LuzCocina,HIGH);
          digitalWrite(LuzBano,HIGH);
          digitalWrite(LuzAlcoba,HIGH);
          digitalWrite(LuzGaraje,HIGH);
          digitalWrite(LuzLavadero,HIGH);
          digitalWrite(Fogonz,HIGH);
          digitalWrite(Fogonx,HIGH);
          digitalWrite(Fogonc,HIGH);
          digitalWrite(Fogonv,HIGH);
          digitalWrite(LuzFuera,HIGH);
          lcd.setCursor(0,0);
          lcd.print("Todo");
          lcd.setCursor(0,1);
          lcd.print("Encendido");
          td = 1;
      }else{
        if (Valor == 'n' and td == 1){
          digitalWrite(Extractor,LOW);
          digitalWrite(Ventilador,LOW);
          digitalWrite(LuzSala,LOW);
          digitalWrite(LuzCocina,LOW);
          digitalWrite(LuzBano,LOW);
          digitalWrite(LuzAlcoba,LOW);
          digitalWrite(LuzGaraje,LOW);
          digitalWrite(LuzLavadero,LOW);
          digitalWrite(Fogonz,LOW);
          digitalWrite(Fogonx,LOW);
          digitalWrite(Fogonc,LOW);
          digitalWrite(Fogonv,LOW);
          digitalWrite(LuzFuera,LOW);
          lcd.setCursor(0,0);
          lcd.print("Todo");
          lcd.setCursor(0,1);
          lcd.print("Apagado");
          td = 0;
          }
          }
          if (Valor == 'q'){
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
          }
       //#Mostrar temperatura de la cocina ###############################
       if(Valor == 'o'){
          TempC = analogRead(SensorTC);
          TempC = (5.0 * TempC * 100)/1024.0;
          Serial.println(TempC);
          lcd.setCursor(0,0);
          lcd.print("Temp Cocina");
          lcd.setCursor(0,1);
          lcd.print(TempC);
       }
       //#Mostrar temperatura del garaje ###############################
       if(Valor == 'p'){
          TempG = analogRead(SensorTG);
          TempG = (5.0 * TempG * 100)/1024.0;
          Serial.println(TempG);
          lcd.setCursor(0,0);
          lcd.print("Temp Garaje");
          lcd.setCursor(0,1);
          lcd.print(TempG);
       }
     }
  }
