// !Write a program which accept one number, two positions from user and check whether bit at first or bit at second position is on or off.
/*
Input   :   10  3   7   1010
Output  :   TRUE
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo, UINT iPos1, UINT iPos2)
{
    UINT iMask1 = 1;           
    UINT iMask2 = 1;           

    iMask1 = iMask1 << (iPos1 - 1);      //  0000 0000 0000 0000 0000 0000 0000 0100
    iMask2 = iMask2 << (iPos2 - 1);      //  0000 0000 0000 0000 0000 0000 0100 0000

    return (iNo & iMask1 ) || (iNo & iMask2);
}

int main()
{
    UINT iValue = 0, iPos1 = 0, iPos2 = 0;
    bool bRet = false;
    
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    printf("Enter the first position :\n");
    scanf("%d", &iPos1);

    printf("Enter the second position :\n");
    scanf("%d", &iPos2);

    bRet = ChkBit(iValue, iPos1, iPos2);

    if(bRet == true)
    {
        printf("TRUE");
    }
    else
    {
        printf("FALSE");
    }
    
    return 0;
}
