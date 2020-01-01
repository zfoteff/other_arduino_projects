int buttonPin = 13;
int buttonVal;
int lightStringPin1 = 2;
int lightStringPin2 = 3;
int lightStringPin3 = 4;
int lightStringPin4 = 5;
int lightStringPin5 = 6;
int lightStringPin6 = 7;


void setup() {
  // put your setup code here, to run once:
  pinMode(buttonPin, INPUT);
  pinMode(lightStringPin1, OUTPUT);
  pinMode(lightStringPin2, OUTPUT);
  pinMode(lightStringPin3, OUTPUT);
  pinMode(lightStringPin4, OUTPUT);
  pinMode(lightStringPin5, OUTPUT);
  pinMode(lightStringPin6, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  buttonVal = digitalRead(buttonPin);
  if(buttonVal == LOW){
    shine();
  }
}

void shine(){
  //gradually turns on lights at push of a button
  digitalWrite(lightStringPin1, HIGH);
  delay(500);
  digitalWrite(lightStringPin2, HIGH);
  delay(500);
  digitalWrite(lightStringPin3, HIGH);
  delay(500);
  digitalWrite(lightStringPin4, HIGH);
  delay(500);
  digitalWrite(lightStringPin5, HIGH);
  delay(500);
  digitalWrite(lightStringPin6, HIGH);

  //gradually turns them back off
  digitalWrite(lightStringPin6, LOW);
  delay(500);
  digitalWrite(lightStringPin5, LOW);
  delay(500);
  digitalWrite(lightStringPin4, LOW);
  delay(500);
  digitalWrite(lightStringPin3, LOW);
  delay(500);
  digitalWrite(lightStringPin2, LOW);
  delay(500);
  digitalWrite(lightStringPin1, LOW);
  delay(500);
}
