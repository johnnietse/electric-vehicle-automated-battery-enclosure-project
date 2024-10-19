# Battery Enclosure for Electric Vehicle

## Project Overview
This project focuses on developing a battery enclosure for a set of 16 batteries in an electric vehicle. The design ensures batteries are kept at a safe operating temperature (-20°C to 50°C), monitored through temperature sensors, and protected from physical damage in case of an accident. Liquid cooling was chosen as the optimal solution due to its reliability, low cost, and safety.

## Electrical System Overview
The electrical system is responsible for monitoring and controlling the temperature of the battery enclosure. It includes:

- **Arduino Uno**: Controls sensors and turns the pump on/off via a relay.
- **Temperature Sensors**: Positioned at key points in the battery cycle to monitor operating conditions.
- **12V Water Pump**: Circulates coolant through copper tubing to cool the batteries.
- **Relay**: Switches the pump on/off based on temperature readings.
- **LCD Display**: Shows real-time temperature data for monitoring.

### Components:
- **Arduino Uno**: Central controller for the system.
- **Temperature Sensor (DHT22)**: Monitors the battery temperature.
- **12V Diaphragm Water Pump**: Circulates liquid coolant.
- **5V Relay Module**: Controls the pump based on temperature input.
- **LCD Screen**: Displays the temperature.
- **Copper Tubing**: Carries coolant to maintain battery temperature.
- **External 12V Power Source**: Powers the pump and Arduino.

## Features
- **Temperature Control**: Automated cooling system based on real-time temperature data.
- **Safety Mechanism**: Ensures batteries are within the safe temperature range.
- **Compact Design**: Fits into the back of a Jeep TJ while being lightweight and manufacturable.
  
## Electrical System Modelling
- **Power Source**: The 12V car battery provides 1200W of power.
- **Power Requirements**:
  - **Pump**: 39.6W
  - **Arduino Components**: 0.675W
  - **Total Power**: 40.275W, well below the available 1200W.

### Key Equations:
- **Power Calculation for Components**: `P = IV`
- **Relay Power Switching**: Relay supports switching up to 25W for the pump.
  
## Installation & Setup
1. Assemble the system with the copper tubing around the batteries.
2. Connect temperature sensors to the Arduino Uno.
3. Wire the relay and pump to the Arduino for automatic control.
4. Ensure the LCD is wired to display temperature data.
5. Power the system using the vehicle’s 12V battery.

## Testing
1. **Flow Rate Test**: Measure coolant displacement over 1 minute.
2. **Temperature Monitoring**: Verify sensors trigger the pump at set thresholds.
3. **Electrical System Test**: Ensure all components, switches, and controls function as intended.

## Future Improvements
- Optimize cooling efficiency with alternative coolants like ethylene glycol.
- Improve battery insulation for enhanced protection in extreme conditions.
