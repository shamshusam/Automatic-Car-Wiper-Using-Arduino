# 🚗 Automatic Car Wiper Using Arduino

## 📌 Project Overview

The Automatic Car Wiper is an Arduino-based automation project designed to detect rain or water and automatically operate a windshield wiper.

The system uses a **rain sensor** to detect water droplets. The sensor sends an analog signal to the **Arduino Uno**, which processes the sensor value and controls a **servo motor** connected to the wiper mechanism.

## 🎯 Objectives

- 🌧️ Detect rain or water automatically
- 🤖 Control the wiper without manual operation
- ⚡ Process the sensor signal using Arduino
- 🔄 Automatically move the wiper when rain is detected
- 🛠️ Demonstrate a simple embedded-system automation application

## 🧩 Main Components

| Component | Purpose |
|---|---|
| Arduino Uno | Main controller |
| Rain Sensor | Detects water/rain |
| SG90 Servo Motor | Moves the wiper |
| Breadboard | Circuit prototyping |
| Jumper Wires | Electrical connections |
| Wiper Arm | Mechanical wiping action |

## ⚙️ Basic Working

The working sequence is:

**Rain/Water → Rain Sensor → Arduino Uno → Servo Motor → Wiper Movement**

When the rain sensor detects water, its analog output changes. The Arduino reads this value and compares it with a predefined threshold.

If rain is detected, the Arduino commands the servo motor to move the wiper back and forth. When rain is not detected, the servo returns to its initial position.

## 🔧 Reference Design

This GitHub project uses a **reference implementation** based on Arduino Uno, an analog rain sensor, and an SG90 servo motor.

The exact hardware configuration may vary depending on the components used.

## 📚 Project Type

**Embedded Systems | Arduino | Sensors | Automation | IoT-related Project**

## 👨‍💻 Application

The concept can be used as a basic demonstration of automatic windshield-wiper control and can be extended into more advanced automotive automation systems.
