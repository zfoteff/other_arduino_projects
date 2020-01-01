int tempPin = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  int read = analogRead(sensorPin);
  float voltage = reading*0.5;
  voltage /= 1024.0;
  //print voltage
  Serial.print(voltage)
  Serial.println(" volts");

  float tempuratureC = (voltage - 0.5)*100; // 10mV per degree centigrade
  Serial.print(tempuratureC);
  Serial.println(" degrees C");

  float tempuratureF = (tempuratureC*9.0/5.0)+32.0;
  Serial.print(tempuratureF);
  Serial.println(" degrees F");

  delay(1000);
  
}
