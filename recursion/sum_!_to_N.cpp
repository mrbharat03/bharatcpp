#include<iostream>
using namespace std;
//Logic to print 1 to n
void Print1_N(int n);
void Print1_N(int n){
    if(n==0) return;
    Print1_N(n-1);
    cout<<n<<" ";
    return;
}
//Logic to print n to 1
void PrintN_1(int n);
void PrintN_1(int n){
    if(n==0) return;
    cout<<n<<" ";
    PrintN_1(n-1);
    return;
}
int main(){
    int n;
    cout<<"Enter a number ";
    cin>>n;
    Print1_N(n);
    return 0;
}