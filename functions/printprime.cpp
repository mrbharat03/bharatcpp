#include<iostream>
using namespace std;
void prima(int n)
{
    for(int i=2;i<=n;i++)
    {
        bool flag = false;
        for(int j=2;j<n;j++)
        {
            if(i%j==0)
            {
            flag = true;
            break;
            }
        }
        if(flag == false)
        cout<<i<<endl;
    }
    return;
}
int main()
{
    int n;
    cout<<"Enter a number ";
    cin>>n;
    for(int i=2;i<=n;i++)
    {
        prima(i);
    }
    return 0;
}