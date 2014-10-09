#include "BinarySearch.h"
#include <stdio.h>

int binarySearch(int target,int array[],int startIndex,int endIndex)
{
    if (startIndex < 0 || endIndex < 0 || startIndex > endIndex || endIndex < startIndex)
        return -1;

    int middleIndex = (startIndex + endIndex) / 2 ;
    
        
    
    if (target < array[middleIndex] )
        binarySearch(target,array,startIndex,middleIndex-1);
    else if (target > array[middleIndex] )
        binarySearch(target,array,middleIndex+1,endIndex);
    else if (target == array[middleIndex] )
        return middleIndex ;
    else
        return -1 ;

}