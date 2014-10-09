#include "unity.h"
#include "BinarySearch.h"

void setUp(void){}

void tearDown(void){}

void test_explore_binary_search_1(void)
{
	int array[] = {2, 4, 6, 8};
	int targetIndex = 0;
	
	targetIndex = binarySearch (8, array, 0, 3);
	
	TEST_ASSERT_EQUAL(3, targetIndex);
}

/* 
 *	Test Array = 10,20,30,40,50
 */
void test_explore_binary_search_2(void)
{
	int array[] = {10,20,30,40,50};
	int targetIndex = 0;
	
	targetIndex = binarySearch (20, array, 0, 4);
	
	TEST_ASSERT_EQUAL(1, targetIndex);
}

/* 
 *	Test Array = 4, 8, 16, 24, 32, 36, 40, 44, 48, 52
 */
void test_explore_binary_search_4(void)
{
	int array[] = {4, 8, 16, 24, 32, 36, 40, 44, 48, 52};
	int targetIndex = 0;
	
	targetIndex = binarySearch (32, array, 0, 9);
	
	TEST_ASSERT_EQUAL(4, targetIndex);
}

/* 
 *	Test Array = 10, 40, 10, 12, 14, 16, 60, 1
 */
void test_explore_binary_search_3(void)
{
	int array[] = {20, 40, 60, 80, 100, 120, 140};
	int targetIndex = 0;
	
	targetIndex = binarySearch (234, array, 0, 6);
	
	TEST_ASSERT_EQUAL(-1, targetIndex);
}

