int pinCocina = 22;
int estadopinCocina = 0, estadopinPuerta = 0;
char valor;
void setup() {
  // put your setup code here, to run once:
  pinMode(pinCocina,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  if(Serial.available()>0) {
    valor = Serial.read();
    //#Luz cocina #############################
    if(valor == 'a' and estadopinCocina == 0){
      digitalWrite(pinCocina,HIGH);
      estadopinCocina = 1;
    }else{
      if(valor == 'a' and estadopinCocina == 1){
        digitalWrite(pinCocina,LOW);
        estadopinCocina = 0;
      }
    }
    //#Puerta ###############################
    if(valor == 'b' and estadopinPuerta == 0){
      digitalWrite(pinCocina,HIGH);
      estadopinCocina = 1;
    }else{
      if(valor == 'b' and estadopinPuerta == 1){
        digitalWrite(pinCocina,LOW);
        estadopinCocina = 0;
      }
    }
    //#lEstufa ###############################
    if(valor == 'c' and estadopinPuerta == 0){
      digitalWrite(pinCocina,HIGH);
      estadopinCocina = 1;
    }else{
      if(valor == 'c' and estadopinPuerta == 1){
        digitalWrite(pinCocina,LOW);
        estadopinCocina = 0;
      }
    }
    //###########################################
  }
    
}
