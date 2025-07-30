// !Write a program which accept one number and position from user and check whether bit at that position is on or off. If bit is one return TRUE otherwise return FALSE.
/*
Input   :   10  2   1010
Output  :   TRUE
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos)
{
    UINT iMask = 1;        
    UINT iResult = 0;

    iMask = iMask << (iPos - 1);        //0000 0000 0000 0000 0000 0000 0000 0010

    iResult = iNo & iMask;              // 1010 & 0010 = 0010

    return (iResult == iMask);
}

int main()
{
    UINT iValue = 0, iLocation = 0;
    bool bRet = false;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    printf("Enter the position :\n");
    scanf("%d", &iLocation);

    bRet = ChkBit(iValue, iLocation);

    if(bRet == true)
    {
        printf("Bit at position %d is ON", iLocation);
    }
    else
    {
        printf("Bit at position %d is OFF", iLocation);
    }

    return 0;
}