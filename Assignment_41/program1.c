//! Draw stack layout of each program separately. Write a recursive program which display below pattern
/*
Input : 5
Output : *  *  *  *  *
*/
#include<stdio.h>

void Display(int iNo)
{
    if(iNo > 0)
    {
        printf("*\t");
        Display(iNo-1);         //dont do iNo--; Display(iNo); //the value is not preserved
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}