//! Write generic program which accept N values and reverse the contents.
/*
Input   :   10  20  30  10  30  40  10  40  10
Output  :   10  40  10  40  30  10  30  20  10
*/

#include<iostream>
using namespace std;

template <class T>
void Reverse(T *arr, int iSize)
{
    int i = 0;
    T temp = 0;
    
    for(i = 0; i <= (iSize/2); i++)
    {
        temp = arr[i];
        arr[i] = arr[iSize - i - 1];
        arr[iSize - i -1] = temp;
    }
}

int main()
{
    int arr[] = {10,20,30,10,30,40,10,40,10};

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\n";
    Reverse(arr,9);

    for(int i = 0; i < 9; i++)
    {
        cout<<arr[i]<<"\t";
    }

    return 0;
}