// !Write a program which accept one number and position from user and off that bit. Return modified number.
/*
Input   :   10  2 1010
Output  :   8
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;        
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);    //0000 0000 0000 0000 0000 0000 0000 0010

    iMask = ~iMask;                 //1111 1111 1111 1111 1111 1111 1111 1101

    iResult = iNo & iMask;          // 1010 & 1101 = 1000

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

    iRet = OffBit(iValue, iLocation);

    printf("Updated number is : %d", iRet);
    
    return 0;
}