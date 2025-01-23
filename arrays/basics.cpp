#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter the size of an array ";
    cin>>n;
    int marks[n];
    cout<<"Enter the elements of an array ";
    for(int i=0;i<n;i++)
    {
        cin>>marks[i];
    }
    for(int i=0;i<n;i++)
    {
        cout<<" "<<marks[i];
    }
    return 0;
}