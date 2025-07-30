// !Write a program which checks whether 15th bit is ON or OFF.

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
    // mask - 0000 0000 0000 0000 0000 0000 0000 0000
    //        0000 0000 0000 0000 0100 0000 0000 0000 - 0x00004000
    unsigned int imask = 0x00004000;
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
        printf("15th bit is ON\n");
    }
    else
    {
        printf("15th bit is OFF\n");
    }

    return 0;
}
