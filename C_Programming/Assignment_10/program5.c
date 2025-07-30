// !Write a program which accepts number from user and return the difference between the summation of even digits and summation of odd digits.
/*
Input  : 2395
Output : -15  (2-17)

Input  : 1018
Output : 6    (8 - 2)

Input  : 8440
Output : 16  (16 - 0)
*/

#include<stdio.h>

int CountDiff(int iNo)
{
    int iDigit = 0, iEvenSum = 0, iOddSum;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(((iDigit % 2) == 0))
        {
            iEvenSum = iEvenSum + iDigit;
        }
        else
        {
            iOddSum = iOddSum + iDigit;
        }
        iNo = iNo / 10;
    }
    return iEvenSum - iOddSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = CountDiff(iValue);
    printf("%d", iRet);

    return 0;
}