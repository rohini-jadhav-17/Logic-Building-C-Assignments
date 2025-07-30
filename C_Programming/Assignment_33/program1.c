// !Write a program which accept one number from user and count number of on(1) bits in it without using % an / operator.
/*
Input   :   11
Output  :   3
*/
/*
    Below approach is Brian Kernighan's Algorithm
    Algorithm:
            Start
                Initialize count = 0
                If integer n is not zero
                    1. Do bitwise & with (n-1) and assign value back to n
                        n = n & (n-1)
                    2. Increment count by 1
                    3. repeat loop
                else
                    return count
            Stop
            1011
          & 1010 --> 1010 --> 1
            1010
          & 1001 --> 1000 --> 2
            1000
          & 0111 --> 0000 --> 3
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

int main()
{
    UINT iValue = 0, iRet = 0;
    
    printf("Enter the number :\n");
    scanf("%d", &iValue);

    iRet = CountOne(iValue);

    printf("Number of on(1) bits are : %d", iRet);
    
    return 0;
}
