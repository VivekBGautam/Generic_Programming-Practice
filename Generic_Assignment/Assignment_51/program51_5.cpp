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
// Description   : Generic function which accepts N values and reverse the contents
// Input         : T Arr   | Address of elements of an Array
//                 int iSize | Number of times the value should be printed
// Output        : Reverse the linked list 
// Author        : Vivek Bjauraj Gautam
// Date          : 07-01-2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
T Reverse(T *Arr, int iSize)
{
    int iCnt = 0;
    int Start = 0;
    int End = 0;
    int Temp = 0;

    End = iSize-1;

    while(Start < End)
    {
        Temp = Arr[Start];
        Arr[Start] = Arr[End];
        Arr[End] = Temp;
        
        Start++;
        End++;
    }
}

void Display(int *Arr, int iSize)
{
    int iCnt = 0;

    for(iCnt = 0; iCnt<iSize; iCnt++)
    {
        cout<<Arr[iCnt]<<"\t";
    }
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
    int Ret = 0, iCnt = 0;
    int Arr[] = {10,20,30,10,30,40,10,40,10};

    Ret = Reverse(Arr,9);
    cout<<"frequency of "<<30<<" is "<<Ret<<"\n";

    return 0;
}
