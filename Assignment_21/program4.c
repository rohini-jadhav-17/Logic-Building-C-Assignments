// !Accept N numbers from the user and display all such numbers which contains 3 digits in it.

/*
Input   :   N : 6
            Elements : 8225 665 3 76 953 858
Output  :   665 953 858
            
*/

#include<stdio.h>
#include<stdlib.h>

void Digits(int Arr[], int iLength)
{
    int iCnt = 0, iNo = 0, count = 0;
    
    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        iNo = Arr[iCnt];
        while(iNo != 0)
        {
            count++;
            iNo = iNo / 10;
        }
        if(count == 3)
        {
            printf("%d\t", Arr[iCnt]);
        }
        count = 0;
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
    
    Digits(ptr, iSize);

    free(ptr);

    return 0;
}

// * Time Complexity : O(N^2) - two loops
// * N is a natural number
// * Where N >= 0 and N <= Infinity