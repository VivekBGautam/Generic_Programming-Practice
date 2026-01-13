// Q 3. Write a generic program to Find second Smallest element from array

#include<iostream>
using namespace std;

// -----------------------------------------------------------------------------
// Function Name : SecondMin
// Description   : This is a generic (template) function that accepts N
//                 values of the same data type, And find second Smallest element.
// Input         : T *Arr   - Address of array containing N values
//                 int Size - Number of elements in the array
// Output        : Find second Smallest element
// -----------------------------------------------------------------------------

template <class T>
T SecondMin(T *Arr, int Size)
{
    int iCnt = 0;
    T Min = Arr[0];
    T SecondMin = Arr[1];

    if(Min > SecondMin)
    {
        T Temp = Min;
        Min = SecondMin;
        SecondMin = Temp;
    }

    for(iCnt = 2; iCnt < Size; iCnt++)
    {
        if(Arr[iCnt] < Min)
        {
            SecondMin = Min;
            Min = Arr[iCnt];
        }
        else if((Arr[iCnt] < SecondMin) && (Arr[iCnt] != Min))
        {
            SecondMin = Arr[iCnt];
        }
    }

    return SecondMin;
}

// -----------------------------------------------------------------------------
// 
//  Function Name : main Entry point of out program  
//
// -----------------------------------------------------------------------------
int main()
{
    int Ret;
    float fRet;

    int Arr[] = {10,11,12,15,14,19,20};
    Ret = SecondMin(Arr, 7);
    cout<<"Second Smallest element is : "<<Ret<<"\n";

    cout<<"\n-----------------------------------------\n";

    float Brr[] = {10.5f,12.09f,14.2f,16.5f,19.3f,21.2f,25.3f};
    fRet = SecondMin(Brr,7);
    cout<<"Second Smallest element is : "<<fRet<<"\n";

    return 0;
}
