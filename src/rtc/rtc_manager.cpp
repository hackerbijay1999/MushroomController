#include "rtc_manager.h"

#include <Arduino.h>
#include <RTClib.h>

RTC_DS3231 rtc;

bool initRTC()
{
    return rtc.begin();
}

String getDateTimeString()
{
    DateTime now = rtc.now();

    char buffer[32];

    sprintf(
        buffer,
        "%04d-%02d-%02d %02d:%02d:%02d",
        now.year(),
        now.month(),
        now.day(),
        now.hour(),
        now.minute(),
        now.second()
    );

    return String(buffer);
}