// !Write a program to find even factorial of given number

/*
Input : 5
Output: 8   4 * 2 

Input : -5
Output: 8   4 * 2 

Input : 10
Output: 3840   10*8*6*4*2
*/

#include<stdio.h>

int EvenFactorial(int iNo)
{
    int iCnt = 0, iEvenFact = 1;
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
    }

    return iEvenFact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = EvenFactorial(iValue);

    printf("Even Factorial of number is %d", iRet);

    return 0;
}

// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity