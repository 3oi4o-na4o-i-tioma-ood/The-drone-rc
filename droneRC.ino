#include <RH_ASK.h>
#include <SPI.h>

RH_ASK t_driver;

void setup() {
  t_driver.init();
  // Setup Serial Monitor
  Serial.begin(9600);
}

void loop() {
  delay(3000);

  //Serial.println("Trying to sent message");
  const char *msg = "aaaaaabbbbbb";
  t_driver.send((uint8_t *)msg, strlen(msg));
  t_driver.waitPacketSent();
  Serial.println("Message sent");
}