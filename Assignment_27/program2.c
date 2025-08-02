// !Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy() function)
//!Note : If third parameter is greater than the size of source string then copy whole string into destination

/*
Input : "Marvellous Multi OS"
        10

Output : "Marvellous"
*/

#include<stdio.h>

void StrNCpyX(char *src, char *dest, int iCnt)
{
    while((*src != '\0') && (iCnt !=0))
    {
        *dest = *src;
        src++;
        dest++;
        iCnt--;
    }
}

int main()
{
    char arr[30] = "Marvellous Multi OS";
    char brr[30] = {'\0'};

    StrNCpyX(arr, brr, 10);

    printf("%s", brr);

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity