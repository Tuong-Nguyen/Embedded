//
// Created by nctuong on 7/7/2017.
//

#include "LedDriver.h"
static int * ledAddress;
void LedDriver_Create(uint16_t *address) {
    ledAddress = address;
    *ledAddress = 0;
}

void LedDriver_TurnOn(int ledPosition) {
    *ledAddress = *ledAddress & 0 | 1;
}