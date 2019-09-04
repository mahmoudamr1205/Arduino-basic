int yellow = 1;
int green = 2;
int red = 0 ;
void setup() {
  
pinMode(yellow,OUTPUT);
pinMode(green,OUTPUT);
pinMode(red,OUTPUT);

}

void loop() {
  
  f_yellow();
delay(1500);

  f_red();
delay(3000);
  f_green();
delay(3000);

}


void f_yellow(){
  
digitalWrite(yellow,HIGH);
digitalWrite(red,LOW);
digitalWrite(green,LOW);
  }

void f_red(){
digitalWrite(yellow,LOW);
digitalWrite(red,HIGH);
digitalWrite(green,LOW);
  }

void f_green(){
  digitalWrite(yellow,LOW);
  digitalWrite(red,LOW);
  digitalWrite(green,HIGH);
  }
