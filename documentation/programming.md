# 💻 Programming Documentation

This document explains the complete programming logic used in the **Automatic Car Wiper Using Arduino** reference implementation.

The program is written in **Arduino C/C++** and uses a rain sensor to detect water and an SG90 servo motor to operate the wiper mechanism automatically.

---

# 📌 1. Programming Objective

The main objective of the program is to:

1. Read the rain sensor continuously.
2. Determine whether rain is detected.
3. Activate the wiper when rain is detected.
4. Move the servo from the starting angle to the end angle.
5. Return the servo to the starting position.
6. Keep the wiper OFF when no rain is detected.
7. Display sensor readings and system status through the Serial Monitor.

The basic control logic is:

```text
Rain Sensor
     ↓
Arduino Uno
     ↓
Rain Detection
     ↓
Servo Motor
     ↓
Wiper Movement
