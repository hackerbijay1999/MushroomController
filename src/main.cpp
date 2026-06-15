#include <Arduino.h>

void setup()
{
    Serial.begin(115200);

    Serial.println();
    Serial.println("=================================");
    Serial.println("Creative Pathbreakers");
    Serial.println("Mushroom Controller V0.0.1");
    Serial.println("=================================");
}

void loop()
{
    Serial.println("System Running...");
    delay(1000);
}