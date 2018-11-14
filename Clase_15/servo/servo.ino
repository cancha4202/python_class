#include <Servo.h>

Servo myservo; //crea el objeto servo
int angle = 0; //pos del servo



void setup()
{
  myservo.attach(9); //vincula el servo al pin digital
}

void loop()
{
  //varia pos de 0 a 180, con esperas de 15ms
  for (angle = 0 ; angle <= 180; angle += 1)
  {
    myservo.write(angle);
    delay(20); 
  }
  //varia la pos de 0 a 180, con esperas de 15ms
  for (angle = 180; angle >= 0; angle -=1)
  {
    myservo.write(angle);
    delay(20);
  }
}
