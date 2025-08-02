// !Write a program which accept string from user and accept one character. Return index of first occurence of that character.
/*
Input : "Marvellous Multi OS"
         M
Output : 0

Input : "Marvellous Multi OS"
         W
Output : -1
*/

#include<stdio.h>

int FirstChar(char *str, int ch)
{
    int iCnt = 0, iIndex = 0;
    
    for(iCnt = 0; str[iCnt] != '\0'; iCnt++)
    {
        if(str[iCnt] == ch)
        {
            iIndex = iCnt;
            break;
        }
        else
        {
            iIndex = -1;
        }
    }

    return iIndex;
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

    iRet = FirstChar(Arr, cValue);

    printf("Character location is %d", iRet);

    return 0;
}



// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity