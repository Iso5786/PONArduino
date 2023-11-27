void setup() {
  // initialize serial communication at 9600 bits per second:
  Serial.begin(9600);
  pinMode(9,OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // print out the value you read:
  Serial.println(sensorValue);
  if(sensorValue>500)
  {
    digitalWrite(9,HIGH);
  }
  else
  {
    digitalWrite(9,LOW);
  }
  delay(10);        // delay in between reads for stability
}
