// !Write a program which accept string from user and count number of small characters.
/*
Input   :   "Marvellous"
Output  :   9
*/

#include<stdio.h>

int CountSmall(char *str)
{
    int iCountSmall = 0;
    //filter
    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'a') && (*str <= 'z'))
        {
            iCountSmall++;
        }
        str++;
    }
    
    return iCountSmall;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", &arr);

    iRet = CountSmall(arr);

    printf("Number of small letters: %d", iRet);

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity