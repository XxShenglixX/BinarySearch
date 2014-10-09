#include "unity.h"
#include "BinarySearch.h"

void setUp(void)
{
}

void tearDown(void)
{
}

void test_binarySearch_given_array_of_1_10_30_50_and_target_of_1_should_return_index_0()
{
    int array[]= {1,10,30,50};

	TEST_ASSERT_EQUAL(0,binarySearch(1,array,0,3));
}

void test_binarySearch_given_array_of_1_10_30_50_and_target_of_50_should_return_index_3()
{
    int array[]= {1,10,30,50};

	TEST_ASSERT_EQUAL(3,binarySearch(50,array,0,3));
}

void test_binarySearch_given_array_of_1_10_30_50_and_target_of_100_should_return_minus_1()
{
    int array[]= {1,10,30,50};

	TEST_ASSERT_EQUAL(-1,binarySearch(100,array,0,3));
}


void test_binarySearch_given_array_2_4_6_and_target_of_2_should_return_index_0()
{
    int array[]= {2,4,6};

	TEST_ASSERT_EQUAL(0,binarySearch(2,array,0,2));

}

void test_binarySearch_given_array_2_4_6_and_target_of_6_should_return_index_2()
{
    int array[]= {2,4,6};

	TEST_ASSERT_EQUAL(2,binarySearch(6,array,0,2));

}

void test_binarySearch_given_array_2_4_6_and_target_of_1_should_return_minus_1()
{
    int array[]= {2,4,6};

	TEST_ASSERT_EQUAL(-1,binarySearch(1,array,0,2));

}

void test_binarySearch_given_array_2_4_6_8_10_12_14_16_18_20_22_24_26_and_target_of_2_should_return_index_0()
{
    int array[]= {2,4,6,8,10,12,14,16,18,20,22,24,26};

    TEST_ASSERT_EQUAL(0,binarySearch(2,array,0,12));

}

void test_binarySearch_given_array_2_4_6_8_10_12_14_16_18_20_22_24_26_and_target_of_26_should_return_index_12()
{
    int array[]= {2,4,6,8,10,12,14,16,18,20,22,24,26};

    TEST_ASSERT_EQUAL(12,binarySearch(26,array,0,12));

}

void test_binarySearch_given_array_2_4_6_8_10_12_14_16_18_20_22_24_26_and_target_of_16_should_return_index_7()
{
    int array[]= {2,4,6,8,10,12,14,16,18,20,22,24,26};

    TEST_ASSERT_EQUAL(7,binarySearch(16,array,0,12));

}

void test_binarySearch_given_array_2_4_6_8_10_12_14_16_18_20_22_24_26_and_target_of_3_should_return_minus_1()
{
    int array[]= {2,4,6,8,10,12,14,16,18,20,22,24,26};

    TEST_ASSERT_EQUAL(-1,binarySearch(3,array,0,12));

}