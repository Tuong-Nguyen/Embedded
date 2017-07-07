//
// Created by nctuong on 7/7/2017.
//

#include <mem.h>
#include "unity_fixture.h"

TEST_GROUP(sprintf);
static char output[100];

static void testOutput(int charsWritten, const char *expected) {
    TEST_ASSERT_EQUAL(strlen(expected), charsWritten);
    TEST_ASSERT_EQUAL_STRING(expected, output);
    TEST_ASSERT_BYTES_EQUAL(0xaa, output[strlen(expected) + 1]);
}

TEST_SETUP(sprintf) {
    memset(output, 0xaa, sizeof(output));
};

TEST_TEAR_DOWN(sprintf) {};

TEST(sprintf, NoFormatOperations) {
    char * str = "hey";
    int charsWritten = sprintf(output, str);
    testOutput(charsWritten, str);
}

TEST(sprintf, InsertString) {
    char * expected = "Hello World\n";
    int charsWritten = sprintf(output, "Hello %s\n", "World");
    testOutput(charsWritten, expected);
}

TEST_GROUP_RUNNER(sprintf) {
    RUN_TEST_CASE(sprintf, NoFormatOperations);
    RUN_TEST_CASE(sprintf, InsertString);
}