// Define the pin numbers for the LEDs
const int onboardLedPin = 5; // Onboard LED number 5
const int externalLedPin = 18; // External LED is D18

void setup() {
  // Initialize both pins as output
  pinMode(onboardLedPin, OUTPUT);
  pinMode(externalLedPin, OUTPUT);
}

void loop() {
  // Turn both LEDs on
  digitalWrite(onboardLedPin, HIGH);
  digitalWrite(externalLedPin, HIGH);
  delay(1000); // Wait for a second

  // Turn both LEDs off
  digitalWrite(onboardLedPin, LOW);
  digitalWrite(externalLedPin, LOW);
  delay(1000); // Wait for a second
}
