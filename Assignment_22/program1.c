// !Accept Character from user and check whether it is alphabet or not (A-Z a-z)

/*
Input   :   F
Output  :   TRUE
            
Input   :   &
Output  :   FALSE
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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
