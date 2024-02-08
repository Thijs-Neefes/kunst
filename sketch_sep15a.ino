// define constants
const int RaiseButton = 13; // pin 13
const int LowerButton = 11; // pin 11
const int ClockwisePin = 4; // pin 4
const int AntiClockPin = 2; //pin 2
const int enablePin = 7;

// setup
void setup() {
pinMode(RaiseButton, INPUT);
pinMode(LowerButton, INPUT)
pinMode(ClockwisePin, OUTPUT);
pinMode(AntiClockPin, OUTPUT); 
pinMode(enablePin, OUTPUT);
}

// loop
void loop() {
if (RaiseButton == HIGH) { //,
digitalWrite(enablePin, HIGH); //
digitalWrite(ClockwisePin, HIGH); //naar rechts
digitalWrite(AntiClockPin, LOW);
}

else if (LowerButton == HIGH) { //
digitalWrite(enablePin, HIGH); //
digitalWrite(ClockwisePin, LOW); //naar links
digitalWrite(AntiClockPin, HIGH);
}
}
//end of loop
