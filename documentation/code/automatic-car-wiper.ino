#include <Servo.h>

Servo wiperServo;

const int rainSensorPin = A0;
const int servoPin = 9;

int rainValue;
int rainThreshold = 500;

void setup() {
  Serial.begin(9600);

  wiperServo.attach(servoPin);
  wiperServo.write(0);
}

void loop() {

  rainValue = analogRead(rainSensorPin);

  Serial.print("Rain Sensor Value: ");
  Serial.println(rainValue);

  if (rainValue < rainThreshold) {

    // Rain detected
    for (int angle = 0; angle <= 120; angle++) {
      wiperServo.write(angle);
      delay(10);
    }

    for (int angle = 120; angle >= 0; angle--) {
      wiperServo.write(angle);
      delay(10);
    }

  } else {

    // No rain
    wiperServo.write(0);
  }

  delay(100);
}
