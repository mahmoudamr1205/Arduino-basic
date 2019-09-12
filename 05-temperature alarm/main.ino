

#define buzzer 3

#define temp_pin A5
float temp ;

void setup() {
   Serial.begin(9600);  
   pinMode(buzzer, OUTPUT);
   pinMode(temp_pin, INPUT);
}


void loop() {
 
 temp  = analogRead(temp_pin);
 temp = (temp/1024.0)*5.0;    //conversion to volts         o/p is mille volt 
 temp = temp *100.0 ;         //conversion to temp Celsius
   
   /*
   why *100 ?
   output >>> mv
   10 mv each on dgree 
   */
 
  
  Serial.print("temperature= "); 
  Serial.print(temp);
  Serial.println(" C "); 
  if (temp>= 30){

  tone(buzzer, 261 ,500);

  tone(buzzer, 392,100);

    /*Tone needs 2 arguments, but can take three

  tone(pin, frequency, duration)
    1) Pin#
    2) Frequency - this is in hertz (cycles per second) which determines the pitch of the noise made
    3) Duration - how long teh tone plays
  */
  }
  else{

  noTone(buzzer);


  }
}
