int redPin = 11;
int greenPin = 10;
int bluePin = 9;
int redAd = 0;
int greenAd = 1;
int blueAd = 2;


void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
 int redVal = analogRead(redAd)*0.25;
 int greenVal = analogRead(greenAd)*0.25;
 int blueVal = analogRead(blueAd)*0.25;
 Serial.println(redVal);
 Serial.println(greenVal);
 Serial.println(blueVal);
 
 setColor(redVal, greenVal, blueVal);
 delay(500);
}

void setColor(int red, int green, int blue)
{
  #ifdef COMMON_ANODE
    red = 255-red;
    green = 255-green;
    blue = 255-blue;
   #endif
   analogWrite(redPin, red);
   analogWrite(greenPin, green);
   analogWrite(bluePin, blue);
}
