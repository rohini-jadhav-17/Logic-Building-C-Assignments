//! Write a program which accept matrix from user and reverse the contents of each column.
/*
Input :
    3   2   5   9
    4   3   2   2
    8   4   1   9
    3   9   7   5
Output: 
    3   9   7   5
    8   4   1   9
    4   3   2   2
    3   2   5   9   
*/

#include<stdio.h>
#include<stdlib.h>

void ReverseCols(int** arr, int iRow, int iCol)
{
    int i = 0, j = 0, temp = 0, iRownew = 0;

    for(i = 0; i < iRow/2; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[iRow-1-i][j];
            arr[iRow-1-i][j] = temp;
        }
    }
}

int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0;
    int **ptr;

    printf("Enter the number of rows :");
    scanf("%d", &iRow);

    printf("Enter the number of columns :");
    scanf("%d", &iCol);

    ptr = (int **)malloc((iRow * sizeof(int)));
    for(i = 0; i < iRow; i++)
    {
        ptr[i] = (int *)malloc(iCol * sizeof(int));
    }
    
    printf("Enter the elements :\n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &ptr[i][j]);
        }
    }
    
    printf("Entered elements are : \n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", ptr[i][j]);
        }
        printf("\n");
    }
    
    ReverseCols(ptr, iRow, iCol);

    printf("Reverse columns in Matrix are : \n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", ptr[i][j]);
        }
        printf("\n");
    }

    return 0;
}