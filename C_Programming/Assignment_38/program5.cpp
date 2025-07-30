//! Write a generic program to accept N values from user and return the smallest values.

#include<iostream>
using namespace std;

template <class T>
T Min(T *arr, int iSize)
{
    T min;
    int i = 0;
    //filter
    if(arr == NULL)
    {
        return 0;
    }
    min = arr[0];
    for(i = 0; i < iSize; i++)
    {
        if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    return min;
}

int main()
{
    int arr[] = {10,20,30,40,5};
    float brr[] = {10.0,2,3.3,5.6,67.4};

    int iSum = Min(arr, 5);
    printf("%d\n", iSum);

    float fSum = Min(brr, 5);
    printf("%f\n", fSum);

    return 0;
}