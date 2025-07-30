// !Write a program which displays ASCII table. Table contains symbol, Decimal, Hexadecimal and Octal representation of every member from 0 to 255.

#include<stdio.h>

void DisplayASCII()
{
    int iSymbol = 0, iCnt = 0;

    printf("**************************************\n");
    printf("Symbol\tDecimal\tHexadecimal\tOctal\n");
    printf("**************************************\n");
    for(iCnt = 0; iCnt <= 255; iCnt++, iSymbol++)
    {
        printf("%c\t", iSymbol);
        printf("%d\t", iSymbol);
        printf("0X%X\t\t", iSymbol);
        printf("0%o\n", iSymbol);
    }    
}

int main()
{
    DisplayASCII();

    return 0;
}


// * Time Complexity : O(N)
// * N is a natural number
// * Where N >= 0 and N <= Infinity