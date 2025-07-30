// !Write a program which accept two numbers from user and check whether 9th or 12th bit is on or off.
/*
Input   :   257
Output  :   TRUE
*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool ChkBit(UINT iNo)
{
    UINT iMask1 = 0x00000100;           //  0000 0000 0000 0000 0000 0001 0000 0000
    UINT iMask2 = 0x00000800;           //  0000 0000 0000 0000 0000 1000 0000 0000

    return (iNo & iMask1) || (iNo & iMask2);
}

int main()
{
    UINT iValue = 0;
    bool bRet = false;
    
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    bRet = ChkBit(iValue);

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
