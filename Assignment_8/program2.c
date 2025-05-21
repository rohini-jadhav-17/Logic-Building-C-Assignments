// !Write a program which accept width and height of rectangle from user and calculate its area. (Area = Width * height)

/*
Input : 5.3  9.78
Output : 51.834
*/

#include<stdio.h>

double ReactArea(float fWidth, float fHeight)
{
    double dArea = 0.0;

    dArea = fWidth * fHeight;
    
    return dArea;
}

int main()
{
    float fValue1 = 0.0f, fValue2 = 0.0f;
    double dRet = 0.0;

    printf("Enter width :\n");
    scanf("%f", &fValue1);

    printf("Enter height :\n");
    scanf("%f", &fValue2);

    dRet = ReactArea(fValue1, fValue2);

    printf("Area of rectangle is %lf", dRet);
    
    return 0;
}

// #As there is no loop in the program, time complexity is not possible to calculate