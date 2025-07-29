//! Draw stack layout of each program separately. Write a recursive program which accept number from user and return its product digits.
/*
Input   : 523
Output  : 30
*/

#include<stdio.h>

int Product(int iNo)
{
    int iProd = 1, iDigit = 0;
    while(iNo != 0)
    {
        iDigit = iNo % 10;
        iProd = iProd * iDigit;
        iNo = iNo / 10;
    }
    return iProd;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);
    
    iRet = Product(iValue);
    printf("%d", iRet);

    return 0;
}