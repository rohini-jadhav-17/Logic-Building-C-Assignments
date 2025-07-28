//! Write a generic program to find largest number from three numbers.

#include<iostream>
using namespace std;

template <class T>
T Max(T no1, T no2, T no3)
{
    T max;
    if((no1 > no2) && (no1 > no3))
    {
        max = no1;
    }
    else if(no2 > no3)
    {
        max = no2;
    }
    else
    {
        max = no3;
    }

    return max;
}

int main()
{
    int iRet = Max(10, 20, 43);
    printf("%d\n", iRet);

    float fRet = Max(17.0f, 89.5f, 2.0f);
    printf("%f\n", fRet);

    return 0;
}