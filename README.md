# 🚗 Automatic Car Wiper Using Arduino

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&height=180&section=header&text=AUTOMATIC%20CAR%20WIPER&fontSize=38&fontColor=FFFFFF&fontAlignY=35&animation=fadeIn&color=0F172A" width="100%" alt="Automatic Car Wiper Header"/>
</p>

<p align="center">
  <img src="https://readme-typing-svg.herokuapp.com?font=Montserrat&weight=600&size=24&duration=3000&pause=800&color=00E676&center=true&vCenter=true&width=800&lines=Arduino+Based+Automatic+Wiper;Rain+Sensor+Based+Detection;Automatic+Wiper+Control;Embedded+Systems+Project;Sensor+%7C+Controller+%7C+Actuator;Learn+%7C+Build+%7C+Test" alt="Typing SVG"/>
</p>

<p align="center">

<img src="https://img.shields.io/badge/Arduino-00979D?style=for-the-badge&logo=arduino&logoColor=white"/>
<img src="https://img.shields.io/badge/C%2FC%2B%2B-00599C?style=for-the-badge&logo=cplusplus&logoColor=white"/>
<img src="https://img.shields.io/badge/Embedded%20Systems-0F172A?style=for-the-badge&logo=arduino&logoColor=white"/>
<img src="https://img.shields.io/badge/IoT-16A085?style=for-the-badge&logo=internetofthings&logoColor=white"/>
<img src="https://img.shields.io/badge/Automation-2E86C1?style=for-the-badge&logo=probot&logoColor=white"/>

</p>

---

# 📌 Project Overview

The **Automatic Car Wiper Using Arduino** is an embedded-system prototype designed to demonstrate automatic wiper control based on the detection of rain or water.

In conventional manual operation, the user needs to activate the windshield wiper when rain begins. In this prototype, a **rain sensor** is used to detect water automatically.

The sensor provides an electrical signal to an **Arduino Uno**. The Arduino reads this signal, compares it with a predefined threshold, and determines whether rain has been detected.

When rain is detected, the Arduino activates an **SG90 servo motor**. The servo moves the connected wiper mechanism through a predefined angular range.

When the rain condition is no longer detected, the Arduino stops the wiper movement and returns the servo to its starting position.

---

# 🎯 Project Idea

The basic idea of the project is:

```text
             🌧️ RAIN
                │
                ▼
        ┌───────────────┐
        │  Rain Sensor  │
        └───────┬───────┘
                │
                │ Sensor Signal
                ▼
        ┌───────────────┐
        │  Arduino Uno  │
        │               │
        │ Read Sensor   │
        │ Compare Value │
        │ Make Decision │
        └───────┬───────┘
                │
                │ Control Signal
                ▼
        ┌───────────────┐
        │  SG90 Servo   │
        └───────┬───────┘
                │
                ▼
          🚗 WIPER ARM
