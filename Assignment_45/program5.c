//! Write a program which accept matrix from user and check whether the matrix is Sparse Matrix or not.
// Sparse Matrix is a matrix with the majority of its elements equal to zero.
/*
Input :
    1   0   3   0
    0   6   0   0
    0   0   1   0
    9   0   0   9
Output: 
    True 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkSparse(int** arr, int iRow, int iCol)
{
    int i = 0, j = 0, iCount = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(arr[i][j] == 0)
            {
                iCount++;
            }
        }
    }

    return iCount > ((iRow*iCol) - iCount);
}

int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0;
    int **ptr;
    bool bRet = false;

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
    
    bRet = ChkSparse(ptr, iRow, iCol);

    if(bRet)
    {
        printf("Given matrix is a Sparse Matrix");
    }
    else
    {
        printf("Given matrix is not a Sparse Matrix");        
    }    

    return 0;
}