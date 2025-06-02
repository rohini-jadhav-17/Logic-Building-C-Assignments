// !Accept N numbers from the user and accept one another number as No, check whether No is present or not.

/*
Input   :   N : 6
            No : 66
            Elements : 85 66 3 66 93 88
Output  :   TRUE
            
Input   :   N : 6
            No : 12
            Elements : 85 11 3 80 11 88
Output  :   FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    bool bFlag = false;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bFlag = true;
        }
    }

    return bFlag;
}

int main()
{
    int iSize = 0, iValue = 0, iCnt = 0;
    bool bRet = false;
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
    
    bRet = Check(ptr, iSize, iValue);

    if(bRet == true)
    {
        printf("%d is present", iValue);
    }
    else
    {
        printf("%d is not present", iValue);
    }

    free(ptr);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity