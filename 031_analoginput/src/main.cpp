#include <Arduino.h>

void setup() {
	Serial.begin(9600);
	pinMode(A0, INPUT);
}

void loop() {
	int v = analogRead(A0);
	Serial.println(v);
	delay(1000);
}

