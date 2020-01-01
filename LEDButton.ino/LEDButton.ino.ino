

/*
 * Simple program that takes input from button on breadboard & turns an LED on and off
 */

int buttonPin = 2; // pushbutton connected to breadboard pin 1
int buttonVal = 0; // variable to store digitalRead() value
int lightPin = 13;

void setup() {
  // function is called when sketch starts.
  // used to initialize variables, pin modes, call libraries
  // called when arduino board is booted up or reset
  
  //pinMode(pin, mode); // pin: # of pin whose mode you wish to set
                        // modes: INPUT, OUTPUT,



  pinMode(buttonPin, INPUT);
  pinMode(lightPin, OUTPUT);
}

void loop() {
  // used to actively control arduino board
  // loops consecutively allowing program to change and respond

  buttonVal = digitalRead(buttonPin); // reads input of button, returns either HIGH (1/on)or LOW(0/off
   digitalWrite(lightPin, buttonVal);
  
}
