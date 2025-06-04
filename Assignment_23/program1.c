// !Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

bool CheckAlpha(char ch)
{
    int iCnt = 0;
    bool bFlag = false;
    
    if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z'))
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
        
    bRet = CheckAlpha(cValue);

    if(bRet == true)
    {
        printf("It is Character.");
    }
    else
    {
        printf("It is not a Character.");
    }

    return 0;
}
