//! Write a program which accept matrix and one number from user and return frequency of that number.
/*
Input :
    3   2   5   9
    4   3   2   2
    8   4   1   9
    3   9   7   5
No: 9
Output: 3
*/

#include<stdio.h>
#include<stdlib.h>

int Frequency(int* arr, int iRow, int iCol, int iNo)
{
    int i = 0, j = 0, iCount = 0;
    
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(arr[i * iCol + j] == iNo)
            {
                iCount++;
            }
        }
    }
    return iCount;
}
int main()
{
    int iRow = 0, iCol = 0, i = 0, j = 0,iValue = 0, iRet = 0;
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
    
    printf("Enter the number to search :");
    scanf("%d", &iValue);

    iRet = Frequency(ptr, iRow, iCol, iValue);
    printf("%d occurs %d times", iValue, iRet);

    return 0;
}