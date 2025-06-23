// !Write a program which accept one number from user and toggle 7th bit of that number. Return modified number.

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);       //0000 0000 --> 0100 0000

    iResult = iNo ^ iMask;              //1000 1001 ^ 0100 0000 = 1100 1001
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue, 7);

    printf("Updated number is : %d\n", iRet);

    return 0;
}