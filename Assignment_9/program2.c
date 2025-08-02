// !Write a program which accept number from user and check whether it contains 0 or not.

/*
Input  :  2395
Output :  There is no zero

Input  :  1018
Output :  It contains zero

Input  :  9000
Output :  It contains zero
*/

#include<stdio.h>
#include<stdbool.h>
#define TRUE 1
#define FALSE 0

bool CheckZero(int iNo)
{
    int iDigit = 0;
    bool bFlag = FALSE;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit == 0)
        {
            bFlag = TRUE;
        }
    }
    return bFlag;
}

int main()
{
    int iValue = 0;
    bool bRet = FALSE;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("It contains Zero");
    }
    else
    {
        printf("There is no Zero");
    }

    return 0;
}