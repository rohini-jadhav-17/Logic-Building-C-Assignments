//! Draw stack layout of each program separately. Write a recursive program which accept number from user and return its reverse number.
/*
Input   : 523
Output  : 325
*/

#include<stdio.h>

// int Reverse(int iNo)
// {
//     int iRev = 0, iDigit = 0;
//     while(iNo > 0)
//     {
//         iDigit = iNo % 10;
//         iRev = iRev * 10 + iDigit;
//         iNo = iNo / 10;
//     }
//     return iRev;
// }

int Reverse(int iNo)
{
    static int iRev = 0, iDigit = 0;        //we need to preserve these values hence made static
    if(iNo > 0)
    {
        iDigit = iNo % 10;
        iRev = iRev * 10 + iDigit;
        iNo = iNo / 10;
        Reverse(iNo);
    }
    return iRev;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Reverse(iValue);
    printf("Reverse number is : %d", iRet);

    return 0;
}