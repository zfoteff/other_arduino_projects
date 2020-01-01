#define RED_LED 6
#define BLUE_LED 5
#define GREEN_LED 9

int brightness = 256;
int gBright = 0;
int rBright = 0;
int bBright = 0;

void TurnOn()
{
  analogWrite(RED_LED, rBright);
  
  for (int i=0;i<31; i++)
  {
    analogWrite(BLUE_LED, bBright);
    bBright += 1;
    delay(5);
  }  

  for (int i=0;i<256; i++)
  {
    analogWrite(GREEN_LED, gBright);
    gBright +=1;
    delay(5);
  }
}

void setup()
{
  // put your setup code here, to run once:
  pinMode(GREEN_LED, OUTPUT);
  pinMode(RED_LED, OUTPUT);
  pinMode(BLUE_LED, OUTPUT);

  TurnOn();
}

void shiftYellow()
{
  for (int i = 0; i < 256; ++i)
  {
    analogWrite(RED_LED, rBright);
    rBright += 1;
    delay(25);
  }
}

void shiftGreen()
{
  for (int i = 255; i >= 0; --i)
  {
    analogWrite(RED_LED, rBright);
    rBright -= 1;
    delay(25);
  }
}

void loop()
{
  // put your main code here, to run repeatedly:
  shiftYellow();
  delay(50);
  shiftGreen();
  delay(50);
}
