// !Accept N numbers from the user and display summation of digits of each number.

/*
Input   :   N : 6
            Elements : 8225 665 3 76 953 858
Output  :   17 17 3 13 17 21
            
*/

#include<stdio.h>
#include<stdlib.h>

void DigitsSum(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, iDigit = 0, iSum = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            iNo = iNo / 10;
            iSum = iSum + iDigit;
        }
        printf("%d\t", iSum);
        iDigit = 0;
        iSum = 0;
    }
}

int main()
{
    int iSize = 0, iCnt = 0, iRet = 0;
    int *ptr = NULL;

    printf("Enter the size of elements :\n");
    scanf("%d", &iSize);

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
    
    DigitsSum(ptr, iSize);

    free(ptr);

    return 0;
}

// * Time Complexity : O(N^2) - two loops
// * N is a natural number
// * Where N >= 0 and N <= Infinity