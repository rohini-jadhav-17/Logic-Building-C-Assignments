//! Draw stack layout of each program separately. Write a recursive program which accept number from user and return smallest digit.
/*
Input   : 87983
Output  : 3
*/

#include<stdio.h>

// int Min(int iNo)
// {
//     int iMin = 9, iDigit = 0;
//     while(iNo > 0)
//     {
//         iDigit = iNo % 10;
//         if(iDigit < iMin)
//         {
//             iMin = iDigit;
//         }
//         iNo = iNo / 10;
//     }
//     return iMin;
// }

int Min(int iNo)
{
    static int iMin = 9, iDigit = 0;        //we need to preserve these values hence made static
    while(iNo > 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Min(iNo);
    }
    return iMin;
}

int main()
{
    int iRet = 0, iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    iRet = Min(iValue);
    printf("Smallest digit in %d number is : %d", iValue, iRet);

    return 0;
}