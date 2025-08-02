// !Write a program which returns differernce between Even factorial and odd factorial of given number

/*
Input : 5
Output: -7   (8 - 15)

Input : -5
Output: -7   (8 - 15)

Input : 10
Output: 2895   (3840 - 945)
*/

#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0, iEvenFact = 1, iOddFact = 1;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iCnt % 2) == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }

    return iEvenFact - iOddFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Factorial differernce is %d", iRet);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity