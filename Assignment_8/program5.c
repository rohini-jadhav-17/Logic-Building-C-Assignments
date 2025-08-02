// !Write a program which accept area in square feet and convert it into square meter.
// ! 1 square feet = 0.0929 square meter

/*
Input  : 5
Output : 0.464515

Input  : 7
Output : 0.650321
*/

#include<stdio.h>
#define SF_SM_CONSTANT 0.0929

double SquareMeter(int iValue)
{
    double dResult = 0.0;

    dResult = (iValue * SF_SM_CONSTANT);

    return dResult;
}

int main()
{
    int iValue = 0;
    double dRet = 0.0;

    printf("Enter area in square feet :\n");
    scanf("%d", &iValue);

    dRet = SquareMeter(iValue);

    printf("%d Square feet is converted into square meter is %lf", iValue, dRet);
    
    return 0;
}

// #As there is no loop in the program, time complexity is not possible to calculate