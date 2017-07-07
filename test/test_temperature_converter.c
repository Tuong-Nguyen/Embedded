//
// Created by nctuong on 7/6/2017.
//

#include "unity.h"
#include "unity_fixture.h"

#include "../src/temperature_converter.h"

TEST_GROUP(temperature_converter);

TEST_SETUP(temperature_converter) {};

TEST_TEAR_DOWN(temperature_converter) {};

TEST(temperature_converter, test_celsius_to_fahrenheit_0C_return_32F) {
    TEST_ASSERT_FLOAT_WITHIN(0.01, 32, celsius_to_fahrenheit(0));
}

TEST(temperature_converter, test_celsius_to_fahrenheit_10C_return_50F) {
    TEST_ASSERT_FLOAT_WITHIN(0.01, 50, celsius_to_fahrenheit(10));
}

TEST(temperature_converter, test_celsius_to_fahrenheit_20C_return_68F) {
    TEST_ASSERT_FLOAT_WITHIN(0.01, 68, celsius_to_fahrenheit(20));
}

TEST(temperature_converter, test_celsius_to_kelvin_0C_return_273K) {
    TEST_ASSERT_FLOAT_WITHIN(0.2, 273, celsius_to_kelvin(0));
}

TEST(temperature_converter, test_celsius_to_kelvin_10C_return_283K) {
    TEST_ASSERT_FLOAT_WITHIN(0.2, 283, celsius_to_kelvin(10));
}

TEST(temperature_converter, test_celsius_to_kelvin_20C_return_293K) {
    TEST_ASSERT_FLOAT_WITHIN(0.2, 293, celsius_to_kelvin(20));
}

TEST_GROUP_RUNNER(temperature_converter) {
    RUN_TEST_CASE(temperature_converter, test_celsius_to_fahrenheit_0C_return_32F);
    RUN_TEST_CASE(temperature_converter, test_celsius_to_fahrenheit_10C_return_50F);
    RUN_TEST_CASE(temperature_converter, test_celsius_to_fahrenheit_20C_return_68F);
    RUN_TEST_CASE(temperature_converter, test_celsius_to_kelvin_0C_return_273K);
    RUN_TEST_CASE(temperature_converter, test_celsius_to_kelvin_10C_return_283K);
    RUN_TEST_CASE(temperature_converter, test_celsius_to_kelvin_20C_return_293K);
}