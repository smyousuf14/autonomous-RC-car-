

const int rf= 2;
const int rb= 3;
const int lf= 4;
const int lb= 5;
int incomingByte = 0;
int counter = 0;


void setup() {
 pinMode(lf, OUTPUT);
pinMode(lb, OUTPUT);
pinMode(rf, OUTPUT);
pinMode(rb, OUTPUT);
Serial.begin(9600);
}

void loop() {
  
    digitalWrite(rf, LOW); //Moving Forward
   digitalWrite(rb, HIGH);
    digitalWrite(lf, HIGH);
      digitalWrite(lb, LOW);
      Serial.println("ON"); // Send message to the raspberry pi that the car is moving
      if(Serial.available()>0)
     
      {
        incomingByte=Serial.parseInt();
        if(incomingByte == 1)
        {
        digitalWrite(rf, LOW); // Complete stop for 2 Seconds
        digitalWrite(rb, LOW);
        digitalWrite(lf, LOW);
        digitalWrite(lb, LOW);
        Serial.println("OFF");
        delay(2000);
         
        // Then move ahead out of the range of the stop sign.
        for(counter = 0; counter < 10; counter++)
        {
             // Move forward
             digitalWrite(rf, LOW); //Moving Forward
             digitalWrite(rb, HIGH);
             digitalWrite(lf, HIGH);
             digitalWrite(lb, LOW);
             Serial.println("ON"); 
            
        }
        }
        Serial.flush();
        
      }

