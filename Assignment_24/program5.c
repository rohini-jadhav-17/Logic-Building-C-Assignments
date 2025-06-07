// !Write a program which accept string from user and display it in reverse order.
/*
Input   :   "marvellous"
Output  :   "suollevram"
*/

#include<stdio.h>

void DisplayReverse(char *str)
{
    int iCount = 0, iCnt = 0;

    //filter
    if(str == NULL)
    {
        return;
    }

    // for counting purpose
    while(*str != '\0')
    {
        iCount++;
        str++;
    }
    str--;
    // for reverse displaying purpose
    for(iCnt = iCount; iCnt > 0; iCnt--, str--)
    {
        printf("%c", *str);
    }
}

int main()
{
    char arr[20] = {'\0'};

    printf("Enter string : \n");
    scanf("%[^'\n']s", &arr);

    DisplayReverse(arr);

    return 0;
}


// * Time Complexity : O(2N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity