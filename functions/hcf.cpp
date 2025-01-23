#include<iostream>
using namespace std;
int hcfRec(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    if(a>b) return (a%b,b);
    else
    return (a,b%a);
}
int hcf(int a,int b){
    while(a!=0 && b!=0){
        if(a>b)
        a = a%b;
        else
        b=b%a;
    }
    if(a==0)  return b;
    if(b==0) return a;
    if(a==0 && b==0) return 0;
    if(a==b) return a;
    return 0;
}
int main()
{
    int a,b;
    cout<<"Enter a number "<<endl;
    cin>>a>>b;
    cout<<"highest common factor is "<<hcfRec(a,b)<<endl;
    return 0;
}