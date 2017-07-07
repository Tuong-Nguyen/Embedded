//
// Created by nctuong on 7/7/2017.
//

#include "unity_fixture.h"
#include "../src/LedDriver.h"

TEST_GROUP(LedDriver);

TEST_SETUP(LedDriver) {};

TEST_TEAR_DOWN(LedDriver) {};

TEST(LedDriver, LedsOffAfterCreate) {
    uint16_t virtualLeds = 0xffff;
    LedDriver_Create(&virtualLeds);
    TEST_ASSERT_EQUAL_HEX16(0, virtualLeds);
}

TEST(LedDriver, TurnOneLedOn)
{
    uint16_t virtualLeds = 0xffff;
    LedDriver_Create(&virtualLeds);
    LedDriver_TurnOn(1);
    TEST_ASSERT_EQUAL_HEX16(0x01, virtualLeds);
}



TEST_GROUP_RUNNER(LedDriver) {
    RUN_TEST_CASE(LedDriver, LedsOffAfterCreate);
}