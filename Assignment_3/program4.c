// !Accept one character from user and convert case of that character
// # input : a  # output : A

// # input : D # output : d

#include<stdio.h>

void DisplayCovert(char cValue)
{
    if((cValue >= 'A') && (cValue <= 'Z'))      //A=65 Z=90
    {
        printf("%c", cValue + 32);                  //  97 - 65 = 32
    }
    else if((cValue >= 'a') && (cValue <= 'z'))     //a=97 z=122
    {
        printf("%c", cValue - 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    DisplayCovert(cValue);
    return 0;
}