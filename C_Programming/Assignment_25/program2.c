//! Write a program which accept string from user and convert it into Upper case.

/*
 Input   :   "Marvellous Multi"
 output   :  "MARVELLOUS MULTI"
*/

#include<stdio.h>

void StruprX(char *str)
{
    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    StruprX(Arr);

    printf("Modified string is :%s", Arr);

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity