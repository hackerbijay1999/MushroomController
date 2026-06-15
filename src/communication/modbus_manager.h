#pragma once

void initRS485();

bool readHoldingRegisters(
    uint8_t slaveId,
    uint16_t startReg,
    uint16_t count,
    uint16_t *buffer
);