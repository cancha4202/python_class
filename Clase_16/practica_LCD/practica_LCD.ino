#include <LiquidCrystal.h>
const int rs = 12, en = 11, d4 = 5, d5 = 4, d6 = 3, d7 = 2;
LiquidCrystal lcd(rs, en, d4, d5, d6, d7);

void setup()
{
  //definir las columnas y las filas de la pantalla:
  lcd.begin(16, 2);
  //impromir mensaje en la pantalla LCD
  lcd.print("HOLA, MUNDO!");
}

void loop()
{
  //Colocar el cursor en la linea, columna
  //(nota: linea 1 es la segunda columna, asi que empezamos a contar desde 0):
  lcd.setCursor(0, 1);
  //escribir el numro de segundos antes de resetear
  lcd.print(millis() / 1000);
}

