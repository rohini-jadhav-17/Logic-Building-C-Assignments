// !Write a program which accept string from user and accept one character. Check whether that character is present in string or not.
/*
Input : "Marvellous Multi OS"
         e
Output : TRUE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str, int ch)
{
    bool bFlag = false;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            bFlag = true;
            break;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the string :\n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the character :");
    scanf(" %c", &cValue);

    bRet = ChkChar(Arr, cValue);

    if(bRet == true)
    {
        printf("Character found");
    }
    else
    {
        printf("Character not found");
    }

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity