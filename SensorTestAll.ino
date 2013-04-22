#define leftCenterSensor   3
#define leftNearSensor     4
#define leftFarSensor      5
#define rightCenterSensor  2
#define rightNearSensor    1
#define rightFarSensor     0

int leftCenterReading;
int leftNearReading;
int leftFarReading;
int rightCenterReading;
int rightNearReading;
int rightFarReading;

#define led2 2
#define led3 3
#define led4 4
#define led5 5
#define led6 6
#define led7 7

void setup(){
  
  pinMode(leftCenterSensor, INPUT);
  pinMode(leftNearSensor, INPUT);
  pinMode(leftFarSensor, INPUT);
  pinMode(rightCenterSensor, INPUT);
  pinMode(rightNearSensor, INPUT);
  pinMode(rightFarSensor, INPUT);
}

void loop(){
  
 readSensors();                                                                                     
 
 if(leftCenterReading>200){ 
    digitalWrite(4, HIGH);                                                                         
  }
  else{                                                                                              
    digitalWrite(4, LOW);                                                       
  }
 if(leftFarReading>200){ 
    digitalWrite(2, HIGH);                                                                         
  }
  else{                                                                                              
    digitalWrite(2, LOW);                                                       
  }
   if(leftNearReading>200){ 
    digitalWrite(3, HIGH);                                                                         
  }
  else{                                                                                              
    digitalWrite(3, LOW);                                                       
  }
   if(rightCenterReading>200){ 
    digitalWrite(5, HIGH);                                                                         
  }
  else{                                                                                              
    digitalWrite(5, LOW);                                                       
  }
   if(rightNearReading>200){ 
    digitalWrite(6, HIGH);                                                                         
  }
  else{                                                                                              
    digitalWrite(6, LOW);                                                       
  }
   if(rightFarReading>200){ 
    digitalWrite(7, HIGH);                                                                         
  }
  else{                                                                                              
    digitalWrite(7, LOW);                                                       
  }
}

void readSensors(){
  
  leftCenterReading  = analogRead(leftCenterSensor);
  leftNearReading    = analogRead(leftNearSensor);
  leftFarReading     = analogRead(leftFarSensor);
  rightCenterReading = analogRead(rightCenterSensor);
  rightNearReading   = analogRead(rightNearSensor);
  rightFarReading    = analogRead(rightFarSensor);  
}
