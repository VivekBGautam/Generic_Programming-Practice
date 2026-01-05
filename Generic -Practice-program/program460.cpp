#include<iostream>
using namespace std;

int Addition(int No1, int No2)
{
    int Ans;
    Ans = No1 + No2;
    return Ans;
}

int main()
{
    float i = 0.f, j = 0.0f;
    float Ret = 0.0f;

    cout<<"Enter the first number : \n";
    cin>>i;

    cout<<"Enter the Second number : \n";
    cin>>j;

    Ret = Addition(i,j);
    cout<<"Addition is : "<<Ret<<"\n";

    return 0;
}