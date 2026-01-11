// Q 3. Write a generic program to accept N values from user and
// return addition (summation) of those values

#include<iostream>
using namespace std;

// -----------------------------------------------------------------------------
// Function Name : AddN
// Description   : This is a generic (template) function that accepts N
//                 values of the same data type, performs addition of all
//                 elements, and returns the summation.
// Input         : T *Arr   - Address of array containing N values
//                 int Size - Number of elements in the array
// Output        : Returns the summation of N values
// -----------------------------------------------------------------------------

template <class T>
T AddN(T *Arr, int Size)
{
    int iCnt = 0;
    T Sum = 0;

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        Sum = Sum + Arr[iCnt];
    }

    return Sum;
}

// -----------------------------------------------------------------------------
// Function Name : main
// Description   : This is the entry point of the program. It demonstrates
//                 the use of the generic AddN function by passing integer
//                 and floating-point arrays and displays their summation.
// -----------------------------------------------------------------------------
int main()
{
    int Arr[] = {10,15,12,13,188,19,20};
    int iRet = AddN(Arr, 7);
    cout<<iRet<<"\n";

    cout<<"\n-----------------------------------------\n";

    float Brr[] = {10.5f,15.09f,12.2f,13.5f,188.3f,19.2f,20.3f};
    float fRet = AddN(Brr,7);
    cout<<fRet<<"\n";

    return 0;
}
