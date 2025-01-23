#include<iostream>
using namespace std;
void Table(int n);
void Table(int n){
    static int x = 1;
    if(x == 11)  return;
    cout<<n<<" x "<<x<<" = "<<n*x<<endl;
    x++;
    Table(n);
    return;
}
int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;
    Table(n);
    return 0;
}