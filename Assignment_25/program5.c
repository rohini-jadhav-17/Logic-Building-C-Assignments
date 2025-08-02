//! Write a program which accept string from user and count number of white spaces

/*
 Input   :   "marvellous"
 output   :  "0"

 Input   :   "marvellous Info"
 output   :  "1"
*/

#include<stdio.h>

int CountWhite(char *str)
{
    int iCount = 0;

    while(*str != '\0')
    {
        if((*str == ' '))
        {
            iCount++;
        }
        str++;
    }

    return iCount;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter string : \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountWhite(Arr);

    printf("Number of white spaces : %d", iRet);

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity