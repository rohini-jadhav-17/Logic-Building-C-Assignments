//! Write a program which accept string from user and convert it into lower case.

/*
 Input   :   "Marvellous Multi"
 output   :  "marvellous multi"
*/

#include<stdio.h>

void StrlwrX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *str = *str + 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    StrlwrX(Arr);

    printf("Modified string is :%s", Arr);

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity