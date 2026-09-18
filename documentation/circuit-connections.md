# 🔌 Circuit Connections

This section describes the connections used in the reference implementation of the Automatic Car Wiper Using Arduino.

## 🔵 Arduino Uno Connections

| Arduino Pin | Connected To | Purpose |
|---|---|---|
| 5V | Rain Sensor VCC | Sensor power |
| GND | Rain Sensor GND | Common ground |
| A0 | Rain Sensor AO | Analog rain reading |
| 5V | Servo VCC | Servo power |
| GND | Servo GND | Common ground |
| D9 | Servo Signal | Servo control |

---

## 🌧️ Rain Sensor Connections

```text
Rain Sensor
    │
    ├── VCC ──→ Arduino 5V
    ├── GND ──→ Arduino GND
    └── AO  ──→ Arduino A0
