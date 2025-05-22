// !Accept the number of rows and number of columns from user and display below pattern

/*
Input   :   iRow = 4    iCol = 5
Output  :   2   4   6   8   10
            1   3   5   7   9
            2   4   6   8   10
            1   3   5   7   9
*/
#include<stdio.h>

void Pattern(int iRow, int iCol)
{
    int i = 0, j = 0, iNo1 = 0, iNo2 = 0;

    for(i = 1; i <= iRow; i++)
    {
        for(j = 1, iNo1 = 2, iNo2 = 1; j <= iCol; j++, iNo1 = iNo1 + 2, iNo2 = iNo2 + 2)
        {
            if((i % 2) != 0)
            {
                printf("%d\t", iNo1);
            }
            else
            {
                printf("%d\t", iNo2);
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