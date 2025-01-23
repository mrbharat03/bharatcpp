#include<iostream>
#include<math.h>
using namespace std;
void decimalNumber(int n)
{
    int sum = 0,rem,p=0;
    while(n != 0)
    {
        rem = n%10;
        sum += rem*pow(2,p);
        p++;
        n /= 10;
    }
    cout<<sum;
    return;
}
int main()
{
    int n;
    cout<<"Enter a binary number ";
    cin>>n;
    decimalNumber(n);
    return 0;
}