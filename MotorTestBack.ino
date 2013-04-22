#define leftMotor1  7
#define leftMotor2  6

#define rightMotor1 5
#define rightMotor2 8

#define led 13

void setup()
{
  
    pinMode(leftMotor1, OUTPUT);
    pinMode(leftMotor2, OUTPUT);
    pinMode(rightMotor1, OUTPUT);
    pinMode(rightMotor2, OUTPUT);
    pinMode(led, OUTPUT);
}

void loop()
{
    
    digitalWrite(leftMotor1, LOW);
    digitalWrite(leftMotor2, HIGH);
    digitalWrite(rightMotor1, HIGH);
    digitalWrite(rightMotor2, LOW);
    digitalWrite(13, LOW);    // set the LED off
    delay(2);
    digitalWrite(leftMotor1, LOW);
    digitalWrite(leftMotor2, LOW);
    digitalWrite(rightMotor1, LOW);
    digitalWrite(rightMotor2, LOW);
    digitalWrite(13, HIGH);   // set the LED on
    delay(1);
    
    
    /*digitalWrite(leftMotor2, HIGH);
    digitalWrite(leftMotor1, LOW);
    digitalWrite(rightMotor2, HIGH);
    digitalWrite(rightMotor1, LOW);
    digitalWrite(13, HIGH);   // set the LED on
    delay(3000);              // wait for a second
    
    digitalWrite(leftMotor2, LOW);
    digitalWrite(leftMotor1, HIGH);
    digitalWrite(rightMotor2, LOW);
    digitalWrite(rightMotor1, HIGH);
    digitalWrite(13, LOW);    // set the LED off
    delay(3000);              // wait for a second
    */
}
  
