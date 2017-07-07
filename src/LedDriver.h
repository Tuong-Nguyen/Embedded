//
// Created by nctuong on 7/7/2017.
//

#ifndef CTUTORIAL_LEDDRIVER_H
#define CTUTORIAL_LEDDRIVER_H

#include <stdint.h>
void LedDriver_Create(uint16_t *address);
void LedDriver_TurnOn(int ledPosition);
#endif //CTUTORIAL_LEDDRIVER_H
