// !Accept Character from user and check whether it is Capital or not (A-Z)

/*
Input   :   F
Output  :   TRUE
            
Input   :   f
Output  :   FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    int iCnt = 0;
    bool bFlag = false;
    
    if((ch >= 'A' && ch <= 'Z'))
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
        
    bRet = CheckCapital(cValue);

    if(bRet == true)
    {
        printf("It is Capital Character.");
    }
    else
    {
        printf("It is not a Capital Character.");
    }

    return 0;
}
