#include "modbus_manager.h"

#include <Arduino.h>

#include "../config/pins.h"

HardwareSerial RS485Serial(2);

void initRS485()
{
    pinMode(RS485_DE, OUTPUT);

    digitalWrite(RS485_DE, LOW);

    RS485Serial.begin(
        9600,
        SERIAL_8N1,
        RS485_RX,
        RS485_TX
    );
}

bool readHoldingRegisters(
    uint8_t slaveId,
    uint16_t startReg,
    uint16_t count,
    uint16_t *buffer)
{
    return false;
}