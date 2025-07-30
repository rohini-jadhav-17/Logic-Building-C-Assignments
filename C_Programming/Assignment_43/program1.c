//! Draw stack layout of each program separately. Write a recursive program which accept string from user and count white spaces.
/*
Input   : HE llo WOr lD
Output  : 3
*/

#include<stdio.h>

// int WhiteSpace(char *str)
// {
//     static int iCount = 0;
//     while(*str != '\0')
//     {
//         if(*str == ' ')
//         {
//             iCount++;
//         }
//         str++;
//     }
//     return iCount;
// }

int WhiteSpace(char *str)
{
    static int iCount = 0;

    if(*str != '\0')
    {
        if(*str == ' ')
        {
            iCount++;
        }
        str++;
        WhiteSpace(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    iRet = WhiteSpace(arr);
    printf("Number of white spaces are : %d", iRet);

    return 0;
}