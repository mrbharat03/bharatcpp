#include<iostream>
#include<stdbool.h>
using namespace std;
void prime(int x)
{
    bool flag = false;
    for(int i=2;i<x;i++)
    {
        if(x%i==0)
        {
            flag = true;
            break;
        }
    }
    if(x == 1)
    {
    cout<<"1 is neither prime nor composite";
    return;
    }
    if(flag == false)
    cout<<x<<" is prime number";
    else
    cout<<x<<" is not prime number";
    return;
}
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    prime(n);    
    return 0;
}