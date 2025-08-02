// !Accept N numbers from the user and return the frequency of 11 from it.

/*
Input   :   N : 6
            Elements : 85 66 3 80 93 88
Output  :   0

Input   :   N : 6
            Elements : 85 11 3 80 11 88
Output  :   2
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength)
{
    int iCnt = 0, iEleCount = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            iEleCount++;
        }
    }

    return iEleCount;
}

int main()
{
    int iSize = 0, iRet = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the size of elements :\n");
    scanf("%d", &iSize);

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
    
    iRet = Frequency(ptr, iSize);

    printf("%d", iRet);

    free(ptr);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity