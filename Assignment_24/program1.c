// !Write a program which accept string from user and count number of capital characters.
/*
Input   :   "Marvellous Multi OS"
Output  :   4
*/

#include<stdio.h>

int CountCapital(char *str)
{
    int iCountCap = 0;
    //filter
    if(str == NULL)
    {
        return -1;
    }

    while(*str != '\0')
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        str++;
    }
    
    return iCountCap;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", &arr);

    iRet = CountCapital(arr);

    printf("Number of capital letters: %d", iRet);

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity