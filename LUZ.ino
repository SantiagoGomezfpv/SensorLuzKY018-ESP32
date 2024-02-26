#define LDRPIN 37

void setup() {
  Serial.begin(115200);
}

void loop() {
  int analogValue = analogRead(LDRPIN);
  float voltage = analogValue * (5.0 / 1023.0);
  float lightIntensity = voltage * 100;

  Serial.print("Valor analógico: ");
  Serial.println(analogValue);

  Serial.print("Voltaje: ");
  Serial.println(voltage);

  Serial.print("Intensidad de luz: ");
  Serial.println(lightIntensity);

  if (lightIntensity < 1000) {
    Serial.println("Es de día!");
  } else {
    Serial.println("Es de noche!");
  }
  delay(1000);
}

  
