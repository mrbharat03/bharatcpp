#include<iostream>
using namespace std;
int fibo(int n)
{   
    int a=0,b=1,sum;
    for(int i=2;i<n;i++)
    {
        sum = a+b;
        a=b;
        b=sum;
    }
    return b;
}
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<fibo(n);
    return 0;
}