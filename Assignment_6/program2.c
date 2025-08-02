// !Accept single digit number from user and print it into word

/*
Input : 9
Output : Nine

Input : 12
Output : Invalid number

Input : -3
Output : Three
*/

#include<stdio.h>

void Display(int iNo)
{
    // string array
    char strArray[][6] = {"Zero", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    
    // filter
    if((iNo >= 10) || (iNo <= -10))
    {
        printf("Invalid number");
        return;
    }

    if((iNo >= 0) && (iNo < 10))
    {
        printf("%s", strArray[iNo]);
    } 
    else if((iNo < 0) && (iNo > -10))
    {
        printf("%s", strArray[-iNo]);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number :");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}

// #As there is no loop in the program, time complexity is not possible to calculatel