#pragma once

bool initOLED();

void oledBootScreen();

void oledStatusScreen(
    float temp,
    float humidity,
    float lux,
    float co2
);