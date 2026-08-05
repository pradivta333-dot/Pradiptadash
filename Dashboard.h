#pragma once

#include "VehicleData.h"

class Dashboard
{
public:
    void begin();
    void update();

private:
    void drawSpeed();
    void drawRPM();
    void drawGear();
};
