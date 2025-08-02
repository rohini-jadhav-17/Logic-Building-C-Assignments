// !Accept N numbers from the user and accept one another number as No, return the frequency of No from it.

/*
Input   :   N : 6
            No : 66
            Elements : 85 66 3 66 93 88
Output  :   2
            
Input   :   N : 6
            No : 12
            Elements : 85 11 3 80 11 88
Output  :   0
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, count = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int iSize = 0, iValue = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the size of elements :\n");
    scanf("%d", &iSize);

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(NULL == ptr)
    {
        printf("Unable to allocate the memory\n");
        return -1;
    }

    printf("Enter the elements :");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        scanf("%d", &ptr[iCnt]);
    }
    
    iRet = Frequency(ptr, iSize, iValue);

    printf("%d", iRet);

    free(ptr);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity