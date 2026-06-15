#include <Arduino.h>

#include "display/oled.h"
#include "rtc/rtc_manager.h"
#include "system/sensor_data.h"
#include "system/led_manager.h"
#include "buzzer/buzzer.h"
#include "communication/modbus_manager.h"

void setup()
{
    Serial.begin(115200);

    initLEDs();

    initBuzzer();

    initRS485();

    startupBeep();

    initOLED();

    oledBootScreen();

    delay(3000);

    if(initRTC())
    {
        Serial.println("RTC OK");

        setAlarmLED(false);
    }
    else
    {
        Serial.println("RTC ERROR");

        errorBeep();

        setAlarmLED(true);
    }

    sensors.roomTemperature = 30.5;
    sensors.roomHumidity = 92.0;
    sensors.lux = 350;
    sensors.co2 = 1200;
}

void loop()
{
    updateHeartbeat();

    Serial.println(getDateTimeString());

    oledStatusScreen();

    delay(1000);
}