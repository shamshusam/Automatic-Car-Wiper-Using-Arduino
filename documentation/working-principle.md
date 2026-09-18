# ⚙️ Working Principle

The **Automatic Car Wiper Using Arduino** works by detecting water/rain with a rain sensor and automatically controlling a servo motor connected to the wiper mechanism.

## 🔄 Overall Working

The system follows a simple:

**Sensor → Controller → Actuator**

architecture.

```text
🌧️ Rain / Water
       ↓
🌧️ Rain Sensor
       ↓
📥 Analog Signal
       ↓
🔵 Arduino Uno
       ↓
🧠 Threshold Comparison
       ↓
⚙️ Servo Motor
       ↓
🚗 Wiper Movement
