#include<iostream>
using namespace std;
int main()
{
    int n,m;
    cout<<"Enter number of rows and columns ";
    cin>>n>>m;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {   
            if(i==0 || i==n-1 || j==0||j==m-1)
            cout<<'*';
            else
            cout<<" ";
        }
        cout<<'\n';
    }
    return 0;
}