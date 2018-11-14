char serialData;
int pinLed_1 = 13;
int pinLed_2 = 12;
int pinLed_3 = 11;


void setup(){
  pinMode(pinLed_1,OUTPUT);
  pinMode(pinLed_2,OUTPUT);
  pinMode(pinLed_3,OUTPUT);
  Serial.begin(9600);
}

void loop(){
if(Serial.available()>0){
  serialData = Serial.read();
  Serial.println(serialData);

  if(serialData == '0'){
    digitalWrite(pinLed_1, HIGH);
    } else {
      if(serialData == '1'){
        digitalWrite(pinLed_1,LOW);
        } else {
          if(serialData == '2'){
            digitalWrite(pinLed_2,HIGH);            
            } else {
              if(serialData == '3'){ 
                digitalWrite(pinLed_2,LOW);
                } else {
                  if(serialData == '4'){
                    digitalWrite(pinLed_3,HIGH);
                    } else {
                      if(serialData == '5'){
                        digitalWrite(pinLed_3,LOW);
                        } else {
                          if(serialData == '6'){
                            digitalWrite(pinLed_1,HIGH);
                            digitalWrite(pinLed_2,HIGH);
                            digitalWrite(pinLed_3,HIGH);
                            } else {
                              if(serialData == '7'){
                                digitalWrite(pinLed_1,LOW);
                                digitalWrite(pinLed_2,LOW);
                                digitalWrite(pinLed_3,LOW);
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
