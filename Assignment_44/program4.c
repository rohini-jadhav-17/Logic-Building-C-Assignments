//! Write a program which accept matrix from user and return the largest number from both the diagonal.
/*
Input :
    3   2   5   9
    4   3   2   2
    8   4   1   9
    3   9   7   5
Output: 18 18 15 25
*/

#include<stdio.h>
#include<stdlib.h>

void AddColumn(int** arr, int iRow, int iCol)
{
    int i = 0, j = 0, iSum = 0;

    printf("Additon column wise :");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            iSum = iSum + arr[j][i];
        }
        printf("%d \t", iSum);
        iSum = 0;
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
    
    AddColumn(ptr, iRow, iCol);

    return 0;
}