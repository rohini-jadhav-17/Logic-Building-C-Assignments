// !Write a program which accept string from user and return the difference between the frequency of small characters and frequency of capital characters.
/*
Input   :   "MarvellouS"
Output  :   6   (8-2)
*/

#include<stdio.h>

int Difference(char *str)
{
    int iCountSmall = 0, iCountCap = 0;
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
        else if((*str >= 'A') && (*str <= 'Z'))
        {
            iCountCap++;
        }
        str++;
    }
    
    return iCountSmall - iCountCap;
}

int main()
{
    char arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", &arr);

    iRet = Difference(arr);

    printf("Difference : %d", iRet);

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity