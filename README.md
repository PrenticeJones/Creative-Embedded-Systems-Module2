# Creative-Embedded-Systems-Module2
An interactive galaxy

Overview
The Interactive Star Galaxy is an Arduino-based project designed to visualize a dynamic star field on a TFT display. Utilizing a potentiometer and a button, users can adjust the number of stars displayed and toggle their color between white and red. Inspired by the vastness of space and interactive art, this project invites exploration and interaction, blending technology with the cosmos.

Installation
Requirements
Arduino IDE
ESP32 or compatible microcontroller
TFT_eSPI library for the TFT display
A breadboard, potentiometer, and button
5 Jumper wires
Hardware Setup
Connect the potentiometer to one of the analog pins (e.g., GPIO 12) on the ESP32. Connect one side pin to 3.3V, the middle pin to GPIO 12, and the other side pin to GND.
Connect the button to a digital pin (e.g., GPIO 15) with one pin connected to GPIO 15 and the other to GND. Optionally, use an internal pull-up resistor or connect an external one between 3.3V and the button pin connected to GPIO 15.
Attach the TFT display to the ESP32 according to the display's wiring instructions.
Software Setup
Install the Arduino IDE and configure it for your ESP32 board.
Install the TFT_eSPI library via the Library Manager in the Arduino IDE.
Clone or download this repository to your local machine.
Open the project sketch (InteractiveStarGalaxy.ino) in the Arduino IDE.
Usage
Turn the potentiometer to adjust the density of the star field displayed on the TFT screen.
Press the button to toggle the star color between white and red.
The display updates every 2 seconds to reflect changes in the star field.
Reproducing the Design
To recreate this project, follow the hardware setup to connect your components correctly to the ESP32. Adjust the potPin and buttonPin in the sketch to match your actual GPIO connections. The project code handles reading from the potentiometer and the button, adjusting the star display accordingly.

The TFT_eSPI library settings (e.g., pin connections for the TFT display) may need to be customized based on your specific hardware setup. Refer to the library's documentation for detailed instructions on configuring your display.
