// !write a program which accept one number from user and print factors of that number
// # input : 24
// # output : 1 2 3 4 6 8 12

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
        if((iNo % iCnt) == 0)
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