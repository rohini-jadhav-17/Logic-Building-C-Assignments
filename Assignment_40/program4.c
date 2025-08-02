// ! Draw stack layout. Write a recursive program which display below pattern
/*
Output : A B C D E F
*/

#include<stdio.h>

void Display()
{
    static char ch = 'A';

    if(ch < ('A' + 6))              // ch < (ch+6) - wont work - as we are comparing ch with ch only
    {
        printf("%c\t", ch);
        ch++;
        Display();
    }
}

int main()
{
    Display();

    return 0;
}