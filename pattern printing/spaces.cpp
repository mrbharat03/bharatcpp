#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;i<=i;j++)
        {
            if(i==1 ||i==n||j==1)
            {
                cout<<j;
            }
            else
            cout<<" ";
        }
        cout<<endl;
    }
    return 0;
}