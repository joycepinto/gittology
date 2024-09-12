#include "unity.h"

extern void test_both_zeros(void);
extern void test_max_value(void);
extern void test_negative_inputs(void);


int main(void)
{
	UnityBegin("sum.c");
	RUN_TEST(test_both_zeros);
	RUN_TEST(test_max_value);
	RUN_TEST(test_negative_inputs);
	UnityEnd();
}


