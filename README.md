# RepeatedTask

Execute a piece code (lambda) at defined intervals.

## Blink example

```
void loop() {
  every(200, millis, [](){
    /* Place your code here! */
    digitalWrite(LED_INTERNAL, !digitalRead(LED_INTERNAL));
  });
}
```
