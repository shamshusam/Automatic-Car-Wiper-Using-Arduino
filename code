#include <Servo.h>

// -----------------------------
// Pin Configuration
// -----------------------------
const int rainSensorPin = A0;
const int servoPin = 9;

// -----------------------------
// Rain Detection Threshold
// -----------------------------
const int rainThreshold = 500;

// -----------------------------
// Servo Configuration
// -----------------------------
Servo wiperServo;

const int startAngle = 0;
const int endAngle = 120;

// -----------------------------
// Setup
// -----------------------------
void setup() {

  Serial.begin(9600);

  // Attach servo to Arduino pin D9
  wiperServo.attach(servoPin);

  // Set wiper to starting position
  wiperServo.write(startAngle);

  delay(500);

  Serial.println("Automatic Car Wiper System");
  Serial.println("--------------------------");
  Serial.println("System Started");
}

// -----------------------------
// Main Program
// -----------------------------
void loop() {

  // Read rain sensor
  int rainValue = analogRead(rainSensorPin);

  // Display sensor value
  Serial.print("Rain Sensor Value: ");
  Serial.println(rainValue);

  // Check whether rain is detected
  if (rainValue < rainThreshold) {

    Serial.println("Rain Detected - Wiper ON");

    // Move wiper forward
    for (int angle = startAngle; angle <= endAngle; angle++) {

      wiperServo.write(angle);
      delay(10);
    }

    // Move wiper backward
    for (int angle = endAngle; angle >= startAngle; angle--) {

      wiperServo.write(angle);
      delay(10);
    }
  }

  else {

    Serial.println("No Rain - Wiper OFF");

    // Keep wiper at starting position
    wiperServo.write(startAngle);
  }

  // Small delay before next sensor reading
  delay(100);
}
