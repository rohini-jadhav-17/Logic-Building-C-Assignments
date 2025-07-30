// !Accept N numbers from the user and accept one another number as No, return index of first occurence of that No.

/*
Input   :   N : 6
            No : 66
            Elements : 85 66 3 66 93 88
Output  :   1
            
Input   :   N : 6
            No : 12
            Elements : 85 11 3 80 11 88
Output  :   -1
*/

#include<stdio.h>
#include<stdlib.h>

#define INDEX_ERR -1

int FirstOcc(int Arr[], int iLength, int iNo)
{
    int iCnt = 0, index = INDEX_ERR;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            index = iCnt;
            break;
        }
    }

    return index;
}

int main()
{
    int iSize = 0, iValue = 0, iCnt = 0, iRet = 0;
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

    printf("Enter the elements :\n");

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        printf("Enter Element : %d\n", iCnt + 1);
        scanf("%d", &ptr[iCnt]);
    }
    
    iRet = FirstOcc(ptr, iSize, iValue);

    if(iRet == INDEX_ERR)
    {
        printf("There is no such number");
    }
    else
    {
        printf("First occurence of number is %d", iRet);
    }

    free(ptr);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity