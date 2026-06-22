# 🤖 DRAGO A Bluetooth-Controlled Sumo Robot

A powerful **Arduino-based Sumo Robot** designed for remote operation using Bluetooth communication. The robot receives wireless commands from a smartphone or Bluetooth controller and performs precise movements for competitive robotics and autonomous combat applications.

The system incorporates a built-in **command timeout safety mechanism**, ensuring the robot automatically stops when communication is interrupted, providing reliable and secure operation.

---

## ✨ Features

### 📡 Wireless Bluetooth Control

* Real-time command transmission via Bluetooth.
* Seamless communication with smartphone applications.
* Responsive directional control.

### 🚗 Four-Directional Movement

* Forward motion.
* Reverse movement.
* Left turning.
* Right turning.
* Instant stop functionality.

### 🛡 Safety Mechanism

* Automatic stop when communication is lost.
* Prevents uncontrolled movement.
* Improves operational reliability and safety.

### ⚡ Simple and Efficient Design

* Lightweight control logic.
* Fast response time.
* Suitable for robotics competitions and educational projects.

---

## 🛠 Hardware Components

| Component                      |    Quantity |
| ------------------------------ | ----------: |
| Arduino Uno/Nano               |           1 |
| L298N Motor Driver Module      |           1 |
| DC Motors                      |           2 |
| Bluetooth Module (HC-05/HC-06) |           1 |
| Robot Chassis                  |           1 |
| Wheels                         |           2 |
| Caster Wheel                   |           1 |
| Battery Pack                   |           1 |
| Jumper Wires                   | As Required |

---

## ⚙️ Working Principle

The robot continuously listens for commands received through Bluetooth serial communication.

### Supported Commands

| Command | Action        |
| ------- | ------------- |
| F       | Move Forward  |
| B       | Move Backward |
| L       | Turn Left     |
| R       | Turn Right    |
| S       | Stop          |

The received command is executed immediately, allowing smooth and responsive control.

---

## 🛡 Automatic Safety Stop

To ensure safe operation, the robot implements a **timeout mechanism**:

* The time of the last received command is continuously tracked.
* If no new command is received within **100 milliseconds**, the robot automatically stops.
* This prevents unwanted movement caused by communication loss or Bluetooth disconnection.

---

## 🔌 Pin Configuration

### Motor Driver Connections

| Arduino Pin | Function |
| ----------- | -------- |
| 11          | IN1      |
| 10          | IN2      |
| 6           | IN3      |
| 5           | IN4      |

---

## 🚀 Technologies Used

* Arduino IDE
* Embedded C/C++
* Serial Communication
* Bluetooth Communication
* Motor Control Logic
* L298N Motor Driver

---

## 📈 Applications

* Sumo Robotics Competitions
* Wireless Mobile Robots
* Educational Robotics Projects
* Remote-Controlled Vehicles
* Embedded Systems Learning
* Bluetooth Communication Demonstrations

---

## 🧠 System Architecture

```text
Smartphone / Bluetooth Controller
                │
                ▼
          HC-05 Bluetooth Module
                │
                ▼
             Arduino
                │
                ▼
          L298N Motor Driver
                │
                ▼
             DC Motors
                │
                ▼
             Robot Motion
```

---

## 🔮 Future Improvements

Planned enhancements include:

* Ultrasonic obstacle detection.
* Autonomous attack mode.
* IR edge detection for sumo arenas.
* PWM speed control.
* PID-based movement control.
* Android application integration.
* Wi-Fi and IoT connectivity.
* Camera-based object tracking.

---

## 📸 Project Preview

<img width="172" height="292" alt="image" src="https://github.com/user-attachments/assets/8f15f093-065e-461d-b612-b8cd033c71af" />
<img width="434" height="294" alt="image" src="https://github.com/user-attachments/assets/fca6d95f-6fd8-4d11-84ed-48372c8466b3" />

---

