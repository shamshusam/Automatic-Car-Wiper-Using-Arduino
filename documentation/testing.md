# 🧪 Testing

## 🎯 Testing Objective

The objective of testing is to verify that the Automatic Car Wiper system correctly detects rain and operates the wiper automatically.

The following functions are tested:

- Arduino power-up
- Rain sensor operation
- Rain detection
- Servo operation
- Wiper movement
- Return to OFF state

---

## 🔬 Test Cases

### Test 1 — Power ON

**Condition:** Arduino is powered ON.

**Expected Result:**

```text
Arduino starts
      ↓
Servo initializes
      ↓
Wiper moves to starting position
      ↓
System Started
