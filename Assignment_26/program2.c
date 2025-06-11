// !Write a program which accept string from user and accept one character. Return frequency of that character.
/*
Input : "Marvellous Multi OS"
         M
Output : 2
*/

#include<stdio.h>

int CountChar(char *str, int ch)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character :");
    scanf(" %c", &cValue);

    iRet = CountChar(Arr, cValue);

    printf("Character frequency is %d", iRet);

    return 0;
}



// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity