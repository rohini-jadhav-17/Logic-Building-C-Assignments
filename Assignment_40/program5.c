// ! Draw stack layout. Write a recursive program which display below pattern
/*
Output : a b c d e f
*/

#include<stdio.h>

void Display()
{
    static char ch = 'a';

    if(ch < ('a' + 6))              // ch < (ch+6) - wont work - as we are comparing ch with ch only
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