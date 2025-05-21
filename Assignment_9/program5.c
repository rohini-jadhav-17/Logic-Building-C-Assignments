// !Write a program which accept number from user and count frequency of such a  digits which are less than 6

/*
Input  :  2395
Output :  3

Input  :  1018
Output :  3

Input  :  9404
Output :  3
*/

#include<stdio.h>

int Count(int iNo)
{
    int iDigit = 0, iCnt = 0;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    while(iNo != 0) 
    {
        iDigit = iNo % 10;
        iNo = iNo / 10;
        if(iDigit < 6)
        {
            iCnt++;
        }
    }
    return iCnt;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = Count(iValue);

    printf("%d", iRet);

    return 0;
}