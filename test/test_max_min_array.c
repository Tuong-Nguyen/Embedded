//
// Created by nctuong on 7/6/2017.
//

#include <unity.h>
#include "../src/max_min_array.h"

void test_max_min_array_emtpy_return_null() {
    int array[] = {};
    int size = sizeof(array) / sizeof(int);
    int * min;
    int * max;
    max_min(array, array + size, &max, &min);
    TEST_ASSERT_EQUAL_PTR(0, max);
    TEST_ASSERT_EQUAL_PTR(0, min);
}

void test_max_min_array_singleItem_return_thatItem() {
    int array[] = {1};
    int size = sizeof(array) / sizeof(int);
    int * min;
    int * max;
    max_min(array, array + size, &max, &min);
    TEST_ASSERT_EQUAL_PTR(array, max);
    TEST_ASSERT_EQUAL_PTR(array, min);
}

void test_max_min_array_ascendingArray_return_lastForMax_firstForMin() {
    int array[] = {1, 2, 3};
    int size = sizeof(array) / sizeof(int);
    int * min;
    int * max;
    max_min(array, array + size, &max, &min);
    TEST_ASSERT_EQUAL_PTR(array  + 2, max);
    TEST_ASSERT_EQUAL_PTR(array, min);
}

void test_max_min_array_descendingArray_return_fisrtForMax_lastForMin() {
    int array[] = {3, 2, 1};
    int size = sizeof(array) / sizeof(int);
    int * min;
    int * max;
    max_min(array, array + size, &max, &min);
    TEST_ASSERT_EQUAL_PTR(array, max);
    TEST_ASSERT_EQUAL_PTR(array + 2, min);
}

