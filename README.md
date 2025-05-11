# Hand Motion Sensor with HC-SR04

This project uses an HC-SR04 ultrasonic sensor with an Arduino to detect hand proximity and trigger an LED.

## Hardware Requirements
- Arduino Uno/Nano
- HC-SR04 Ultrasonic Sensor
- LED + 220Ω resistor
- Jumper wires and breadboard

## Wiring
- Trig (HC-SR04) → D9
- Echo (HC-SR04) → D10
- LED anode → D13
- LED cathode → GND

## Usage
Upload the `HandSensor.ino` sketch to your Arduino. When a hand is within 15 cm, the onboard LED will turn on.

