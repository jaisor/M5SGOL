#include <Arduino.h>
#include <M5Core2.h>

void setup() {
  Serial.begin(9600);
  M5.begin(true, true, true, true);
  M5.Lcd.setBrightness(255);
}

void loop() {
  int counter = 0;

  M5.Lcd.fillCircle(320/2, 240/2, 120, 0x51d);

  M5.Lcd.setTextSize(4);
  M5.Lcd.setTextColor(0xe8e4);
  M5.Lcd.println("Hellow Alex");

  for(;;) {
    Serial.printf("Hello World. [%d]\n", counter);
    counter++;
    delay(500);
  }

}