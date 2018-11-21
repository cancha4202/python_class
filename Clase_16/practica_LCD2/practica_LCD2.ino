//llamar libreria para la LCD
#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);

void setup()
{
  //tipo de pantalla a conectar 
  lcd.begin(16,2);
  //iniciar cursor en la pos 0x0
  lcd.home();
  //imprimir mensaje de bienvenida
  lcd.print("Bienvenidos");
  //seteamos el cursor en la siguinete linea
  lcd.setCursor (0,1);
  //imprimir nuevo mensaje
  lcd.print("Python Class");
  //asignamos tiempo de espera
  delay(1000);
}

void loop()
{
  int i;
  //desplazar texto hacia la derecha
  for ( int i = 0; i < 5; i++){
    lcd.scrollDisplayRight();
    delay(1000);
  }
  for ( int i = 0; i < 5; i++){
    lcd.scrollDisplayLeft();
    delay(1000);
  }
}
