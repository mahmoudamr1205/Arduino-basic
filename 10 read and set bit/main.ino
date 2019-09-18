
#define bit_1 9
#define bit_2 8
#define bit_3 10
#define bit_4 11
int x ;
int d,a;
void setup()
{
  Serial.begin(9600);
  

    pinMode(bit_1,INPUT);
     pinMode(bit_2,INPUT);
     pinMode(bit_3,INPUT);
     pinMode(bit_4,INPUT);

    digitalWrite(bit_1,HIGH);
     digitalWrite(bit_2,HIGH);
      digitalWrite(bit_3,HIGH);
     digitalWrite(bit_4,HIGH);
}

void loop()
{
  bitWrite(d, 0, digitalRead(bit_1));
  bitWrite(d, 1, digitalRead(bit_2));
  bitWrite(d, 2, digitalRead(bit_3));
  bitWrite(d, 3, digitalRead(bit_4));

   
  
 Serial.println(d);

 delay(500);


}
