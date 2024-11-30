#include<iostream>
using namespace std;
int main()
{
    int x,y,z;
    cout<<"Enter three numbers ";
    cin>>x>>y>>z;
    if(x>y && x>z)
    {
        cout<<x<<" is greatest of all three";
    }
    else
    {
        if(y>z)
        {
            cout<<y<<" is greatest of all three";
        }
        else 
        {
            cout<<z<<" is greatest of all three";
        }
    }
    return 0;
}