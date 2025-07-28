//! Write a generic program to accept N values from user and return the largest values.

#include<iostream>
using namespace std;

template <class T>
T Max(T *arr, int iSize)
{
    T max;
    int i = 0;
    //filter
    if(arr == NULL)
    {
        return 0;
    }
    max = arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] > max)
        {
            max = arr[i];
        }
    }

    return max;
}

int main()
{
    int arr[] = {10,20,30,40,5};
    float brr[] = {10.0,2,3.3,5.6,67.4};

    int iSum = Max(arr, 5);
    printf("%d\n", iSum);

    float fSum = Max(brr, 5);
    printf("%f\n", fSum);

    return 0;
}