#include<iostream>
using namespace std;
int fact(int x)
{
    int fact =1;
    for(int i=1;i<=x;i++)
    {
        fact *= i;
    }
    return fact;
}
int combination(int n,int r)
{
    int val = fact(n)/fact(r)/fact(n-r);
    return val;
}
int main()
{
    int n,r;
    cout<<"Enter the value of n and r";
    cin>>n>>r;
    cout<<"Number of combinations are "<<combination(n,r);
    return 0;
}