// !Write a program which accept distance in kilometer and convert it into meter ( 1Km = 1000m)

/*
Input  : 5
Output : 5000

Input  : 12
Output : 12000
*/

#include<stdio.h>
#define KM_TO_M_CONVERSION_UNIT 1000

int KMtoMeter(int iNo)
{
    int iResult = 0;

    iResult = iNo * KM_TO_M_CONVERSION_UNIT;

    return iResult;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter distance :\n");
    scanf("%d", &iValue);

    iRet = KMtoMeter(iValue);

    printf("Km to meter conversion is %d", iRet);
    
    return 0;
}

// #As there is no loop in the program, time complexity is not possible to calculate