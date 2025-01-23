#include<iostream>
using namespace std;
int number(int a)
{
    return a*(a+1)/2;
    // int sum = 0;
    // for(int i=1;i<=a;i++)
    // {
    // sum += i;
    // }
    // return sum;
}
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    cout<<"The sum of first "<<n<<" natural numbers is "<<number(n)<<endl;
    return 0;
}