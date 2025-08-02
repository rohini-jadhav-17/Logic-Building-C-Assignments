// !Write a program which accept number from user and display below pattern

/*
Input : 5
Output: *   *   *   *   *   #   #   #   #   #

Input : -5
Output: *   *   *   *   *   #   #   #   #   #

Input : 2
Output: *   *   #   #
*/

#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }
    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("#\t");
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

// * Time Complexity : O(2N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity