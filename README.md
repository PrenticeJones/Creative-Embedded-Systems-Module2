# Creative-Embedded-Systems-Module2
An interactive galaxy
# Interactive Star Galaxy Project

## Overview

The Interactive Star Galaxy is an engaging Arduino project that combines technology with the artistic representation of the cosmos. Using a TFT display, users can interact with the galaxy by adjusting the number of stars with a potentiometer and toggling their color with a button. This project aims to demystify hardware interaction and embed a piece of the universe in everyday spaces.

## Installation

### Hardware Requirements

- ESP32 or compatible microcontroller board
- TFT display compatible with the TFT_eSPI library
- A potentiometer
- A push button
- Breadboard and jumper wires (5)

### Software Requirements

- Arduino IDE
- TFT_eSPI library for the Arduino IDE

### Setup Instructions

1. **Prepare the Arduino Environment:**
   - Ensure the Arduino IDE is installed and set up for your ESP32 board.
   - Install the TFT_eSPI library via the Library Manager in the Arduino IDE.

2. **Connect the Components:**
   - Connect the TFT display to the ESP32 according to the TFT_eSPI library documentation.
   - Attach the potentiometer's middle pin to GPIO 12 (or your chosen analog pin), one side pin to 3.3V, and the other side pin to GND.
   - Wire the button to GPIO 15 (or your chosen digital pin) and GND, enabling the internal pull-up resistor in your code or connecting an external one to 3.3V.

3. **Load the Sketch:**
   - Clone or download this repository.
   - Open `InteractiveStarGalaxy.ino` in the Arduino IDE.
   - Upload the sketch to your ESP32.

## Usage

- Rotate the potentiometer to change the density of stars displayed on the TFT screen.
- Press the button to switch the star colors between white and red.
- Enjoy the interactive cosmic display, with updates reflecting your inputs every 2 seconds.

## Reproducing the Design

Follow the detailed setup instructions to ensure all hardware is correctly connected and the software environment is prepared. Pay special attention to the GPIO pins used in the code, adjusting them as necessary to match your specific hardware configuration.

## Learn More Through My Blog
https://glitch.com/~creative-embedded-systems-module2

---
