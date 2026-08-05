#pragma once

#include <stdint.h>

struct VehicleData
{
    uint16_t rpm = 0;
    uint16_t speed = 0;
    uint8_t gear = 1;

    uint8_t fuel = 100;

    float coolantTemp = 30.0f;
    float battery = 12.6f;

    bool leftSignal = false;
    bool rightSignal = false;
    bool highBeam = false;
};

extern VehicleData vehicle;
