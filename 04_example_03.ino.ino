#define PIN_LED 13
unsigned int count, toggle;

void setup() {
  pinMode(PIN_LED, OUTPUT); // Corrected 'pinMOde' to 'pinMode'
  Serial.begin(115200); // Initialize serial port
  while (!Serial) {
    ; // wait for serial port to connect.
  }
  Serial.println("Hello World!");
  count = 0;
  toggle = LOW;
  digitalWrite(PIN_LED, toggle); // turn off LED initially.
}

void loop() {
  Serial.println(++count);
  toggle = toggle_state(toggle); // toggle LED value.
  digitalWrite(PIN_LED, toggle); // update LED status.
  delay(1000); // wait for 1,000 milliseconds
}

// Corrected function name from 'toggle_sstate' to 'toggle_state' and fixed the logic
int toggle_state(int toggle) {
  return toggle == LOW ? HIGH : LOW;
}
