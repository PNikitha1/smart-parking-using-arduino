
// IR sensor pins
const int IRsensor1 = 2;
const int IRsensor2 = 3;
// const int IRsensor3 = 4;
// const int IRsensor4 = 5;

// Variables to store sensor readings
int sensorState1 = 0;
int sensorState2 = 0;
// int sensorState3 = 0;
// int sensorState4 = 0;

void setup() {
  pinMode(IRsensor1, INPUT);
  pinMode(IRsensor2, INPUT);
  // pinMode(IRsensor3, INPUT);
  // pinMode(IRsensor4, INPUT);
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the state of each IR sensor
  sensorState1 = digitalRead(IRsensor1);
  sensorState2 = digitalRead(IRsensor2);
  // sensorState3 = digitalRead(IRsensor3);
  // sensorState4 = digitalRead(IRsensor4);

  // Check the status of each parking spot
  Serial.print("Slot 1: ");
  if (sensorState1 == LOW) {
    Serial.println("Full");
  } else {
    Serial.println("Available");
  }

  Serial.print("Slot 2: ");
  if (sensorState2 == LOW) {
    Serial.println("Full");
  } else {
    Serial.println("Available");
  }

  // Serial.print("Slot 3: ");
  // if (sensorState3 == LOW) {
  //   Serial.println("Full");
  // } else {
  //   Serial.println("Available");
  // }

  // Serial.print("Slot 4: ");
  // if (sensorState4 == LOW) {
  //   Serial.println("Full");
  // } else {
  //   Serial.println("Available");
  // }

  // Check if all parking spots are full
  if (sensorState1 == LOW && sensorState2 == LOW ) {
    Serial.println("Parking Full");
  }
  // Check if any parking spot is available
  else {
    Serial.println("Parking Available");

  }

  delay(1000); // Wait for 1 second before the next sensor check
}
