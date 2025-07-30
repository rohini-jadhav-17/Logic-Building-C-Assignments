// !Accept one character from user and check whether that character is vowel or not(a, e, i, o, u)
// # input : E  # output : True

// # input : D # output : False

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char cValue)
{
    bool bRet = false;

    if(((cValue == 'a') || (cValue == 'e') || (cValue == 'i') || (cValue == 'o') || (cValue == 'u')))
    {
        bRet = true;    
    }
    else if(((cValue == 'A') || (cValue == 'E') || (cValue == 'I') || (cValue == 'O') || (cValue == 'U')))
    {
        bRet = true;
    }
    else
    {
        bRet = false;
    }

    return bRet;
}

int main()
{
    char cValue = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c", &cValue);

    bRet = CheckVowel(cValue);
    if(bRet == true)
    {
        printf("%c is vowel\n", cValue);
    }
    else
    {
        printf("%c is not vowel\n", cValue);
    }

    return 0;
}