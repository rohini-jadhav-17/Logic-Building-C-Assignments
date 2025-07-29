//! Draw stack layout of each program separately. Write a recursive program which accept number from user and return summation of its digits.
/*
Input   : 879
Output  : 24
*/

#include<stdio.h>

int Sum(int iNo)
{
    int iSum = 0, iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
    }
    return iSum;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);
    
    iRet = Sum(iValue);
    printf("%d", iRet);

    return 0;
}