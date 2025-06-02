// !Accept N numbers from the user and return product of all odd elements.

/*
Input   :   N : 6
            Elements : 15 66 3 76 10 88
Output  :   45
            
Input   :   N : 6
            Elements : 44 66 72 76 10 88
Output  :   0
*/

#include<stdio.h>
#include<stdlib.h>

int Product(int Arr[], int iLength)
{
    int iCnt = 0, iProduct = 1;

    for(iCnt = 0; iCnt < iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) != 0)
        {
            iProduct = Arr[iCnt] * iProduct;
        }
    }

    return iProduct;
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
    
    iRet = Product(ptr, iSize);

    if(iRet == 1)
    {
        printf("Product is 0");
    }
    else
    {
        printf("Product is %d", iRet);
    }

    free(ptr);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity