
#include <Wire.h>
#include <SPI.h>
#include <Adafruit_BMP280.h>
Adafruit_BMP280 bmp; // I2C

void setup() {
  Serial.begin(9600);
  Serial.println(F("BMP280 test"));
  if (!bmp.begin(0x76)) {
    Serial.println(F("Could not find a valid BMP280 sensor, check wiring or "
                      "try a different address!"));
    while (1);
  }

  /* Default settings from datasheet. */
  bmp.setSampling(Adafruit_BMP280::MODE_NORMAL,     /* Operating Mode. */
                  Adafruit_BMP280::SAMPLING_X2,     /* Temp. oversampling */
                  Adafruit_BMP280::SAMPLING_X16,    /* Pressure oversampling */
                  Adafruit_BMP280::FILTER_X16,      /* Filtering. */
                  Adafruit_BMP280::STANDBY_MS_500); /* Standby time. */
}

void loop() {
  float Suhu = bmp.readTemperature();
  float Tekanan = bmp.readTemperature();
    Serial.print(F("Temperature = "));
    Serial.print(Suhu);
    Serial.println(" *C");

    Serial.print(F("Pressure = "));
    Serial.print(Tekanan);
    Serial.println(" Pa");
    Serial.println();
    delay(1000);
}
