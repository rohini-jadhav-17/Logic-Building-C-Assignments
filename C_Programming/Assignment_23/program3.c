// !Accept a character from user. If it is capital then display all the characters from the input characters till Z. If input character is small then print all the characters in reverse order till a. In other cases return directly.

/*
Input   :   Q
Output  :   Q R S T U V W X Y Z

Input   :   m
Output  :   m l k j i h g f e d c b a

Input   :   4
Output  :   
*/

#include<stdio.h>

void Display(char ch)
{
    char cCount = '\0';

    if(ch >= 'A' && ch <= 'Z')
    {
        for(cCount = ch; cCount <= 'Z'; cCount++, ch++)
        {
            printf("%c", ch);
        }
    }
    else if(ch >= 'a' && ch <= 'z')
    {
        for(cCount = ch; cCount >= 'a'; cCount--, ch--)
        {
            printf("%c", ch);
        }
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the character :\n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}


// * Time Complexity : O(2N) - two for loops
// * N is a natural number
// * Where N >= 0 and N <= Infinity