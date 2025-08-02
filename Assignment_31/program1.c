// !Write a program which accept one number from user and off 7th bit of that number if it is on. Return modified number.

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);
    iMask = ~iMask;

    iResult = iNo & iMask;
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = OffBit(iValue, 7);

    printf("Updated number is : %d\n", iRet);

    return 0;
}