// Q 3. Write a generic program to check weather the array is shorted

#include<iostream>
using namespace std;

// -----------------------------------------------------------------------------
// Function Name : CheckShorted
// Description   : This is a generic (template) function that accepts N
//                 values of the same data type, And ckeck weather array is shorted.
// Input         : T *Arr   - Address of array containing N values
//                 int Size - Number of elements in the array
// Output        : Check weather array is shorted or not
// -----------------------------------------------------------------------------

template <class T>
bool CheckShorted(T *Arr, int Size)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt < Size - 1 ; iCnt++)
    {
        if(Arr[iCnt] > Arr[iCnt + 1])
        {
            return false;
        }
    }

    return true;
}

// -----------------------------------------------------------------------------
// 
//  Function Name : main Entry point of out program  
//
// -----------------------------------------------------------------------------
int main()
{
    bool bRet = false;

    int Arr[] = {10,11,12,15,14,19,20};
    bRet = CheckShorted(Arr, 7);

    if(bRet == true)
    {
        cout<<"Array is shorted\n";
    }
    else 
    {
        cout<<"Array is not shorted\n";
    }

    cout<<"\n-----------------------------------------\n";

    float Brr[] = {10.5f,12.09f,14.2f,16.5f,19.3f,21.2f,25.3f};
    bRet = CheckShorted(Brr,7);

    if(bRet == true)
    {
        cout<<"Array is shorted\n";
    }
    else 
    {
        cout<<"Array is not shorted\n";
    }

    return 0;
}
