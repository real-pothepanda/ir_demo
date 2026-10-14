// gpio pins
const int OUT = 34;
const int ledPin = 13;

// variables
int Number_of_Objects = 0;
int SensorState = 0;

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  pinMode(OUT, INPUT);
}

void loop() {
  SensorState = digitalRead(OUT);
  
  if (SensorState == HIGH) {

    digitalWrite(ledPin, LOW); \
    Serial.println(Number_of_Objects);
    delay(500);
    
  } 
  else {
    
    digitalWrite(ledPin, HIGH);
    Number_of_Objects++;
    Serial.println(Number_of_Objects);
    delay(500);
  }
}