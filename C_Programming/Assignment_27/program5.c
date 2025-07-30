// !Write a program which accept string from user and concat second string after first string. (Implement strcat() function)

/*
Input : "Marvellous Infosystems"
        "Logic Building"

Output : "Marvellous Infosystems Logic Building"
*/

#include<stdio.h>

void StrCatX(char *src, char *dest)
{
    while((*src != '\0'))       //traverse first string till end
    {
        src++;
    }
    
    while(*dest != '\0')        //copy contents of destination in source
    {
        *src = *dest;
        src++;
        dest++;
    }
    dest = '\0';
}

int main()
{
    char arr[50] = "Marvellous Infosystems ";
    char brr[30] = "Logic Building";

    StrCatX(arr, brr);

    printf("%s", arr);

    return 0;
}


// * Time Complexity : O(2N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity