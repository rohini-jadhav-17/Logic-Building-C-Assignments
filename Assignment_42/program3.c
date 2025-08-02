//! Draw stack layout of each program separately. Write a recursive program which accept string from user and count number of characters.
/*
Input   : Hello
Output  : 5
*/

#include<stdio.h>

int Strlen(char *str)
{
    int iCount = 0;
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter String :\n");
    scanf("%[^'\n']s", arr);
    
    iRet = Strlen(arr);
    printf("%d", iRet);

    return 0;
}