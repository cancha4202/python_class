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
  int VNT = 0;
  int EXT = 0;
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
  int angPPA = 0;
  int angPPC = 130;
  
  int SrPG = 0;
  int angPGA = 0;
  int angPGC = 135;
  
  int LuzFuera = 48;
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
  
  int Extractor = 52;
  int Ventilador = 53;
  
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
  ServoPG.attach(53);
  ServoPP.attach(38);
  //definimos cuantas filas y cuantas columnas tiene la pantalla LCD
  lcd.begin(12,2);
  }
  
  void loop()
  {
  TempG = analogRead(SensorTG);//pedimos la temperatura dentro del garaje
  TempC = analogRead(SensorTC);//pedimos la temperatura dentro de la cocina
  TempG = (5.0 * TempG * 100)/1024.0;//convertimos temperatura a celcius
  TempC = (5.0 * TempC * 100)/1024.0;//convertimos temperatura a celcius
  
  /*if(TempG > 15){
    digitalWrite(Ventilador,HIGH);
  }else{
    if(TempG <= 15){
      digitalWrite(Ventilador,LOW);
    }
  }
  
  if(TempC > 15){
    digitalWrite(Extractor,HIGH);
  }else{
    if(TempC <= 15){
      digitalWrite(Extractor,LOW);
    }
  }*/
  
  //definimos variables para el nivel de luz de los fogones
  int iF1 = 0;
  int iF2 = 0;
  int iF3 = 0;
  int iF4 = 0;
  
    //lectura del numero enviado desde python de alfanumericos
  if(Serial.available()>0){
    Valor=Serial.read();
    //#Luz cocina #############################
    if(Valor == 'a' and LuzCoc == 0){
      digitalWrite(LuzCocina,HIGH);
      lcd.setCursor(0,0);
      lcd.print("Luz Cocina");
      lcd.setCursor(0,1);
      lcd.print("Encendida");
      {delay (5000);
      lcd.clear();}
      LuzCoc = 1;
    }else{
      if(Valor == 'a' and LuzCoc == 1){
        digitalWrite(LuzCocina,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Cocina");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        {delay (5000);
        lcd.clear();}
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
      {delay (5000);
      lcd.clear();}
      LuzSal = 1;
    }else{
      if(Valor == 'b' and LuzSal == 1){
        digitalWrite(LuzSala,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Sala");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        {delay (5000);
        lcd.clear();}
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
      {delay (5000);
      lcd.clear();}
      LuzGar = 1;
    }else{
      if(Valor == 'c' and LuzGar == 1){
        digitalWrite(LuzGaraje,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Garaje");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        {delay (5000);
        lcd.clear();}
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
      {delay (5000);
      lcd.clear();}
      LF = 1;
    }else{
      if(Valor == 'd' and LF == 1){
        digitalWrite(LuzFuera,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Fuera");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        {delay (5000);
        lcd.clear();}
        LF = 0;
      }
    }
    //#Luz Baño ###############################
    if(Valor == 'e' and LuzBa == 0){
      digitalWrite(LuzBano,HIGH);
      lcd.setCursor(0,0);
      lcd.print("Luz WC");
      lcd.setCursor(0,1);
      lcd.print("Encendida");
      {delay (5000);
      lcd.clear();}
      LuzBa = 1;
    }else{
      if(Valor == 'e' and LuzBa == 1){
        digitalWrite(LuzBano,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz WC");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        {delay (5000);
        lcd.clear();}
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
      {delay (5000);
      lcd.clear();}
      LuzAl = 1;
    }else{
      if(Valor == 'f' and LuzAl == 1){
        digitalWrite(LuzAlcoba,LOW);
        lcd.setCursor(0,0);
        lcd.print("Luz Alcoba");
        lcd.setCursor(0,1);
        lcd.print("Apagada");
        {delay (5000);
        lcd.clear();}
        LuzAl = 0;
      }
    }
    //#Fogón 1 ###############################
    if(Valor == 'g' and Fog1 == 0){
      digitalWrite(Fogonz,HIGH);
      lcd.setCursor(0,0);
      lcd.print("1er Fogon");
      lcd.setCursor(0,1);
      lcd.print("Encendido");
      Fog1=1;
    }else{
      if (Valor == 'g' and Fog1 == 1){
        digitalWrite(Fogonz,LOW);
        lcd.setCursor(0,0);
        lcd.print("1er Fogon");
        lcd.setCursor(0,1);
        lcd.print("Apagado");
        {delay (5000);
        lcd.clear();}
        Fog1 = 0;
      }
      }
    //#Fogón 2 ###############################
    if(Valor == 'h' and Fog2 == 0){
        digitalWrite(Fogonx,HIGH);
        lcd.setCursor(0,0);
        lcd.print("2do Fogon");
        lcd.setCursor(0,1);
        lcd.print("Encendido");
        {delay (5000);
        lcd.clear();}
        Fog2=1;
        }else{
      if(Valor == 'h' and Fog2 == 1){
        digitalWrite(Fogonx,LOW);
        lcd.setCursor(0,0);
        lcd.print("2do Fogon");
        lcd.setCursor(0,1);
        lcd.print("Apagado");
        {delay (5000);
        lcd.clear();}
        Fog2=0;}
    }
    //#Fogón 3 ###############################
    if(Valor == 'i' and Fog3 == 0){
      digitalWrite(Fogonc,HIGH);
      lcd.setCursor(0,0);
      lcd.print("3er Fogon");
      lcd.setCursor(0,1);
      lcd.print("Encendido");
      {delay (5000);
      lcd.clear();}
      Fog3=1;
     }else{
       if(Valor == 'i' and Fog3 == 1){
         digitalWrite(Fogonc,LOW);
         lcd.setCursor(0,0);
         lcd.print("3er Fogon");
         lcd.setCursor(0,1);
         lcd.print("Apagado");
         {delay (5000);
         lcd.clear();}
         Fog3=0;
       }
     }
     //#Fogón 4 ###############################
     if(Valor == 'j' and Fog4 == 0){
          digitalWrite(Fogonv,HIGH);
          lcd.setCursor(0,0);
          lcd.print("Cuarto Fogon");
          lcd.setCursor(0,1);
          lcd.print("Encendido");
          {delay (5000);
          lcd.clear();}
          Fog4=1;
      }else{
        if(Valor == 'j' and Fog4 == 1){
          digitalWrite(Fogonv,LOW);
          lcd.setCursor(0,0);
          lcd.print("Cuarto Fogon");
          lcd.setCursor(0,1);
          lcd.print("Apagado");
          {delay (5000);
          lcd.clear();}
          Fog4=0;}
        }
      //#Luz Lavadero ###############################
      if(Valor == 'k' and LuzLav == 0){
        digitalWrite(LuzLavadero,HIGH);
        lcd.setCursor(0,0);
        lcd.print("Luz Lavadero");
        lcd.setCursor(0,1);
        lcd.print("Encendido");
        {delay (5000);
        lcd.clear();}
        LuzLav = 1;
      }else{
        if(Valor == 'k' and LuzLav == 1){
          digitalWrite(LuzLavadero,LOW);
          lcd.setCursor(0,0);
          lcd.print("Luz Lavadero");
          lcd.setCursor(0,1);
          lcd.print("Apagado");
          {delay (5000);
          lcd.clear();}
          LuzLav = 0;
        }
      }
      //#Puerta Principal ###############################
      if(Valor == 'l' and SrPP == 0){
          ServoPP.write(angPPC);
          lcd.setCursor(0,0);
          lcd.print("Puerta Principal");
          lcd.setCursor(0,1);
          lcd.print("Abierta");
          {delay (5000);
          lcd.clear();}
          SrPP = 1;
        }else{
          if(Valor == 'l' and SrPP == 1){
              ServoPP.write(angPPA);
              lcd.setCursor(0,0);
              lcd.print("Puerta Principal");
              lcd.setCursor(0,1);
              lcd.print("Cerrada");
              {delay (5000);
              lcd.clear();}
              SrPP = 0;
          }
        }
      //#Garaje ###############################
      if(Valor == 'm' and SrPG == 0){
        lcd.setCursor(0,0);
        lcd.print("Garaje");
        lcd.setCursor(0,1);
        lcd.print("Cerrado");
        ServoPG.write(angPGA);
        {delay (5000);
        lcd.clear();}
        SrPG = 1;
        }else{
          if(Valor == 'm' and SrPG == 1){
            lcd.setCursor(0,0);
            lcd.print("Garaje");
            lcd.setCursor(0,1);
            lcd.print("Abierto");
            ServoPG.write(angPGC);
            {delay (5000);
            lcd.clear();}
            SrPG = 0;
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
          {delay (5000);
          lcd.clear();}
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
          {delay (5000);
          lcd.clear();}
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
          if(Valor == 'r' and VNT == 0){
            digitalWrite(Ventilador,HIGH);
            VNT = 1;
           }else{
            if(Valor == 'r' and VNT == 1){
              digitalWrite(Ventilador,LOW);
              VNT = 0;
            }
           }
           if(Valor == 's' and EXT == 0){
            digitalWrite(Extractor,HIGH);
            EXT = 1;
           }else{
            if(Valor == 's' and EXT == 1){
              digitalWrite(Extractor,LOW);
              EXT = 0;}
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
          if(TempC > 15){
            digitalWrite(Extractor,HIGH);
          }else{
            digitalWrite(Extractor,LOW);
          }
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
          if(TempG > 15){
            digitalWrite(Ventilador,HIGH);
          }else{
            digitalWrite(Ventilador,LOW);
          }
       }
  }
  }
