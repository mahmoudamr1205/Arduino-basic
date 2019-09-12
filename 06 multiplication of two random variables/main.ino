#define var_1 A0
#define var_2 A1
#define led 5
float x ,y ;
void setup() {
  
pinMode(var_1,INPUT);
pinMode(var_2,INPUT);

pinMode(led,OUTPUT);


}

void loop() {
  
x = analogRead(var_2) * analogRead(var_1);

y = map(x,0,1046529,0,255);

analogWrite(led,y);

}
