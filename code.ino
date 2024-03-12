#define echoPin 8 //This defines echopin as eight pin on arduino
#define triggerPin 9 //This defines echopin as ninth pin on arduino
#define INP1 5 //This defines the fifth pin as the first input
#define INP2 6 //This defines the sixth pin as the second input
#define INP3 3 //This defines the sixth pin as the third input
#define INP4 4 //This defines the sixth pin as the fourth input

void setup(){//start of setup 
  Serial.begin(115200);//Creates a serial rate
  pinMode(echoPin, INPUT);//Sets echpin pin as an input
  pinMode(triggerPin, OUTPUT);//Sets echpin pin as an output
  pinMode(INP1, OUTPUT);//This sets the input one as an output
  pinMode(INP2, OUTPUT);//This sets the input two as an output
  pinMode(INP3, OUTPUT);//This sets the input three as an output
  pinMode(INP4, OUTPUT);//This sets the input four as an output

  digitalWrite(INP1,LOW);//This sets LOW to input one
  digitalWrite(INP2,HIGH);//This sets HIGH to input two
  digitalWrite(INP3,LOW);//This sets LOW to input three
  digitalWrite(INP4,HIGH);//This sets HIGH to input four
  
}//end of void setup

void loop() {//start of loop
  Serial.print("The distance is : ");//This prints the statement to the screen

  digitalWrite(triggerPin, HIGH);//This sets the trigger pin at pin 9 to HIGH
  delayMicroseconds(10);//10ms is passed
  digitalWrite(triggerPin, LOW);//This sets the trigger pin at pin 9 to LOW

  int distance = pulseIn(echoPin,HIGH);//This creates a integer variable and stores the PulseIn in it

distance= distance/58;//This dives distance by 58 and stores the new value in distance

Serial.print(distance,DEC);//This prints the calculated distance to the screen
Serial.println("cm");//This prints cm to the screen
delay(500);//500 ms is passed by and the loop is repeated again
}//end of loop