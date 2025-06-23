// !Write a program which accept one number from user and toggle 7th and 10th bit of that number. Return modified number.

#include<stdio.h>
#include<stdlib.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 1;
    UINT iMask2 = 1;
    UINT iResult = 0;

    iMask1 = iMask1 << (iPos1 - 1);       //0000 0000 --> 0100 0000
    iMask2 = iMask2 << (iPos2 - 1);       //0000 0000 0000 --> 0010 0000 0000

    iResult = iNo ^ (iMask1 ^ iMask2);              
    
    return iResult;
}

int main()
{
    UINT iValue = 0, iRet = 0;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue, 7, 10);

    printf("Updated number is : %d\n", iRet);

    return 0;
}