char opc = '0';
const int Leds = 1 ;
const int Motor = 2;
const int Servos = 3;
const int Fan = 4;
float Temper°C;

int pinSensorT = 0;

void setup() 
{
  Serial.begin(9600);
  pinMode (Leds,OUTPUT):
  pinMode (Motor,OUTPUT):
  pinMode (Servos,OUTPUT):
  pinMode (Fans,OUTPUT):
}

void loop()
{
  if (Serial.available())
  
   {switch(Serial.read()){
    
    case'0':digitalWrite(13,LOW);
      break;
    case'1':digitalWrite(13,HIGH);
      break;

    default: Break;
    }
  }
}
  
