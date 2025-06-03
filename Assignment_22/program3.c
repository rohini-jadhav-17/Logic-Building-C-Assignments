// !Accept Character from user and check whether it is digit or not (0-9).

/*
Input   :   7
Output  :   TRUE
            
Input   :   d
Output  :   FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    int iCnt = 0;
    bool bFlag = false;
    
    if((ch >= '0' && ch <= '9'))
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
        
    bRet = CheckDigit(cValue);

    if(bRet == true)
    {
        printf("It is Digit.");
    }
    else
    {
        printf("It is not a Digit.");
    }

    return 0;
}
