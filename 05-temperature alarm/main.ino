

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
 temp = (temp/1024.0)*5.0;    //conversion to volts
 temp = temp *100.0 ;         //conversion to temp Celsius
 
  
  Serial.print("temperature= "); 
  Serial.print(temp);
  Serial.println(" C "); 
  if (temp>= 30){
  digitalWrite(buzzer, HIGH);   // turn the LED on (HIGH is the voltage level)
  }
  else{

  digitalWrite(buzzer, LOW);    // turn the LED off by making the voltage LOW
  } 
}
