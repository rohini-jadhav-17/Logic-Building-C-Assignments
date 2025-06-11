// !Write a program which accept string from user and accept one character. Return index of last occurence of that character.
/*
Input : "Marvellous Multi OS"
         M
Output : 11

Input : "Marvellous Multi OS"
         W
Output : -1
*/

#include<stdio.h>

int LastChar(char *str, int ch)
{
    int iCnt = 0, iCount = 0, iLastIndex = 0;

    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;

    for(iCnt = iCount -1; iCnt > 0 ; iCnt--, str--)
    {
        if(*str == ch)
        {
            iLastIndex = iCnt;
            break;
        }
        else
        {
            iLastIndex = -1;
        }
    }

    return iLastIndex;
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

    iRet = LastChar(Arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}



// * Time Complexity : O(2N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity