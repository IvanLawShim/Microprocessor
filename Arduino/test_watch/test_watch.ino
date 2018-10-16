#include <avr/wdt.h>

void setup(){
  Serial.begin(9600);
  wdt_disable();  
  delay(3000); 
  wdt_enable(WDTO_2S);
}

void loop(){
  printf("Hello");
  delay(1000);
  wdt_reset();
}
