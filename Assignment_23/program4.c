// !Accept a character from user and check whether it is special symbol or not (!, @, #, $, %, ^, &, *).

/*
Input   :   %
Output  :   TRUE

Input   :   d
Output  :   FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool ChkSpecial(char ch)
{
    bool bFlag = false;
    if(ch == '!' || ch == '@' || ch == '#' || ch == '$' || ch == '%' || ch == '^' || ch == '&' || ch == '*')
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }

    return bFlag;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    bRet = ChkSpecial(cValue);

    if(bRet == true)
    {
        printf("It is special character");
    }
    else
    {
        printf("It is not special character");
    }

    return 0;
}