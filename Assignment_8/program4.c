// !Write a program which accept temperature in Fahrenheit and convert it into celcius. 
// !(1 Celcius = (F - 32) * (5/9))

/*
Input  : 10
Output : -12.2222   (10 - 32) * (5/9)

Input  : 12
Output : -11.11111    (12 - 32) * (5/9)
*/

#include<stdio.h>
#define F_T_CONSTANT 32

double FhtoCs(float fTemp)
{
    double dResult = 0.0;

    dResult = ((fTemp - F_T_CONSTANT) * 5) / 9;

    return dResult;
}

int main()
{
    float fValue = 0.0f;
    double dRet = 0.0;

    printf("Enter Temperature in Fahrenheit :\n");
    scanf("%f", &fValue);

    dRet = FhtoCs(fValue);

    printf("%f Fahrenheit is converted into celcius is %f", fValue, dRet);
    
    return 0;
}

// #As there is no loop in the program, time complexity is not possible to calculate