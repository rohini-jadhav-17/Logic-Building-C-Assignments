// !Write a program which checks whether 7th, 8th and 9th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
    // mask - 0000 0000 0000 0000 0000 0000 0000 0000
    //        0000 0000 0000 0000 0000 0001 1100 0000 - 0x000001C0
    unsigned int imask = 0x000001C0;
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
        printf("7th, 8th and 9th bit is ON\n");
    }
    else
    {
        printf("Either 7th ,8th and 9th bit is OFF else all bits are OFF\n");
    }

    return 0;
}
