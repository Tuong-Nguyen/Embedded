//
// Created by nctuong on 7/7/2017.
//

#include "LedDriver.h"
static uint16_t * ledAddress;

void LedDriver_Create(uint16_t * address) {
    ledAddress = address;
    *ledAddress = 0;
}

void LedDriver_TurnOn(int ledPosition) {
    uint16_t i = 1 << ledPosition;

    *ledAddress = *ledAddress | i;
}