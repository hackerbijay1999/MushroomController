#include "led_manager.h"

#include <Arduino.h>

#include "../config/pins.h"

unsigned long lastBlink = 0;
bool greenState = false;

void initLEDs()
{
    pinMode(LED_GREEN, OUTPUT);
    pinMode(LED_RED, OUTPUT);

    digitalWrite(LED_GREEN, LOW);
    digitalWrite(LED_RED, LOW);
}

void updateHeartbeat()
{
    if (millis() - lastBlink >= 1000)
    {
        lastBlink = millis();

        greenState = !greenState;

        digitalWrite(LED_GREEN, greenState);
    }
}

void setAlarmLED(bool state)
{
    digitalWrite(LED_RED, state);
}