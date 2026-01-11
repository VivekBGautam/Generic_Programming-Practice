// Q 1. write program to multiplY two number 

#include<iostream>
using namespace std;

template <class T>
T Multiply(T No1 , T No2)
{
    T Ans;

    Ans = No1 * No2;

    return Ans;
}

int main()
{
    int iRet = Multiply(10,20);
    printf("%d",iRet);

    float fRet = Multiply(10.0f,20.0f);
    printf("%df",fRet);

    return 0;
}