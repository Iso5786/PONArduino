void setup() {
  // TODO: initialize serial communication at 9600 bits per second:

  // TODO: set PIN 9 to OUTPUT
  pinMode(...);
}

// the loop routine runs over and over again forever:
void loop() {
  // TODO: read the input on analog pin 0:
  int sensorValue = ...
  // print out the value you read:
  Serial.println(sensorValue);
  // TODO: If sensor value greater than 500, write HIGH to digital 9
  if(sensorValue>500)
  {
    digitalWrite(...);
  }
  // TODO: otherwise set to LOW
  else
  {
    digitalWrite(...);
  }
  // TODO: delay 10 ms in between reads for stability
  ...
}
