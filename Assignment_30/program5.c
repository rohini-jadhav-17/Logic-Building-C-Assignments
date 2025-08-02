// !Write a program which checks whether first and last bit is On or OFF. First bit means bit number 1 and last bit means bit number 32.

#include<stdio.h>
#include<stdbool.h>

bool CheckBit(unsigned int iNo)
{
    // mask - 0000 0000 0000 0000 0000 0000 0000 0000
    //        1000 0000 0000 0000 0000 0000 0000 0001 - 0x80000001
    unsigned int imask = 0x80000001;
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
        printf("First and last bit is ON\n");
    }
    else
    {
        printf("Either first or last bit is OFF else all bits are OFF\n");
    }

    return 0;
}
