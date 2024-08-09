# Hardware Setup

## Components Required

- Arduino board (e.g., Arduino Uno)
- MQ-2 smoke sensor
- Buzzer
- ESP8266 Wi-Fi module
- Relay module
- Power supply

## Wiring Diagram

## Connections

1. **MQ-2 Sensor**:

   - VCC to 5V
   - GND to GND
   - Analog output (A0) to A0 on Arduino

2. **Buzzer**:

   - Connect the positive pin to D1 on Arduino
   - Connect the negative pin to GND

3. **ESP8266 Wi-Fi Module**:

   - VCC to 3.3V
   - GND to GND
   - TX to RX on Arduino
   - RX to TX on Arduino (use a voltage divider if needed)

4. **Relay Module**:
   - VCC to 5V
   - GND to GND
   - IN to D2 on Arduino (if used for controlling other devices)
