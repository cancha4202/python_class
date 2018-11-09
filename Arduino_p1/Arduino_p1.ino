char opcion = '0';
int Led_Rojo = 2;
int Led_Ama = 4;
int Led_Ver = 7;
//int Motor = ;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode (Led_Rojo,OUTPUT);


}

void loop() 
{
  // put your main code here, to run repeatedly:
  if(Serial.available()>0)
  {
      opcion = Serial.read();
      if (opcion == '0')
      {
        Serial.println("Menu");
        Serial.println("1. Encender Led Rojo");
        Serial.println("2. Apagar Led Rojo");
      }
      if(opcion=='1')
      {
        digitalWrite(Led_Rojo,HIGH);
      }else{
        if (opcion=='2')
        {
          digitalWrite(Led_Rojo,LOW);
        }else{
          Serial.println("Opcion incorrecta");
        }
      }
  }



}
