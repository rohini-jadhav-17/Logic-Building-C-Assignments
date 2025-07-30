// !Accept Character from user and check whether it is small case or not (A-Z)

/*
Input   :   g
Output  :   TRUE
            
Input   :   D
Output  :   FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
    int iCnt = 0;
    bool bFlag = false;
    
    if((ch >= 'a' && ch <= 'z'))
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
        
    bRet = CheckSmall(cValue);

    if(bRet == true)
    {
        printf("It is Small case Character.");
    }
    else
    {
        printf("It is not a Small case Character.");
    }

    return 0;
}
