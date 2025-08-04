//! Write a program which accept matrix from user and check whether the matrix is Identity Matrix or not.
// Identity Matrix is a Square Matrix with 1's along the diagonal from upper left to lower right and 0's in all other positions.
/*
Input :
    1   0   0   0
    0   1   0   0
    0   0   1   0
    0   0   0   1
Output: 
    True 
*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool ChkIdentity(int** arr, int iRow, int iCol)
{
    int i = 0, j = 0;
    bool flag1 = false, flag2 = false;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(i == j && arr[i][j] == 1)
            {
                flag1 = true;
            }
            else if((i > j || i < j) && arr[i][j] == 0)
            {
                flag2 = true;
            }
            else
            {
                flag1 = false;
                flag2 = false;
            }
        }
    }
    return flag1 & flag2;
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
    
    bRet = ChkIdentity(ptr, iRow, iCol);

    if(bRet)
    {
        printf("Given matrix is an Identity Matrix");
    }
    else
    {
        printf("Given matrix is not an Identity Matrix");        
    }

    return 0;
}