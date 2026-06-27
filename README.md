# Earthquake Detection System using Arduino Uno

## Overview

The **Earthquake Detection System** is an Arduino Uno–based embedded system designed to detect vibration that may indicate seismic activity. The system continuously monitors the vibration input and immediately alerts the user through visual and audible indications whenever significant vibration is detected.

When vibration is detected, the system:

* Displays an earthquake warning on a 16×2 LCD.
* Turns ON an LED indicator.
* Activates a piezo buzzer.
* Returns to the normal monitoring state once the vibration stops.

This project demonstrates the integration of sensors, display modules, alert devices, and PCB design for a simple real-time embedded monitoring application.

---

## Features

* Real-time vibration monitoring
* LCD-based status display
* Visual indication using LED
* Audible alert using piezo buzzer
* Arduino Uno implementation
* Custom PCB designed using EasyEDA
* Gerber files included for PCB fabrication

---

## Components Used

| Component                                                      | Quantity |
| -------------------------------------------------------------- | -------: |
| Arduino Uno R3                                                 |        1 |
| 16×2 LCD Display                                               |        1 |
| Push Button (used as vibration sensor input for demonstration) |        1 |
| Piezo Buzzer                                                   |        1 |
| Red LED (3 mm)                                                 |        1 |
| 220 Ω Resistor (LED current limiting)                          |        1 |
| 10 kΩ Resistor (Push Button pull-down)                         |        1 |
| 10 kΩ Potentiometer (LCD Contrast Control)                     |        1 |

---

## Software Used

* Arduino IDE
* EasyEDA
* Tinkercad
* GitHub

---

## Working Principle

1. The Arduino continuously monitors the vibration input.
2. During startup, the LCD displays the initialization message.
3. Under normal conditions, the LCD displays:

```text
Status:
Normal
```

4. When vibration is detected:

   * The LED turns ON.
   * The buzzer starts beeping.
   * The LCD displays an earthquake warning message.

5. Once vibration stops:

   * LED turns OFF.
   * Buzzer stops.
   * LCD returns to the normal monitoring state.

---

## Pin Connections

### LCD Connections

| LCD Pin | Arduino Pin          |
| ------- | -------------------- |
| RS      | D12                  |
| E       | D11                  |
| D4      | D5                   |
| D5      | D4                   |
| D6      | D3                   |
| D7      | D2                   |
| VSS     | GND                  |
| VDD     | 5V                   |
| RW      | GND                  |
| VO      | Potentiometer Output |
| A       | 5V                   |
| K       | GND                  |

### Other Connections

| Component    | Arduino Pin |
| ------------ | ----------- |
| Push Button  | D6          |
| LED          | D13         |
| Piezo Buzzer | D8          |

---

## PCB Design

The PCB for this project was designed using **EasyEDA**.

The repository includes:

* Circuit Schematic
* PCB Layout
* Gerber Files
* Drill Files

The PCB successfully passed Design Rule Check (DRC) before Gerber generation.

---

## Project Structure

```text
Earthquake-Detection-System
│
├── Arduino Code/
│   └── earthquake_detection_system_1.ino
│
├── PCB/
│   ├── PCB_PCB_Smart_Vibration_Detection_Schematic_2026-06-27.png
│   └── Gerber_Smart_Vibration_Detection_Schematic.../   (Gerber & drill files)
│
├── Schematic/
│   ├── Alert.jpeg
│   ├── Normal.png
│   └── Schematic_Smart_Vibration_Detection_Schematic_2026-06-27.png
│
├── Report/
│   └── Earthquake Alert System Project Report.pdf
│
├── Demo/
│   └── Demo Video.mp4
│
└── README.md
```

---

## Future Improvements

* Replace the push button with an actual SW-420 vibration sensor.
* Add GSM or Wi-Fi notification capabilities.
* Store vibration history using an SD card.
* Integrate IoT cloud monitoring.
* Improve sensitivity through calibrated thresholds.

---

## Repository Contents

* Arduino Source Code
* Circuit Schematic
* PCB Layout
* Gerber Files
* Project Report
* Demonstration Video

---

## Author

**Tejal Gupta**

B.Tech CSE (Internet of Things)

Vellore Institute of Technology

---

## License

This project is intended for educational and learning purposes.


## Demo

A demonstration video of the working system is available in the [`Demo`](Demo) folder of this repository (`Demo/Demo Video.mp4`). The video shows the system detecting vibration and triggering the LCD warning, LED indicator, and buzzer alert.
