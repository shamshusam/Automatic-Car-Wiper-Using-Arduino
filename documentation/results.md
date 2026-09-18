## 📊 Results & Performance

The Automatic Car Wiper Using Arduino reference implementation demonstrates the complete integration of a **rain sensing system, microcontroller, and servo-based wiper mechanism**.

The system follows a simple but effective sensor-controller-actuator architecture:

```text
                  🌧️ RAIN / WATER
                         │
                         ▼
                ┌─────────────────┐
                │  RAIN SENSOR    │
                │                 │
                │ Detects Water   │
                └────────┬────────┘
                         │
                    Analog Signal
                         │
                         ▼
                ┌─────────────────┐
                │   ARDUINO UNO   │
                │                 │
                │ Reads Sensor    │
                │ Compares Value  │
                │ Controls Servo  │
                └────────┬────────┘
                         │
                    Control Signal
                         │
                         ▼
                ┌─────────────────┐
                │   SG90 SERVO    │
                │                 │
                │ Wiper Actuator  │
                └────────┬────────┘
                         │
                         ▼
                    🚗 WIPER ARM
