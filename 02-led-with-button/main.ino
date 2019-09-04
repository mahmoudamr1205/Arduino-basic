int button = 7;

int led = 13 ;
void setup() {
  
pinMode(button,INPUT);
pinMode(led,OUTPUT);

}

void loop() {
  
 if( digitalRead(button) ){
  
  digitalWrite(led,1);
  
  }else{  digitalWrite(led,0);
  }

}

