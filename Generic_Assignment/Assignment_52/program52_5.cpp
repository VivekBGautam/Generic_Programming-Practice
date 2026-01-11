// Q 3. Write a generic program to accept N values from user and
// return Largest element from those values

#include<iostream>
using namespace std;

// -----------------------------------------------------------------------------
// Function Name : AddN
// Description   : This is a generic (template) function that accepts N
//                 values of the same data type, Find largest element from N Values
//                 elements, and returns the summation.
// Input         : T *Arr   - Address of array containing N values
//                 int Size - Number of elements in the array
// Output        : Returns the Largest element from N values
// -----------------------------------------------------------------------------

template <class T>
T Min(T *Arr, int Size)
{
    int iCnt = 0;
    T Min = Arr[0];

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        if(Min > Arr[iCnt])
        {
            Min = Arr[iCnt];
        }
    }

    return Min;
}

// -----------------------------------------------------------------------------
// 
//  Function Name : main Entry point of out program  
//
// -----------------------------------------------------------------------------
int main()
{
    int Arr[] = {10,15,12,13,188,19,20};
    int iRet = Min(Arr, 7);
    cout<<iRet<<"\n";

    cout<<"\n-----------------------------------------\n";

    float Brr[] = {10.5f,15.09f,12.2f,13.5f,188.3f,19.2f,20.3f};
    float fRet = Min(Brr,7);
    cout<<fRet<<"\n";

    return 0;
}
