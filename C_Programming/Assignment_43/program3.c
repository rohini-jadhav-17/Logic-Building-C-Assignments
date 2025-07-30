//! Draw stack layout of each program separately. Write a recursive program which accept string from user and count number of small characters.
/*
Input   : HElloWOrlD
Output  : 5
*/

#include<stdio.h>

// int Small(char *str)
// {
//     int iCount = 0;
//     while(*str != '\0')
//     {
//         if((*str >= 'a') && (*str <= 'z'))
//         {
//             iCount++;
//         }
//         str++;
//     }
//     return iCount;
// }

int Small(char *str)
{
    static int iCount = 0;            //we need to preserve this value hence made static
    if(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCount++;
        }
        str++;
        Small(str);
    }
    return iCount;
}

int main()
{
    int iRet = 0;
    char arr[20];

    printf("Enter string : \n");
    scanf("%[^'\n']s", arr);

    iRet = Small(arr);
    printf("Number of small characters are : %d", iRet);

    return 0;
}