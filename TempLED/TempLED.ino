/*
 * LED works in conjunction with temputature sensor to change color based on surrounding head 
 peepee*/

// tempPin = A0
int redPin = 11;
int greenPin = 10;
int bluePin = 9; 
double tempValue = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
  pinMode(A0, INPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  double reading = analogRead(A0) * 5.0;
  tempValue = (reading/ 1024);

  changeLED(tempValue);
}

void changeLED(double value){
   // cold temp == blue light
  if(value >= 0.0 && value <= 2){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }

  //mid temp == green light
  if(value >= 2.1 && value <= 4){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, HIGH);
    digitalWrite(bluePin, LOW);
  }

  //high temp = red light
  if(value >= 4.1 && value <= 5){
    digitalWrite(redPin, LOW);
    digitalWrite(greenPin, LOW);
    digitalWrite(bluePin, HIGH);
  }
}
