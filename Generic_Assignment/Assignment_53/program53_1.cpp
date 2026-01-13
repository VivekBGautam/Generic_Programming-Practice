// Q 3. Write a generic program to copy one array into anoher array

#include<iostream>
using namespace std;

// -----------------------------------------------------------------------------
// Function Name : CopyArray
// Description   : This is a generic (template) function that accepts N
//                 values of the same data type, And copy into another array.
// Input         : T *Arr   - Address of array containing N values
//                 int Size - Number of elements in the array
// Output        : Copy one array into another array
// -----------------------------------------------------------------------------

template <class T>
void CopyArray(T *Arr, int Size)
{
    int iCnt = 0;
    T Min = Arr[0];
    T Drr[Size];

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        Drr[iCnt] = Arr[iCnt];
    }

    for(iCnt = 0; iCnt < Size; iCnt++)
    {
        cout<<Drr[iCnt]<<"\t";
    }

}

// -----------------------------------------------------------------------------
// 
//  Function Name : main Entry point of out program  
//
// -----------------------------------------------------------------------------
int main()
{
    int Arr[] = {10,15,12,13,188,19,20};
    CopyArray(Arr, 7);

    cout<<"\n-----------------------------------------\n";

    float Brr[] = {10.5f,15.09f,12.2f,13.5f,188.3f,19.2f,20.3f};
    CopyArray(Brr,7);

    return 0;
}
