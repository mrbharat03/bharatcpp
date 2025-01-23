#include<iostream>
using namespace std;
int Fact(int n);
int Fact(int n){
    if(n==1 || n==0) return 1;
    return n*Fact(n-1);
}
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int x = Fact(n);
    cout<<x<<endl;
    return 0;
}