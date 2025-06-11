// !Write a program which accept string from user and copy the capital characters of that string into another string.

/*
Input : "Marvellous Multi OS"

Output : "MMOS"
*/

#include<stdio.h>

void StrCpyCap(char *src, char *dest)
{
    while((*src != '\0'))
    {
        if((*src >= 'A') && (*src <= 'Z'))
        {
            *dest = *src;
            dest++;
        }
        src++;
    }
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrCpyCap(arr, brr);

    printf("%s", brr);

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity