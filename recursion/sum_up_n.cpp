#include<iostream>
using namespace std;
int SumN(int n);
int  SumN(int n){
    static int sum = 0;
    if(n==0) return sum;
    sum += n;
    SumN(n-1);
    return sum;
}
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    int x = SumN(n);
    cout<<"sum of "<<n<<" numbers is "<<x<<endl;
    return 0;
}