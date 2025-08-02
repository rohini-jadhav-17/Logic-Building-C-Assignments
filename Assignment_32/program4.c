// !Write a program which accept one number and position from user and toggle that bit. Return modified number.
/*
Input   :   10  3 1010
Output  :   14    1110
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;        
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);    //0000 0000 0000 0000 0000 0000 0000 0100

    iResult = iNo ^ iMask;          // 1010 ^ 0100 = 1110

    return iResult;
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    UINT iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    printf("Enter the position :\n");
    scanf("%d", &iLocation);

    iRet = ToggleBit(iValue, iLocation);

    printf("Updated number is : %d", iRet);
    
    return 0;
}