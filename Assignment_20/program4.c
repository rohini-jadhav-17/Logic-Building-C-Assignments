// !Accept N numbers from the user and accept Range, Display all elements from that range.

/*
Input   :   N : 6
            Start : 60
            End : 90
            Elements : 85 66 3 76 93 88
Output  :   85 66 76 88
            
Input   :   N : 6
            Start : 30
            End : 50
            Elements : 85 66 3 76 93 88
Output  :   
*/

#include<stdio.h>
#include<stdlib.h>

void DisplayRange(int Arr[], int iLength, int iStart, int iEnd)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] >= iStart) && (Arr[iCnt] <= iEnd))
        {
            printf("%d\t", Arr[iCnt]);
        }
    }
}

int main()
{
    int iSize = 0, iValue1 = 0, iValue2 = 0, iCnt = 0;
    int *ptr = NULL;

    printf("Enter the size of elements :\n");
    scanf("%d", &iSize);

    printf("Enter the starting point :\n");
    scanf("%d", &iValue1);

    printf("Enter the ending point :\n");
    scanf("%d", &iValue2);

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
    
    DisplayRange(ptr, iSize, iValue1, iValue2);

    free(ptr);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity