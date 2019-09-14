char serial ;


#define EnA  10        //speed A
#define EnB  11          //speed B
#define In1  9  //A      //motorA_dr1  red
#define In2  8  //A       //motorA_dr2   white
#define In3  12            // red
#define In4  13              //whit

void setup() {

  pinMode(EnA, OUTPUT);
  pinMode(EnB, OUTPUT);
  pinMode(In1, OUTPUT);
  pinMode(In2, OUTPUT);
  pinMode(In3, OUTPUT);
  pinMode(In4, OUTPUT);
  
Serial.begin(9600);
 
}
 
void loop() {
if(Serial.available()){
  serial = Serial.read();
  //Serial.println(serial);

  
}
 
if(serial == 'F'){            //move forward(all motors rotate in forward direction)
   moveForward(255 );
}
 
else if(serial == 'B'){      //move reverse (all motors rotate in reverse direction)
  moveBack(255);
}
 
else if(serial == 'L'){      //turn right (left side motors rotate in forward direction, right side motors doesn't rotate)
 turnLEFT_90();
}
 
else if(serial == 'R'){      //turn left (right side motors rotate in forward direction, left side motors doesn't rotate)
  turnRIGHT_90();
}

 
else if(serial == 'S'){      //STOP (all motors stop)
  moveStop();
}

}




//*******************************************************



void turnLEFT_90(){
    digitalWrite(In1, HIGH);
    digitalWrite(In2, LOW);
    digitalWrite(In3, HIGH);
    digitalWrite(In4, LOW);
    
    analogWrite(EnA, 255); //the speed
    analogWrite(EnB, 255); //the speed  
      
      
      
      delay(150);
}

 void turnRIGHT_90(){
    digitalWrite(In1, LOW);
    digitalWrite(In2, HIGH);
    digitalWrite(In3, LOW);
    digitalWrite(In4, HIGH);
    
    analogWrite(EnA, 255); //the speed
    analogWrite(EnB, 255); //the speed  
      
      
      
      delay(150);
}





void moveStop(){  //stop motors     //////*******done**********
  digitalWrite(In1, LOW);
  digitalWrite(In2, LOW);  
  digitalWrite(In3, LOW);
  digitalWrite(In4, LOW);
}

void moveForward(int l ){         //////*******done**********
  int r ;
  r = l - 26.5;
                    // turn on motor A
    digitalWrite(In1, LOW);
     digitalWrite(In2, HIGH);         
      analogWrite(EnA, l);  
                      // turn on motor B
       digitalWrite(In3, HIGH);
       digitalWrite(In4, LOW);       
      analogWrite(EnB, r);
      
}



void moveBack(int l ){         //////*******done**********
  int r ;
  r = l - 26.5;
                    // turn on motor A
    digitalWrite(In1, HIGH);
     digitalWrite(In2, LOW);         
      analogWrite(EnA, l);  
                      // turn on motor B
       digitalWrite(In3, LOW);
       digitalWrite(In4, HIGH);       
      analogWrite(EnB, r);
      
}
