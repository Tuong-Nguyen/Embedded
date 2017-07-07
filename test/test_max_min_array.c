//
// Created by nctuong on 7/6/2017.
//

#include <unity.h>
#include "unity_fixture.h"
#include "../src/max_min_array.h"

TEST_GROUP(max_min_array);

TEST_SETUP(max_min_array){};

TEST_TEAR_DOWN(max_min_array){};

TEST(max_min_array, test_max_min_array_emtpy_return_null) {
    int array[] = {};
    int size = sizeof(array) / sizeof(int);
    int *min;
    int *max;
    max_min(array, array + size, &max, &min);
    TEST_ASSERT_EQUAL_PTR(0, max);
    TEST_ASSERT_EQUAL_PTR(0, min);
}

TEST(max_min_array, test_max_min_array_singleItem_return_thatItem) {
    int array[] = {1};
    int size = sizeof(array) / sizeof(int);
    int *min;
    int *max;
    max_min(array, array + size, &max, &min);
    TEST_ASSERT_EQUAL_PTR(array, max);
    TEST_ASSERT_EQUAL_PTR(array, min);
}

TEST(max_min_array, test_max_min_array_ascendingArray_return_lastForMax_firstForMin) {
    int array[] = {1, 2, 3};
    int size = sizeof(array) / sizeof(int);
    int *min;
    int *max;
    max_min(array, array + size, &max, &min);
    TEST_ASSERT_EQUAL_PTR(array + 2, max);
    TEST_ASSERT_EQUAL_PTR(array, min);
}

TEST(max_min_array, test_max_min_array_descendingArray_return_fisrtForMax_lastForMin) {
    int array[] = {3, 2, 1};
    int size = sizeof(array) / sizeof(int);
    int *min;
    int *max;
    max_min(array, array + size, &max, &min);
    TEST_ASSERT_EQUAL_PTR(array, max);
    TEST_ASSERT_EQUAL_PTR(array + 2, min);
}

TEST_GROUP_RUNNER(max_min_array) {
    RUN_TEST_CASE(max_min_array, test_max_min_array_emtpy_return_null);
    RUN_TEST_CASE(max_min_array, test_max_min_array_singleItem_return_thatItem);
    RUN_TEST_CASE(max_min_array, test_max_min_array_ascendingArray_return_lastForMax_firstForMin);
    RUN_TEST_CASE(max_min_array, test_max_min_array_descendingArray_return_fisrtForMax_lastForMin);
}