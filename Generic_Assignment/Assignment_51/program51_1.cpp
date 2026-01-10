// Write a generic program which accept one value and one other value from user 
// and print that value that number of time

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
// Function Name : Display
// Description   : Generic function which accepts one value of any data type and
//                 one integer, and prints the given value specified number of times
// Input         : T Value   | Value of any data type to be printed
//                 int iSize | Number of times the value should be printed
// Output        : Prints the value on standard output multiple times
// Author        : Vivek Bjauraj Gautam
// Date          : 06-01-2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////
template <class T>
void Display(T Value, int iSize)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iSize; iCnt++)
    {
        cout << Value << "\t";
    }
}

////////////////////////////////////////////////////////////////////////////////////////////////////
//
// Function Name : main
// Description   : Entry point function of the program. Accepts input from user
//                 and calls Display function to print the value multiple times
// Input         : Takes value and count from standard input
// Output        : Displays the value on standard output
// Author        : Vivek Bhauraj Gautam
// Date          : 06-01-2026
//
////////////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
    char iValue1 = '\0';
    int iValue2 = 0;

    cout << "Enter the value that you want to print : \n";
    cin >> iValue1;

    cout << "Enter how many time you want to print : \n";
    cin >> iValue2;

    Display(iValue1, iValue2);

    return 0;
}
