// !Write a program which accept radius of circle from the user and calculate its area. Consider the value of PI as 3.14 (Area = PI * radius * radius)

/*
Input : 5.3
Output : 88.2026
*/

#include<stdio.h>
#define PI 3.14

double CircleArea(float fRadius)
{
    double dArea = 0.0;

    dArea = PI * fRadius * fRadius;
    
    return dArea;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter the radius :\n");
    scanf("%f", &fValue);

    dRet = CircleArea(fValue);

    printf("Area of circle is %lf", dRet);

    return 0;
}

// #As there is no loop in the program, time complexity is not possible to calculate