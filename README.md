# Arduino-Based Automatic Plant Watering System

## Project Overview

An Arduino-based automatic plant watering system that monitors soil moisture using a soil moisture sensor and automatically controls a water pump based on the moisture level of the soil.

## Components Used

- Arduino
- Soil Moisture Sensor
- Relay Module
- Water Pump
- Buzzer
- Connecting Wires

## How It Works

1. The soil moisture sensor measures the moisture level of the soil.
2. Arduino reads the sensor value through analog pin A0.
3. If the soil is dry, the relay is activated and the water pump turns ON.
4. When the soil becomes sufficiently wet, the pump turns OFF.
5. The moisture readings and system status are displayed through the Serial Monitor.

## Technologies Used

- Arduino
- Embedded Systems
- C/C++ (Arduino Programming)
- Soil Moisture Sensing

## Features

- Automatic soil moisture monitoring
- Automatic pump control
- Reduces manual watering
- Real-time moisture readings
- Sensor-based operation

## Project Files

- `plant_watering.ino` – Arduino source code
- `README.md` – Project documentation

## Future Improvements

- Add an LCD/OLED display
- Add IoT-based remote monitoring
- Add mobile notifications
- Improve moisture-level calibration
