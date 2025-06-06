// !Write a program which accept string from user and check whether it contains vowels in it or not.
/*
Input   :   "marvellous"
Output  :   TRUE

Input   :   "xyz"
Output  :   FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    bool bFlag = false;

    //filter
    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') || (*str == 'o') || (*str == 'u') ||
            (*str == 'A') || (*str == 'E') || (*str == 'I') || (*str == 'O') || (*str == 'U'))
        {
            bFlag = true;
        }
        str++;
    }
    
    return bFlag;
}

int main()
{
    char arr[20] = {'\0'};
    bool bRet = false;

    printf("Enter string : \n");
    scanf("%[^'\n']s", &arr);

    bRet = ChkVowel(arr);

    if(bRet == true)
    {
        printf("Contains Vowel");
    }
    else
    {
        printf("There is no Vowel");
    }

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity