
const uint8_t ledPins[] = {2,3,4,5,6, 7}; // LSB on pin 2
const uint8_t NUM_BITS = sizeof(ledPins);
uint8_t counter = 0;
unsigned long lastMillis = 0;
const unsigned long interval = 500;

void setup() {
  for (uint8_t i=0; i<NUM_BITS; ++i) {
    pinMode(ledPins[i], OUTPUT);
    digitalWrite(ledPins[i], LOW);
  }
}

void writeBits(uint8_t value) {
  for (uint8_t i=0; i<NUM_BITS; ++i) {
    bool bit = (value >> i) & 0x01;
    digitalWrite(ledPins[i], bit ? HIGH : LOW);
  }
}

void loop() {
  if (millis() - lastMillis >= interval) {
    lastMillis = millis();
    writeBits(counter);
    counter = (counter + 1) & ((1 << NUM_BITS) - 1);
  }
}
