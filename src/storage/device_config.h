#pragma once

struct DeviceConfig
{
    String deviceId;

    String farmName;
    String roomName;

    String mqttServer;
    int mqttPort;

    float tempSetpoint;
    float humiditySetpoint;

    bool configured;
};

extern DeviceConfig config;