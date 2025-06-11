// !Write a program which accept string from user and reverse that string in place.
/*
Input  : "abcd"
Output : "dcba"
*/

#include<stdio.h>

void StrRevX(char *str)
{
    char *end = {'\0'};
    char temp = '\0';

    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(str < end)
    {
        temp = *str;
        *str = *end;
        *end = temp;

        str++;
        end--;
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter the string : \n");
    scanf("%[^'\n']s", arr);

    StrRevX(arr);

    printf("Modified string is %s", arr);

    return 0;
}



// * Time Complexity : O(2N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity