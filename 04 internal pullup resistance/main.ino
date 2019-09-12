int button = 7;
int led = 13 ;

void setup() {

pinMode(button,INPUT);
pinMode(led,OUTPUT);
digitalWrite(button,HIGH); //to activited internal pullup resistor arduino

}

void loop() {
  
 if( digitalRead(button)==0){
  
  digitalWrite(led,1);
  
  }else{  
  digitalWrite(led,0);
  }

}
