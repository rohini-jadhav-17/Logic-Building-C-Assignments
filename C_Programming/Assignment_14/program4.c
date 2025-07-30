// !Accept the number of rows and number of columns from user and display below pattern

/*
Input   :   iRow = 5    iCol = 5
Output  :   1   2   3   4   5
           -1  -2  -3  -4  -5
            1   2   3   4   5
           -1  -2  -3  -4  -5
            1   2   3   4   5
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo = 0;

    for(i = 1; i <= iRow; i++, iNo--)
    {
        for(j = 1, iNo = 1; j <= iCol; j++, iNo++)
        {
            if((i % 2) == 0)
            {
                printf("%d\t", -iNo);
            }
            else
            {
                printf("%d\t", iNo);
            }
        }
        printf("\n");
    }
}

int main()
{
    int iValue1 = 0, iValue2 = 0;

    printf("Enter number of rows and columns :\n");
    scanf("%d %d", &iValue1, &iValue2);

    Pattern(iValue1, iValue2);

    return 0;
}

// * Time Complexity : O(N^2)
// * N is a natural number
// * Where N >= 0 and N <= Infinity