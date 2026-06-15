#include "buzzer.h"

#include <Arduino.h>

#include "../config/pins.h"

void initBuzzer()
{
    pinMode(BUZZER_PIN, OUTPUT);

    digitalWrite(BUZZER_PIN, LOW);
}

void startupBeep()
{
    digitalWrite(BUZZER_PIN, HIGH);
    delay(200);
    digitalWrite(BUZZER_PIN, LOW);
}

void errorBeep()
{
    for(int i=0;i<3;i++)
    {
        digitalWrite(BUZZER_PIN, HIGH);
        delay(150);

        digitalWrite(BUZZER_PIN, LOW);
        delay(150);
    }
}