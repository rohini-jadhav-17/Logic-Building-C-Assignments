//! Draw stack layout of each program separately. Write a recursive program which display below pattern
/*
Input : 6
Output : a  b  c  d  e  f
*/
#include<stdio.h>

void Display(int iNo)
{
    static int i = 0;
    if(iNo != 0)
    {
        printf("%c\t",('a'+i));
        i++;
        Display(iNo-1);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter number :\n");
    scanf("%d", &iValue);

    Display(iValue);

    return 0;
}