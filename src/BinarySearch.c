#include <stdio.h>
#include "BinarySearch.h"

int binarySearch (int target, int array[], int startIndex, int endIndex)	{
	int midRange, targetIndex;
	
	midRange = (endIndex + startIndex)/2;
	printf("Mid range = %d\n", midRange);

	if(array[midRange] == target)	{
		printf("endIndex value = %d\n" , array[midRange]);
		targetIndex = midRange;
		printf("targetIndex = %d\n" , targetIndex);
		return targetIndex;
	}
	
	else if(startIndex == endIndex)
		return -1;
		
	else if(array[midRange] < target)
		startIndex = midRange + 1;
	
	else if(array[midRange] > target)
		endIndex = midRange;
		
		
	binarySearch (target, array, startIndex, endIndex);
}
