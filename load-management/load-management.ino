
float currentADC = 0.0;
float voltageADC = 0.0;
float averageVoltageADC = 0.0;
float voltage = 0.0;
const double scale = 330 / (330 + 470);
const int relayPin = 9;

void setup() {
  pinMode(relayPin, OUTPUT);
  // put your setup code here, to run once:
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  for (int i = 0; i < 150; i++) {
    voltageADC += analogRead(0);
    delay(2);
  }

  averageVoltageADC = voltageADC / 150;
  voltage = averageVoltageADC / scale;

  if (voltage <= 11.5) {
    digitalWrite(relayPin, HIGH);
  }

}
