/*
  AnalogReadSerial

  Reads an analog input on pin 0, prints the result to the Serial Monitor.
  Graphical representation is available using Serial Plotter (Tools > Serial Plotter menu).
  Attach the center pin of a potentiometer to pin A0, and the outside pins to +5V and ground.

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/AnalogReadSerial
*/
int IRpin = A0;
// the setup routine runs once when you press reset:
void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
}

// the loop routine runs over and over again forever:
void loop() {
  float volts = analogRead(IRpin) * 0.0048828125; // value from sensor * (5/1024) - if running 3.3.volts then change 5 to 3.3
  float distance = 65 * pow(volts, -1.10);        // worked out from graph 65 = theretical distance / (1/Volts)S - luckylarry.co.uk

  // print out the value you read:
  Serial.println(distance);// print the distance
  delay(100);        // delay in between reads for stability
}
