// !Accept numbers from user and display first number in second number of times
// # input : 12 5
// # output : 12 12 12 12 12

// # input : -2 3
// # output : -2 -2 -2

// # input : -2 0
// # output :

#include<stdio.h>

void Display(int iNo, int iFrequency)
{
   int iCnt = 0;
   for(iCnt = 1; iCnt <= iFrequency; iCnt++)
   {
       printf("%d ", iNo);
   }
}

int main()
{
    int iValue = 0, iCount = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    printf("Enter the frequency : ");
    scanf("%d", &iCount);
    
    Display(iValue, iCount);

    return 0;
}