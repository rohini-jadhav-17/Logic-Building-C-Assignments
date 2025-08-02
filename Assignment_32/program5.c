// !Write a program which accept one number and toggle contents of first and last nibble of the number. (Nibble is a group of four bits)
/*
Input   :   10                  0000 0000 0000 0000 0000 0000 0000 1010
Output  :   0xF000 0005         1111 0000 0000 0000 0000 0000 0000 0101
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
    UINT iMask = 0xF000000F;        
    UINT iResult = 0;

    iResult = iNo ^ iMask;          // 1010 ^ 1111 = 0101

    return iResult;
}

int main()
{
    UINT iValue = 0;
    UINT iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = ToggleBit(iValue);

    printf("Updated number is : %d-->%x", iRet, iRet);
    
    return 0;
}