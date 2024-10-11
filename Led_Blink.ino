//Scripts for Redboard Artemis: https://github.com/nitinrameshuf/Redboard-Artemis-ATP-Examples/


//Led Blink 

// Define the pin numbers for the LEDs
const int onboardLedPin = LED_BUILTIN; // Onboard LED
const int externalLedPin = 0;          // External LED is connected to D0 (can be changed to any available pin)

void setup() {
  // Initialize the external LED pin as output
  pinMode(externalLedPin, OUTPUT);
  // No need to set pinMode for onboard LED (handled internally)
}

void loop() {
  // Turn the onboard LED on
  digitalWriteLED(HIGH);
  // Turn the external LED on
  digitalWrite(externalLedPin, HIGH);
  delay(1000); // Wait for a second

  // Turn the onboard LED off
  digitalWriteLED(LOW);
  // Turn the external LED off
  digitalWrite(externalLedPin, LOW);
  delay(1000); // Wait for a second
}
