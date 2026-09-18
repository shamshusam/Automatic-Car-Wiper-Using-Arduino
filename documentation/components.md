# 🧩 Components Required

The following components are used in the reference implementation of the Automatic Car Wiper Using Arduino project.

## 1. 🔵 Arduino Uno

The Arduino Uno acts as the main controller of the system.

### Function
- Reads the analog output from the rain sensor
- Compares the sensor reading with a threshold value
- Controls the servo motor according to the detected condition

---

## 2. 🌧️ Rain Sensor Module

The rain sensor detects the presence of water or rain on its sensing plate.

### Function
- Detects water droplets
- Produces an analog output
- Sends the sensor reading to Arduino analog pin **A0**

---

## 3. ⚙️ SG90 Servo Motor

The servo motor is used to move the wiper mechanism.

### Function
- Receives a control signal from Arduino
- Rotates between programmed angles
- Produces the back-and-forth movement required for wiping

The servo signal is connected to Arduino **D9**.

---

## 4. 🔌 Breadboard

A solderless breadboard is used for prototyping the circuit.

### Function
- Provides a convenient platform for connections
- Allows components to be connected without soldering
- Makes circuit testing and modification easier

---

## 5. 🪢 Jumper Wires

Jumper wires are used to electrically connect the Arduino, rain sensor, and servo motor.

### Function
- Carry power and ground connections
- Connect the sensor output to Arduino
- Connect the servo control signal to Arduino

---

## 6. 🚗 Wiper Mechanism

The wiper mechanism is mechanically connected to the servo motor.

### Function
- Converts servo rotation into wiper movement
- Moves the wiper arm across the windshield surface

---

## 📋 Component Summary

| Component | Quantity | Purpose |
|---|---:|---|
| Arduino Uno | 1 | Main controller |
| Rain Sensor Module | 1 | Rain detection |
| SG90 Servo Motor | 1 | Wiper movement |
| Breadboard | 1 | Circuit prototyping |
| Jumper Wires | As required | Electrical connections |
| Wiper Arm/Mechanism | 1 | Mechanical wiping |

> **Note:** This is a reference component list for the documented implementation. Actual hardware specifications may vary.
