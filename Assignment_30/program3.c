// !Write a program which checks whether 7th, 15th, 21st and 28th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
    // mask - 0000 0000 0000 0000 0000 0000 0000 0000
    //        0000 1000 0001 0000 0100 0000 0100 0000 - 0x08104040
    unsigned int imask = 0x08104040;
    unsigned int iResult = 0;

    iResult = imask & iNo;

    return (iResult == imask);
}

int main()
{
    unsigned int iValue = 0;
    bool bRet = false;

    printf("Enter the number:\n");
    scanf("%d", &iValue);

    bRet = CheckBit(iValue);

    if(bRet == true)
    {
        printf("7th, 15th, 21st and 28th bit is ON\n");
    }
    else
    {
        printf("Either 7th or 15th or 21st or 28th bit is OFF else all bits are OFF\n");
    }

    return 0;
}
