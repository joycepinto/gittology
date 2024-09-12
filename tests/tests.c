#include <stdint.h>
#include "unity.h"
#include "sum.h"

void setUp()
{
}

void tearDown()
{
}

void test_both_zeros(void)
{
	TEST_ASSERT_EQUAL(0, sum(0,0));
}

void test_max_value(void)
{
	TEST_ASSERT_EQUAL(INT_MAX, sum(0, INT_MAX));
	TEST_ASSERT_EQUAL(INT_MAX, sum(INT_MAX,0));
	TEST_ASSERT_EQUAL(-2, sum(INT_MAX, INT_MAX));
}

void test_negative_inputs(void)
{
	TEST_ASSERT_EQUAL(0, sum(-1, 1));
	TEST_ASSERT_EQUAL(-1, sum(INT_MAX, INT_MIN));
}

