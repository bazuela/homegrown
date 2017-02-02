#include <rgb_led.h>
#include <wiringPi.h>

RGB_LED::RGB_LED()
{
    LED_RED = 0;
    LED_GREEN = 2;
    LED_BLUE = 3;

    Initialize(LED_RED, LED_GREEN, LED_BLUE);
}

void RGB_LED::Initialize(int R_PIN, int G_PIN, int B_PIN)
{
    LED_RED = R_PIN;
    LED_GREEN = G_PIN;
    LED_BLUE = B_PIN;

    wiringPiSetup();
    pinMode(LED_RED, OUTPUT);
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_BLUE, OUTPUT);
}

void RGB_LED::RunColorDemo()
{
    // Demo: Red
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_BLUE, LOW);
    digitalWrite(LED_GREEN, LOW);
    delay(1000);
    // Demo: Blue
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_BLUE, HIGH);
    digitalWrite(LED_GREEN, LOW);
    delay(1000);
    // Demo: Green
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_BLUE, LOW);
    digitalWrite(LED_GREEN, HIGH);
    delay(1000);
    // Demo: Cyan
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_BLUE, HIGH);
    digitalWrite(LED_GREEN, HIGH);
    delay(1000);
    // Demo: Yellow
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_BLUE, LOW);
    digitalWrite(LED_GREEN, HIGH);
    delay(1000);
    // Demo: Magenta
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_BLUE, HIGH);
    digitalWrite(LED_GREEN, LOW);
    delay(1000);
    // Demo: Red
    digitalWrite(LED_RED, HIGH);
    digitalWrite(LED_BLUE, HIGH);
    digitalWrite(LED_GREEN, HIGH);
    delay(1000);
    // Demo: Off
    digitalWrite(LED_RED, LOW);
    digitalWrite(LED_BLUE, LOW);
    digitalWrite(LED_GREEN, LOW);
}
