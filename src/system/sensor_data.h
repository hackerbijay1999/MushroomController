#pragma once

struct SensorData
{
    // Environmental

    float roomTemperature = 0.0;
    float roomHumidity = 0.0;

    float substrateTemperature = 0.0;

    float lux = 0.0;

    float co2 = 0.0;

    // Status

    bool waterLow = false;
    bool doorOpen = false;

    // Communication

    bool wifiConnected = false;
    bool mqttConnected = false;
};

extern SensorData sensors;