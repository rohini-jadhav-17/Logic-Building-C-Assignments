//! Draw stack layout of each program separately. Write a recursive program which accept number from user and return largest digit.
/*
Input   : 87983
Output  : 9
*/

#include<stdio.h>

// int Max(int iNo)
// {
//     int iMax = 0, iDigit = 0;
//     while(iNo > 0)
//     {
//         iDigit = iNo % 10;
//         if(iDigit > iMax)
//         {
//             iMax = iDigit;
//         }
//         iNo = iNo / 10;
//     }
//     return iMax;
// }

int Max(int iNo)
{
    static int iMax = 0, iDigit = 0;           //we need to preserve these values hence made static
    if(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit > iMax)
        {
            iMax = iDigit;
        }
        iNo = iNo / 10;
        Max(iNo);
    }
    return iMax;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Max(iValue);
    printf("Largest digit in %d number is : %d", iValue, iRet);

    return 0;
}