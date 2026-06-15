#include "oled.h"

#include <Arduino.h>
#include <U8g2lib.h>
#include <Wire.h>

#include "../config/pins.h"
#include "../config/config.h"
#include "../system/sensor_data.h"

U8G2_SSD1306_128X64_NONAME_F_HW_I2C
u8g2(U8G2_R0, U8X8_PIN_NONE);

bool initOLED()
{
    u8g2.begin();
    return true;
}

void oledBootScreen()
{
    u8g2.clearBuffer();

    u8g2.setFont(u8g2_font_ncenB08_tr);

    u8g2.drawStr(0,15,"Creative Pathbreakers");
    u8g2.drawStr(0,35,"Mushroom Controller");
    u8g2.drawStr(0,55,"FW: 0.0.1");

    u8g2.sendBuffer();
}

void oledStatusScreen()
{
    char buffer[32];

    u8g2.clearBuffer();

    u8g2.setFont(u8g2_font_6x12_tf);

    u8g2.drawStr(0,10,"CP Mushroom");

    sprintf(buffer,"T: %.1f C", sensors.roomTemperature);
    u8g2.drawStr(0,24,buffer);

    sprintf(buffer,"H: %.1f %%", sensors.roomHumidity);
    u8g2.drawStr(0,36,buffer);

    sprintf(buffer,"Lux: %.0f", sensors.lux);
    u8g2.drawStr(0,48,buffer);

    sprintf(buffer,"CO2: %.0f", sensors.co2);
    u8g2.drawStr(0,60,buffer);

    u8g2.sendBuffer();
}