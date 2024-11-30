//minimum of 2 numbers using functions
#include<iostream>
using namespace std;
int min(int x,int y)
{
    if(x>y)
    return y;
    else
    return x;
}
int main()
{
    int a,b;
    cout<<"Enter two numbers";
    cin>>a>>b;
    cout<<min(a,b)<<" Is the minimum number";    
    return 0;
}