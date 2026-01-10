// Write a generic program to accept N values and reverse the containts

#include<iostream>

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Namespace     : std
// Description   : Standard C++ namespace which contains predefined classes,
//                 objects and functions such as cout and cin
//
////////////////////////////////////////////////////////////////////////////////////////////////////
using namespace std;

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : SearchLast
// Description   : Generic function which accepts N values and search last occurance of any  specific value
// Input         : T Arr   | Address of elements of an Array
//                 int iSize | Number of times the value should be printed
//                 T No      | Value of any data type to be search
// Output        : Return last occurance of given value
// Author        : Vivek Bjauraj Gautam
// Date          : 07-01-2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
T SearchLast(T *Arr, int iSize, T No)
{
    int iCnt = 0;
    int iOcc = -1;
    int iPos = 0;

    for(iCnt = 0; iCnt < iSize; iCnt++)
    {
        iOcc++;
        if(Arr[iCnt] == No)
        {
            iPos = iOcc;
        }
    }

    return iPos;
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : main
// Description   : Entry point function of the program. Accepts input from user
//                 and calls function
// Input         : Takes value and count from standard input
// Output        : Displays the value on standard output
// Author        : Vivek Bhauraj Gautam
// Date          : 06-01-2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char iValue1 = '\0';
    int Ret = 0;
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    Ret = SearchLast(Arr,9, 30);
    cout<<"frequency of "<<30<<" is "<<Ret<<"\n";

    return 0;
}
