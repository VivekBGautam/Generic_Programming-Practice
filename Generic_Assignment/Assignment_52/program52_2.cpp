// Q 2. Write a generic program to find the largest number from three numbers

#include<iostream>
using namespace std;

// -----------------------------------------------------------------------------
// Function Name : CheckGreater
// Description   : This is a generic (template) function that accepts three
//                 values of the same data type and compares them to find
//                 the largest value among them.
// Input         : No1, No2, No3 (Three values of generic type T)
// Output        : Returns the largest value among the three inputs
// -----------------------------------------------------------------------------

template <class T>
T CheckGreater(T No1 , T No2 , T No3)
{
    if(No1 >= No2 && No1 >= No3)
    {
        return No1;
    }
    else if(No2 >= No1 && No2 >= No3)
    {
        return No2;
    }
    else
    {
        return No3;
    }
}

// -----------------------------------------------------------------------------
// Function Name : main
// Description   : This is the entry point of the program. It calls the
//                 CheckGreater function for integer and floating-point
//                 values and displays the largest value on the console.
// -----------------------------------------------------------------------------

int main()
{
    int iRet = CheckGreater(10,20,11);
    cout<<iRet<<"\n";

    cout<<"\n-----------------------------------------\n";

    float fRet = CheckGreater(10.0f,20.0f,31.8f);
    cout<<fRet<<"\n";

    return 0;
}
