//
// Created by nctuong on 7/6/2017.
//

#include "unity.h"
#include "unity_fixture.h"
#include "../src/DumbExample.h"
#include "test_temperature_converter.h"
#include "test_max_min_array.h"


void test_AverageThreeBytes_should_AverageMidRangeValues(void)
{
    TEST_ASSERT_EQUAL_HEX8(40, AverageThreeBytes(30, 40, 50));
    TEST_ASSERT_EQUAL_HEX8(40, AverageThreeBytes(10, 70, 40));
    TEST_ASSERT_EQUAL_HEX8(33, AverageThreeBytes(33, 33, 33));
}

void test_AverageThreeBytes_should_AverageHighValues(void)
{
    TEST_ASSERT_EQUAL_HEX8(80, AverageThreeBytes(70, 80, 90));
    TEST_ASSERT_EQUAL_HEX8(127, AverageThreeBytes(127, 127, 127));
    TEST_ASSERT_EQUAL_HEX8(84, AverageThreeBytes(0, 126, 126));
}

int main(void)
{

    UNITY_BEGIN();
    RUN_TEST(test_AverageThreeBytes_should_AverageMidRangeValues);
    RUN_TEST(test_AverageThreeBytes_should_AverageHighValues);

    RUN_TEST(test_celsius_to_fahrenheit_0C_return_32F);
    RUN_TEST(test_celsius_to_fahrenheit_10C_return_50F);
    RUN_TEST(test_celsius_to_fahrenheit_20C_return_68F);

    RUN_TEST(test_celsius_to_kelvin_0C_return_273K);
    RUN_TEST(test_celsius_to_kelvin_10C_return_283K);
    RUN_TEST(test_celsius_to_kelvin_20C_return_293K);

    RUN_TEST(test_max_min_array_emtpy_return_null);
    RUN_TEST(test_max_min_array_singleItem_return_thatItem);
    RUN_TEST(test_max_min_array_ascendingArray_return_lastForMax_firstForMin);
    RUN_TEST(test_max_min_array_descendingArray_return_fisrtForMax_lastForMin);

    return UNITY_END();
}