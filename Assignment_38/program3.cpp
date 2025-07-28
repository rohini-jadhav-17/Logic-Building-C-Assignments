//! Write a generic program to accept N values from user and return addition of that values.

#include<iostream>
using namespace std;

template <class T>
T AddN(T *arr, int iSize)
{
    T sum = 0;
    int i = 0;
    //filter
    if(arr == NULL)
    {
        return 0;
    }
    for(i = 0; i < iSize; i++)
    {
        sum = sum + arr[i];
    }

    return sum;
}

int main()
{
    int arr[] = {10,20,30,40,50};
    float brr[] = {10.0,2,3.3,5.6,50.0};

    int iSum = AddN(arr, 5);
    printf("%d\n", iSum);

    float fSum = AddN(brr, 5);
    printf("%f\n", fSum);

    return 0;
}