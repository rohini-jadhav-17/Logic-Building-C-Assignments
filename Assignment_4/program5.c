// !Write the program which accept the number from user and return difference between summation of all its factors and non factors
/*
Input : 12
Output : 16 - 50 = -34
*/

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0, iSum1 = 0, iSum2 = 0;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)   //factors
        {
            iSum1 = iSum1 + iCnt;
        }
        else                    //non- factors
        {
            iSum2 = iSum2 + iCnt;   
        }
    }
    return iSum1 - iSum2;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity