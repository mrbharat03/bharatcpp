#include<iostream>
using namespace std;
int main()
{
    float a;
    cout<<"Enter a decimal number";
    cin>>a;
    a = (int)a;
    cout<<"Fractional part is "<<a;
    return 0;
}