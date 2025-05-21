// !Write the program which accept the number from user and display its multiplication of factors
/*
Input : 12
Output : 144 --- 1 * 2 * 3 * 4 * 6
*/

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt = 0, iMul = 1;
    // updater
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    for(iCnt = 1; iCnt <= (iNo / 2); iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            iMul = iMul * iCnt;
        }
    }
    return iMul;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = MultFact(iValue);
    printf("%d", iRet);

    return 0;
}

// * Time Complexity : O(N/2)
// * N is a natural number
// * Where N >= 0 and N <= Infinity