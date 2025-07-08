#define led_pin 8

void setup() {

  pinMode(led_pin, OUTPUT);

}

void loop() {
 digitalWrite(led_pin,HIGH); //turn the led on
 delay(200); //wait 1 secound

 digitalWrite(led_pin, LOW); //turn the led off
 delay(200); //wait 1 secound

}
