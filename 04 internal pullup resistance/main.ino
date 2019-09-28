int button = 7;
int led = 13 ;

void setup() {

pinMode(button,INPUT);
pinMode(led,OUTPUT);
digitalWrite(button,HIGH); //to activited internal pullup resistor arduino

}

void loop() {
  /*
  output  0
  x=!digitalRead(6);
 y=!(digitalRead(7));
 
 output 1
  x=digitalRead(6);
 y=(digitalRead(7));
 
 
 */
  
 if( digitalRead(button)==0){
  
  digitalWrite(led,1);
  
  }else{  
  digitalWrite(led,0);
  }

}
