// !Write a program which accept two numbers from user and display position of common on(1) bits from that two numbers.
/*
Input   :   10      15      (1010       1111)
Output  :   2       4
*/

#include<stdio.h>

typedef unsigned int UINT;

//////////////////////////////////////////////////////////////////////////
//  
//  FileName    : program1.c
//  Description : Used to calculate number of on(1) bits in given input
//  Author      : Rohini Jadhav
//  Date        : 25/06/25
//
//////////////////////////////////////////////////////////////////////////
int CountOne(UINT iNo)
{
    int iCount = 0;

    while(iNo > 0)
    {
        iNo = iNo & (iNo - 1);
        iCount++;
    }

    return iCount;
}

////////////////////////////////////////////////////////////////////////
//
//  Filename    : program2.c
//  Description : Used to display on(1) bits
//  Author      : Rohini Jadhav
//  Date        : 25/06/25
//
///////////////////////////////////////////////////////////////////////
void CommonBits(UINT iNo1, UINT iNo2)
{
    int iRet = 0;

    iRet = CountOne(iNo1);
    printf("%d\t", iRet);

    iRet = CountOne(iNo2);
    printf("%d", iRet);
}

int main()
{
    UINT iValue1 = 0, iValue2 = 0;
    
    printf("Enter the first number :\n");
    scanf("%d", &iValue1);

    printf("Enter the second number :\n");
    scanf("%d", &iValue2);

    CommonBits(iValue1, iValue2);
    
    return 0;
}
