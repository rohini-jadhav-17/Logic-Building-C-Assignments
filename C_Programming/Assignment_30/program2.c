// !Write a program which checks whether 5th and 18th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
    // mask - 0000 0000 0000 0000 0000 0000 0000 0000
    //        0000 0000 0000 0010 0000 0000 0001 0000 - 0x00020010
    unsigned int imask = 0x00020010;
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
        printf("5th and 18th bit is ON\n");
    }
    else
    {
        printf("Either 5th or 18th bit is OFF else both bits are OFF\n");
    }

    return 0;
}
