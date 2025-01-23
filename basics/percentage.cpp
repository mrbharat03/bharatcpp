#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,e;
    cout<<"Enter the marks of five subjects separated by space ";
    cin>>a>>b>>c>>d>>e;
    int total = a+b+c+d+e;
    cout<<"Total marks = "<<total<<endl;
    float percentage = total / 5.0;
    cout<<"Percentage = "<<percentage;
    return 0;
}