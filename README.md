# Every

Execute a piece code (lambda) at defined intervals.

## Blink example

```
    loop() {
        every(200, millis, [](){
            /* Place your code here! */
            digitalWrite(LED_INTERNAL, !digitalRead(LED_INTERNAL));
        });
    }
```
