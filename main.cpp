#include <Arduino.h>

const int moisturePin = A0;
const int relayPin = 2;

// Nastav true, pokud je relé modul aktivní nízkou úrovní (LOW = ON).
// Nastav false, pokud je relé aktivní vysokou úrovní (HIGH = ON).
const bool relayActiveLow = true;

// Hodnoty je potřeba doladit podle konkrétního senzoru a substrátu.
// Nižší hodnota = suchá půda, vyšší hodnota = vlhká půda.
const int dryThreshold = 500;
const int wetThreshold = 650;

void setRelay(bool on) {
  digitalWrite(relayPin, on ? (relayActiveLow ? LOW : HIGH) : (relayActiveLow ? HIGH : LOW));
}

void setup() {
  Serial.begin(9600);
  pinMode(relayPin, OUTPUT);
  setRelay(false);

  Serial.println("Automaticke zavlazovani - start");
  Serial.println("Cteni A0 a ovladani rele na pin 2");
}

void loop() {
  int moistureValue = analogRead(moisturePin);

  Serial.print("A0 = ");
  Serial.print(moistureValue);

  if (moistureValue <= dryThreshold) {
    setRelay(true);
    Serial.println(" -> zalivam (rele ON)");
  } else if (moistureValue >= wetThreshold) {
    setRelay(false);
    Serial.println(" -> stop (rele OFF)");
  } else {
    Serial.println(" -> zustava bez zmeny");
  }

  delay(1000);
}
