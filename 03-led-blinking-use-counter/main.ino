int led = 13 ;
void setup() {

pinMode(led,OUTPUT);

}

void loop() {
  int counter =0 ;
  
while(counter<=4){
  digitalWrite(led,1);
  delay(1000);
  
digitalWrite(led,0);
  
  delay(500);
  counter++;
}
delay(5000);
}
