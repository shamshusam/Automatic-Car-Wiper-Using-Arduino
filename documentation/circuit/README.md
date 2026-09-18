# 🔌 Automatic Car Wiper — Circuit Diagram

## 📌 Overview

This directory contains the circuit diagram for the **Automatic Car Wiper Using Arduino** project.

The circuit connects:

- 🔵 Arduino Uno
- 🌧️ Rain Sensor Module
- ⚙️ SG90 Servo Motor
- 🔌 Power and Ground connections

---

## 🖼️ Circuit Diagram

<p align="center">

<img src="circuit-diagram.png" width="850" alt="Automatic Car Wiper Circuit Diagram">

</p>

---

## 🔗 Pin Connections

### 🌧️ Rain Sensor → Arduino Uno

| Rain Sensor Pin | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| AO | A0 |

### ⚙️ SG90 Servo → Arduino Uno

| Servo Pin | Arduino Uno |
|---|---|
| VCC | 5V |
| GND | GND |
| Signal | D9 |

---

## 🔄 Circuit Working

```text
🌧️ Rain
   ↓
Rain Sensor
   ↓
Analog Signal
   ↓
Arduino Uno
   ↓
Decision
   ↓
Servo Motor
   ↓
🚗 Wiper Movement
