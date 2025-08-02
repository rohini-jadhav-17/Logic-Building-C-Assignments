//! Write a program which accept matrix from user and return the largest number from both the diagonal.
/*
Input :
    3   2   5   9
    4   3   2   2
    8   4   1   5
    3   9   7   5
Output: 9
*/

#include<stdio.h>
#include<stdlib.h>

int MaxDiagonal(int* arr, int iRow, int iCol)
{
    int i = 0, j = 0, iMax = 0;
    //filter
    if(iRow != iCol)
    {
        return -1;
    }

    iMax = arr[0];

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j || j == iCol - i)
            {
                printf("in if");
                if(arr[i * iCol + j] > iMax)
                {
                    iMax = arr[i * iCol + j];
                }
            }
        }
    }
    return iMax;
}

int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0, iRet = 0;
    int *ptr;

    printf("Enter the number of rows :");
    scanf("%d", &iRow);

    printf("Enter the number of columns :");
    scanf("%d", &iCol);

    ptr = malloc((iRow * iCol * sizeof(int)));
    
    printf("Enter the elements :\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &ptr[(i*iCol) + j]);
        }
    }
    
    printf("Entered elements are : \n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", ptr[(i*iCol) + j]);
        }
        printf("\n");
    }
    
    iRet = MaxDiagonal(ptr, iRow, iCol);
    printf("Max of diagonal elements are : %d", iRet);

    return 0;
}