#include<iostream>
using namespace std;
double Power(double x,int n)
{
    long BF = n;
    double res = 1;
    if(n<0)
    {
        x = 1/x;
        BF = -BF;
    }
    while(BF>0)
    {
        if(BF%2==1)
        {
            res *= x;
        }
        x *= x;
        BF /= 2; 
    }
    return res;
}
int main()
{
    double x;
    cout<<"Enter base ";
    cin>>x;
    int n;
    cout<<"Enter power ";
    cin>>n;
    cout<<Power(x,n);
    return 0;
}