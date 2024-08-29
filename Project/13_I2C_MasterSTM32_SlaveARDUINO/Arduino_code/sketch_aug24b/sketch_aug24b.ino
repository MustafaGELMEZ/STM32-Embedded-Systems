#include <Wire.h>

uint8_t gelen_data = 0;
uint8_t giden_data = 0;

void setup() {
  Serial.begin(9600);
  Wire.begin(0x37); // Cihaz adresi
  Wire.onRequest(istekgeldi); // Veri istenildiğinde çalışacak fonksiyon
  Wire.onReceive(verigeldi);  // Veri alındığında çalışacak fonksiyon
}

void loop() {
  // Loop'un içine bir şey yazmaya gerek yok
}

void verigeldi(int byteCount) {
  while (Wire.available()) {
    gelen_data = Wire.read();
    analogWrite(5, gelen_data);

    Serial.print("Gelen Data:");
    Serial.println(gelen_data);
  }
}

void istekgeldi() {
  giden_data = map(analogRead(A0), 0, 1023, 0, 99);
  Wire.write(giden_data);

  Serial.print("Giden Data : ");
  Serial.println(giden_data);
}
