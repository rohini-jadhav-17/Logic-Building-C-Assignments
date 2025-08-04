//! Write a program which accept matrix from user and reverse the contents of each row.
/*
Input :
    3   2   5   9
    4   3   2   2
    8   4   1   9
    3   9   7   5
Output: 
    9   5   2   3
    2   2   3   4
    9   1   4   8
    5   7   9   3    
*/

#include<stdio.h>
#include<stdlib.h>

void ReverseRows(int** arr, int iRow, int iCol)
{
    int i = 0, j = 0, temp = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol/2; j++)
        {
            temp = arr[i][j];
            arr[i][j] = arr[i][iCol-1-j];
            arr[i][iCol-1-j] = temp;
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
    
    ReverseRows(ptr, iRow, iCol);

    printf("Reverse Rows in Matrix are : \n");
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