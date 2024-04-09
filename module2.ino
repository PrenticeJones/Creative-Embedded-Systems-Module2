#include <TFT_eSPI.h>

TFT_eSPI tft = TFT_eSPI();  // Create TFT object
const int potPin = 12;      // The GPIO pin connected to the potentiometer's output
const int buttonPin = 15;   // Button pin
bool buttonState = false;   // Current button state for color toggle
bool lastButtonState = false; // Last button state to detect changes
int lastPotValue = -1;      // Store the last potentiometer value to detect changes
uint32_t starColor = TFT_WHITE; // Start with white stars

void setup() {
  tft.init();
  tft.fillScreen(TFT_BLACK);
  pinMode(potPin, INPUT);
  pinMode(buttonPin, INPUT_PULLUP); // Initialize button pin as input with pull-up resistor
  Serial.begin(115200);
}

void loop() {
  int potValue = analogRead(potPin); 
  int numStars = map(potValue, 0, 4095, 0, 200);

  // Read the button state
  bool currentButtonState = digitalRead(buttonPin) == LOW; // Button pressed state
  
  // Check if button state changed from not pressed to pressed
  if(currentButtonState && !lastButtonState) {
    buttonState = !buttonState; // Toggle the button state
    starColor = buttonState ? TFT_RED : TFT_WHITE; // Update star color based on button state
    tft.fillScreen(TFT_BLACK); // Clear the screen for color change
    lastPotValue = -1; // Force redraw of stars with new color
  }
  lastButtonState = currentButtonState; // Update the last button state

  // Only redraw stars if the potentiometer value has changed significantly or button pressed
  if(abs(lastPotValue - potValue) > 10 || lastPotValue == -1) {
    if (lastPotValue != -1) { // Avoid clearing the screen if it's the first run or color change
      tft.fillScreen(TFT_BLACK); // Clear the screen to update star density
    }
    for (int i = 0; i < numStars; i++) { // Redraw stars with the current density and color
      int x = random(tft.width());
      int y = random(tft.height());
      tft.drawPixel(x, y, starColor);
    }
    lastPotValue = potValue; // Update the last potentiometer value
  }

  delay(100); // Small delay to limit the refresh rate
}
