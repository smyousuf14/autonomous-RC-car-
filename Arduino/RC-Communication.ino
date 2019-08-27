

const int rf= 2;
const int rb= 3;
const int lf= 4;
const int lb= 5;
int incomingByte;



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
      Serial.println("ON");
      if(Serial.available()>0)
     
      {
        incomingByte=Serial.read();
        if(incomingByte==1)
        {
        digitalWrite(rf, LOW); // Complete stop for 2 Seconds
      digitalWrite(rb, LOW);
       digitalWrite(lf, LOW);
        digitalWrite(lb, LOW);
        Serial.println("OFF");
        delay(2000);
        }
        Serial.flush();
        
      }

