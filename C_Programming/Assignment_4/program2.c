// !Write the program which accept the number from user and display its factors in decreasing order
/*
Input : 12
Output : 144 --- 6 4 3 2 1
*/

#include<stdio.h>

void FactRev(int iNo)
{
    int iCnt = 0;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d\t", iCnt);
        }
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}

// * Time Complexity : O(N/2)
// * N is a natural number
// * Where N >= 0 and N <= Infinity