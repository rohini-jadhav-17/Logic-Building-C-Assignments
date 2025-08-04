//! Write a program which accept matrix from user and display transpose of the matrix.
//Transpose of the given matrix is formed by interchanging the rows and columns of a matrix.
/*
Input:
    3  2  5  9
    4  3  2  2
    8  4  1  5
    3  9  7  5

Output:
    3  4  8  3
    2  3  4  9
    5  2  1  7
    9  2  5  5
*/
#include<stdio.h>
#include<stdlib.h>

void Transpose(int** arr, int iRow, int iCol)
{
    int i = 0, j = 0;

    printf("Transpose Matrix is : \n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", arr[j][i]);
        }
        printf("\n");
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
    
    Transpose(ptr, iRow, iCol);
    
    return 0;
}

//free is remaining