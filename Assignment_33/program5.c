// !Write a program which accept one number from user and range of positions from user. Toggle all bits from that range.
/*
Input   :   897     9   13
Output  :   Toggle all bits from position 9 to 13
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

UINT ToggleBitRange(UINT iNo, UINT iStart, UINT iEnd)
{
    UINT iMask = 0;
    int iCnt = 0;

    for(iCnt = iStart; iCnt <= iEnd; iCnt++, iStart++)
    {
        iMask = iMask | (1 << (iStart - 1));        //  0000 0000 0000 0000 0001 1111 0000 0000
    }
    
    return (iNo ^ iMask);
}

int main()
{
    UINT iValue = 0, iPos1 = 0, iPos2 = 0;
    UINT iRet = 0;
    
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    printf("Enter the first position :\n");
    scanf("%d", &iPos1);

    printf("Enter the second position :\n");
    scanf("%d", &iPos2);

    iRet = ToggleBitRange(iValue, iPos1, iPos2);

    printf("%d", iRet);

    return 0;
}
