//! Write a program which accept string from user and display only digits from that string.

/*
 Input   :   "marve89llous121"
 output   :  "89121"
*/

#include<stdio.h>

void DisplayDigit(char *str)
{
    while(*str != '\0')
    {
        if((*str >= '0') && (*str <= '9'))
        {
            printf("%c", *str);
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    DisplayDigit(Arr);

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity