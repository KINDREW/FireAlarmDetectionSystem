# Fire Alarm Detection System

This project implements an IoT-based fire alarm detection system using Arduino. The system integrates smoke sensors with an Arduino microcontroller to detect fire and send alerts.

## Features

- Smoke detection using MQ-2 sensor
- Local alarm with a buzzer
- Remote alerts via HTTP to a server

## Components

- Arduino board (e.g., Arduino Uno)
- MQ-2 smoke sensor
- Buzzer
- ESP8266 Wi-Fi module (for internet connectivity)
- Relay module (for buzzer control)
- Power supply

## Installation

### Hardware Setup

Refer to `docs/hardware_setup.md` for detailed instructions on connecting the components.

### Software Setup

1. Download the Arduino IDE from [here](https://www.arduino.cc/en/software).
2. Open the `FireAlarmDetectionSystem.ino` file in the Arduino IDE.
3. Modify the Wi-Fi credentials and server endpoint in the sketch.
4. Upload the sketch to the Arduino board.

## Configuration

Sensitive information such as Wi-Fi credentials and server endpoint are stored in `config.h`. This file is not included in the repository for security reasons. To configure the system:

1. Create a `config.h` file in the `arduino/` directory.
2. Define `SSID`, `PASSWORD`, and `SERVER_NAME` in `config.h`.

Example `config.h`:

```cpp
// config.h

#ifndef CONFIG_H
#define CONFIG_H

const char* SSID = "Your_SSID";
const char* PASSWORD = "Your_PASSWORD";
const char* SERVER_NAME = "http://example.com/alert";


## Usage

Once set up, the system will continuously monitor smoke levels. If smoke is detected, the buzzer will sound, and an HTTP request will be sent to the configured server.
```
