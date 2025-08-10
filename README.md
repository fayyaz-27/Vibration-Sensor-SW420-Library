# SW420 Vibration Sensor Driver for ESP-IDF

**Author:** Fayyaz Shaikh  
[LinkedIn](https://www.linkedin.com/in/fayyaz-shaikh-7646312a3/) | fayyaz.shaikh7862005@gmail.com

---

## Overview

This repository contains a lightweight and easy-to-integrate driver for the **SW420 vibration sensor** module using the ESP-IDF framework on ESP32 devices. The driver supports digital vibration detection with proper GPIO configuration and FreeRTOS-friendly operation.

---

## Features

- Simple API for vibration detection  
- Proper GPIO initialization with pull-down to prevent floating inputs  
- Uses FreeRTOS delays to avoid watchdog timeouts  
- Suitable for real-time embedded vibration monitoring projects

---

## Hardware Setup

- **SW420 Vibration Sensor:** Connect digital output pin (DO) to an ESP32 GPIO input pin.  
- **Power:** 3.3V and GND to ESP32's 3.3V and GND.  
- **LED Indicator:** Connect an LED with appropriate resistor to GPIO for visual feedback.
