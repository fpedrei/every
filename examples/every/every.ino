#include <Arduino.h>

#include <every.h>

void setup() {
	/* nothing */
}

void loop() {

#ifdef LED_INTERNAL
 	every(200, millis, [](){
		digitalWrite(LED_INTERNAL, !digitalRead(LED_INTERNAL));
	});
#endif
 
	every(1, hours, [](){
		printf("3600s : %li\r\n", millis());
	});

	every(2, minutes, [](){
		printf("  60s : %li\r\n", millis());
	});

	every(10, seconds, [](){
		printf("  10s : %li\r\n", millis());
	});

	every(7000, millis, [](){
		printf("7000ms: %li\r\n", millis());
        });
}
