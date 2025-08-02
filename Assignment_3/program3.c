// !write a program which accept one number from user and print even factors of that number
// # input : 36
// # output : 2 4 6 12 18

#include<stdio.h>

void DisplayFactors(int iNo)
{
    int iCnt = 0;
    
    // Updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if(((iNo % iCnt) == 0) && ((iCnt % 2) == 0))
        {
            printf("%d ", iCnt);
        }
    }
   
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    DisplayFactors(iValue);
    return 0;
}