#include<iostream>
#include<math.h>
using namespace std;
void binary(int n)
{
    int i = 0,rem = 0,p=0;
    while(n != 0)
    {
        rem = n%2;
        i += rem*pow(10,p);
        p++;         
        n /= 2;
    }
    cout<<i;
    return;
}
int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;
    binary(n);
    return 0;
}