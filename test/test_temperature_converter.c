//
// Created by nctuong on 7/6/2017.
//

#include "unity.h"
#include "test_temperature_converter.h"
#include "../src/temperature_converter.h"

void test_celsius_to_fahrenheit_0C_return_32F(void)
{
    TEST_ASSERT_FLOAT_WITHIN(0.01, 32, celsius_to_fahrenheit(0));
}

void test_celsius_to_fahrenheit_10C_return_50F(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.01, 50, celsius_to_fahrenheit(10));
}

void test_celsius_to_fahrenheit_20C_return_68F(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.01, 68, celsius_to_fahrenheit(20));
}

void test_celsius_to_kelvin_0C_return_273K(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.2, 273, celsius_to_kelvin(0));
}

void test_celsius_to_kelvin_10C_return_283K(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.2, 283, celsius_to_kelvin(10));
}

void test_celsius_to_kelvin_20C_return_293K(void) {
    TEST_ASSERT_FLOAT_WITHIN(0.2, 293, celsius_to_kelvin(20));
}

